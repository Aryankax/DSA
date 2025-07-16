# DSA

<plugin>
  <groupId>org.openapitools</groupId>
  <artifactId>openapi-generator-maven-plugin</artifactId>
  <version>7.6.0</version>
  <executions>
    <!-- Finance API -->
    <execution>
      <id>generate-finance-api</id>
      <goals>
        <goal>generate</goal>
      </goals>
      <configuration>
        <inputSpec>${project.basedir}/src/main/resources/openapi/finance-oas.yml</inputSpec>
        <generatorName>spring</generatorName>
        <output>${project.build.directory}/generated-sources/finance</output>
        <apiPackage>com.example.finance.api</apiPackage>
        <modelPackage>com.example.finance.model</modelPackage>
        <invokerPackage>com.example.finance.invoker</invokerPackage>
        <configOptions>
          <interfaceOnly>true</interfaceOnly> <!-- only generate interfaces -->
          <useSpringBoot3>true</useSpringBoot3> <!-- optional for Spring Boot 3 -->
        </configOptions>
      </configuration>
    </execution>

    <!-- Tradingbook API -->
    <execution>
      <id>generate-tradingbook-api</id>
      <goals>
        <goal>generate</goal>
      </goals>
      <configuration>
        <inputSpec>${project.basedir}/src/main/resources/openapi/tradingbook-OAS.yml</inputSpec>
        <generatorName>spring</generatorName>
        <output>${project.build.directory}/generated-sources/tradingbook</output>
        <apiPackage>com.example.tradingbook.api</apiPackage>
        <modelPackage>com.example.tradingbook.model</modelPackage>
        <invokerPackage>com.example.tradingbook.invoker</invokerPackage>
      </configuration>
    </execution>

    <!-- Treasurybook API -->
    <execution>
      <id>generate-treasurybook-api</id>
      <goals>
        <goal>generate</goal>
      </goals>
      <configuration>
        <inputSpec>${project.basedir}/src/main/resources/openapi/treasurybook-oas.yml</inputSpec>
        <generatorName>spring</generatorName>
        <output>${project.build.directory}/generated-sources/treasurybook</output>
        <apiPackage>com.example.treasurybook.api</apiPackage>
        <modelPackage>com.example.treasurybook.model</modelPackage>
        <invokerPackage>com.example.treasurybook.invoker</invokerPackage>
      </configuration>
    </execution>
  </executions>
</plugin>
