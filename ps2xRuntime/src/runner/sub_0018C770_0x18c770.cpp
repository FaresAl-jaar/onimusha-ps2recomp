#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018C770
// Address: 0x18c770 - 0x18e07c
void sub_0018C770_0x18c770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C770_0x18c770");
#endif

    switch (ctx->pc) {
        case 0x18c7c0u: goto label_18c7c0;
        case 0x18c7d0u: goto label_18c7d0;
        case 0x18c7d8u: goto label_18c7d8;
        case 0x18c7e4u: goto label_18c7e4;
        case 0x18c7f0u: goto label_18c7f0;
        case 0x18c7fcu: goto label_18c7fc;
        case 0x18c808u: goto label_18c808;
        case 0x18c8d0u: goto label_18c8d0;
        case 0x18c8e4u: goto label_18c8e4;
        case 0x18c900u: goto label_18c900;
        case 0x18c91cu: goto label_18c91c;
        case 0x18c930u: goto label_18c930;
        case 0x18c950u: goto label_18c950;
        case 0x18c958u: goto label_18c958;
        case 0x18c98cu: goto label_18c98c;
        case 0x18c99cu: goto label_18c99c;
        case 0x18c9acu: goto label_18c9ac;
        case 0x18c9c0u: goto label_18c9c0;
        case 0x18c9d8u: goto label_18c9d8;
        case 0x18ca08u: goto label_18ca08;
        case 0x18ca10u: goto label_18ca10;
        case 0x18ca18u: goto label_18ca18;
        case 0x18ca24u: goto label_18ca24;
        case 0x18ca30u: goto label_18ca30;
        case 0x18ca3cu: goto label_18ca3c;
        case 0x18ca4cu: goto label_18ca4c;
        case 0x18ca54u: goto label_18ca54;
        case 0x18ca68u: goto label_18ca68;
        case 0x18ca70u: goto label_18ca70;
        case 0x18ca7cu: goto label_18ca7c;
        case 0x18ca88u: goto label_18ca88;
        case 0x18ca94u: goto label_18ca94;
        case 0x18caa0u: goto label_18caa0;
        case 0x18cb68u: goto label_18cb68;
        case 0x18cb7cu: goto label_18cb7c;
        case 0x18cb98u: goto label_18cb98;
        case 0x18cbb4u: goto label_18cbb4;
        case 0x18cbc8u: goto label_18cbc8;
        case 0x18cbe8u: goto label_18cbe8;
        case 0x18cbf0u: goto label_18cbf0;
        case 0x18cc24u: goto label_18cc24;
        case 0x18cc34u: goto label_18cc34;
        case 0x18cc44u: goto label_18cc44;
        case 0x18cc58u: goto label_18cc58;
        case 0x18cc70u: goto label_18cc70;
        case 0x18cca0u: goto label_18cca0;
        case 0x18cca8u: goto label_18cca8;
        case 0x18ccb0u: goto label_18ccb0;
        case 0x18ccbcu: goto label_18ccbc;
        case 0x18ccc8u: goto label_18ccc8;
        case 0x18ccd4u: goto label_18ccd4;
        case 0x18cce4u: goto label_18cce4;
        case 0x18ccecu: goto label_18ccec;
        case 0x18cd00u: goto label_18cd00;
        case 0x18cd08u: goto label_18cd08;
        case 0x18cd14u: goto label_18cd14;
        case 0x18cd20u: goto label_18cd20;
        case 0x18cd2cu: goto label_18cd2c;
        case 0x18cd38u: goto label_18cd38;
        case 0x18ce00u: goto label_18ce00;
        case 0x18ce18u: goto label_18ce18;
        case 0x18ce38u: goto label_18ce38;
        case 0x18ce4cu: goto label_18ce4c;
        case 0x18ce5cu: goto label_18ce5c;
        case 0x18ce74u: goto label_18ce74;
        case 0x18ce78u: goto label_18ce78;
        case 0x18ceacu: goto label_18ceac;
        case 0x18cec0u: goto label_18cec0;
        case 0x18ced8u: goto label_18ced8;
        case 0x18ceecu: goto label_18ceec;
        case 0x18cf04u: goto label_18cf04;
        case 0x18cf2cu: goto label_18cf2c;
        case 0x18cf3cu: goto label_18cf3c;
        case 0x18cf4cu: goto label_18cf4c;
        case 0x18cf64u: goto label_18cf64;
        case 0x18cf7cu: goto label_18cf7c;
        case 0x18cf94u: goto label_18cf94;
        case 0x18cfacu: goto label_18cfac;
        case 0x18cfc4u: goto label_18cfc4;
        case 0x18cff8u: goto label_18cff8;
        case 0x18d00cu: goto label_18d00c;
        case 0x18d01cu: goto label_18d01c;
        case 0x18d03cu: goto label_18d03c;
        case 0x18d054u: goto label_18d054;
        case 0x18d064u: goto label_18d064;
        case 0x18d07cu: goto label_18d07c;
        case 0x18d08cu: goto label_18d08c;
        case 0x18d090u: goto label_18d090;
        case 0x18d0c4u: goto label_18d0c4;
        case 0x18d0d4u: goto label_18d0d4;
        case 0x18d0ecu: goto label_18d0ec;
        case 0x18d100u: goto label_18d100;
        case 0x18d118u: goto label_18d118;
        case 0x18d134u: goto label_18d134;
        case 0x18d144u: goto label_18d144;
        case 0x18d168u: goto label_18d168;
        case 0x18d17cu: goto label_18d17c;
        case 0x18d18cu: goto label_18d18c;
        case 0x18d19cu: goto label_18d19c;
        case 0x18d1acu: goto label_18d1ac;
        case 0x18d1bcu: goto label_18d1bc;
        case 0x18d1c0u: goto label_18d1c0;
        case 0x18d1f4u: goto label_18d1f4;
        case 0x18d20cu: goto label_18d20c;
        case 0x18d224u: goto label_18d224;
        case 0x18d24cu: goto label_18d24c;
        case 0x18d258u: goto label_18d258;
        case 0x18d268u: goto label_18d268;
        case 0x18d2d8u: goto label_18d2d8;
        case 0x18d30cu: goto label_18d30c;
        case 0x18d320u: goto label_18d320;
        case 0x18d330u: goto label_18d330;
        case 0x18d340u: goto label_18d340;
        case 0x18d350u: goto label_18d350;
        case 0x18d360u: goto label_18d360;
        case 0x18d370u: goto label_18d370;
        case 0x18d380u: goto label_18d380;
        case 0x18d390u: goto label_18d390;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d418u: goto label_18d418;
        case 0x18d44cu: goto label_18d44c;
        case 0x18d460u: goto label_18d460;
        case 0x18d470u: goto label_18d470;
        case 0x18d480u: goto label_18d480;
        case 0x18d490u: goto label_18d490;
        case 0x18d4a0u: goto label_18d4a0;
        case 0x18d4b0u: goto label_18d4b0;
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4d0u: goto label_18d4d0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d53cu: goto label_18d53c;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d564u: goto label_18d564;
        case 0x18d57cu: goto label_18d57c;
        case 0x18d594u: goto label_18d594;
        case 0x18d5acu: goto label_18d5ac;
        case 0x18d5c4u: goto label_18d5c4;
        case 0x18d5d4u: goto label_18d5d4;
        case 0x18d5f0u: goto label_18d5f0;
        case 0x18d604u: goto label_18d604;
        case 0x18d624u: goto label_18d624;
        case 0x18d634u: goto label_18d634;
        case 0x18d648u: goto label_18d648;
        case 0x18d658u: goto label_18d658;
        case 0x18d668u: goto label_18d668;
        case 0x18d684u: goto label_18d684;
        case 0x18d69cu: goto label_18d69c;
        case 0x18d6a0u: goto label_18d6a0;
        case 0x18d6d4u: goto label_18d6d4;
        case 0x18d6e8u: goto label_18d6e8;
        case 0x18d700u: goto label_18d700;
        case 0x18d714u: goto label_18d714;
        case 0x18d72cu: goto label_18d72c;
        case 0x18d748u: goto label_18d748;
        case 0x18d77cu: goto label_18d77c;
        case 0x18d798u: goto label_18d798;
        case 0x18d7acu: goto label_18d7ac;
        case 0x18d7c0u: goto label_18d7c0;
        case 0x18d7d4u: goto label_18d7d4;
        case 0x18d7e4u: goto label_18d7e4;
        case 0x18d81cu: goto label_18d81c;
        case 0x18d82cu: goto label_18d82c;
        case 0x18d850u: goto label_18d850;
        case 0x18d870u: goto label_18d870;
        case 0x18d880u: goto label_18d880;
        case 0x18d888u: goto label_18d888;
        case 0x18d890u: goto label_18d890;
        case 0x18d8b8u: goto label_18d8b8;
        case 0x18d8e0u: goto label_18d8e0;
        case 0x18d8ecu: goto label_18d8ec;
        case 0x18d8f8u: goto label_18d8f8;
        case 0x18d904u: goto label_18d904;
        case 0x18d914u: goto label_18d914;
        case 0x18d91cu: goto label_18d91c;
        case 0x18d930u: goto label_18d930;
        case 0x18d938u: goto label_18d938;
        case 0x18d944u: goto label_18d944;
        case 0x18d950u: goto label_18d950;
        case 0x18d95cu: goto label_18d95c;
        case 0x18d968u: goto label_18d968;
        case 0x18da30u: goto label_18da30;
        case 0x18da48u: goto label_18da48;
        case 0x18da68u: goto label_18da68;
        case 0x18da84u: goto label_18da84;
        case 0x18da98u: goto label_18da98;
        case 0x18dab0u: goto label_18dab0;
        case 0x18dac0u: goto label_18dac0;
        case 0x18dac8u: goto label_18dac8;
        case 0x18dafcu: goto label_18dafc;
        case 0x18db10u: goto label_18db10;
        case 0x18db28u: goto label_18db28;
        case 0x18db3cu: goto label_18db3c;
        case 0x18db54u: goto label_18db54;
        case 0x18db78u: goto label_18db78;
        case 0x18dbacu: goto label_18dbac;
        case 0x18dbc0u: goto label_18dbc0;
        case 0x18dbd0u: goto label_18dbd0;
        case 0x18dbe8u: goto label_18dbe8;
        case 0x18dbf8u: goto label_18dbf8;
        case 0x18dc00u: goto label_18dc00;
        case 0x18dc34u: goto label_18dc34;
        case 0x18dc44u: goto label_18dc44;
        case 0x18dc5cu: goto label_18dc5c;
        case 0x18dc70u: goto label_18dc70;
        case 0x18dc88u: goto label_18dc88;
        case 0x18dcb4u: goto label_18dcb4;
        case 0x18dcccu: goto label_18dccc;
        case 0x18dcdcu: goto label_18dcdc;
        case 0x18dcecu: goto label_18dcec;
        case 0x18dd10u: goto label_18dd10;
        case 0x18dd24u: goto label_18dd24;
        case 0x18dd3cu: goto label_18dd3c;
        case 0x18dd4cu: goto label_18dd4c;
        case 0x18dd50u: goto label_18dd50;
        case 0x18dd84u: goto label_18dd84;
        case 0x18dd94u: goto label_18dd94;
        case 0x18dda8u: goto label_18dda8;
        case 0x18ddbcu: goto label_18ddbc;
        case 0x18ddd4u: goto label_18ddd4;
        case 0x18ddf8u: goto label_18ddf8;
        case 0x18de08u: goto label_18de08;
        case 0x18de18u: goto label_18de18;
        case 0x18de30u: goto label_18de30;
        case 0x18de48u: goto label_18de48;
        case 0x18de60u: goto label_18de60;
        case 0x18de78u: goto label_18de78;
        case 0x18de90u: goto label_18de90;
        case 0x18dec4u: goto label_18dec4;
        case 0x18dee0u: goto label_18dee0;
        case 0x18def4u: goto label_18def4;
        case 0x18df08u: goto label_18df08;
        case 0x18df18u: goto label_18df18;
        case 0x18df3cu: goto label_18df3c;
        case 0x18df5cu: goto label_18df5c;
        case 0x18df6cu: goto label_18df6c;
        case 0x18df74u: goto label_18df74;
        case 0x18df7cu: goto label_18df7c;
        case 0x18dfa4u: goto label_18dfa4;
        case 0x18dfccu: goto label_18dfcc;
        case 0x18dfd8u: goto label_18dfd8;
        case 0x18dfe4u: goto label_18dfe4;
        case 0x18dff0u: goto label_18dff0;
        case 0x18e000u: goto label_18e000;
        case 0x18e008u: goto label_18e008;
        default: break;
    }

    ctx->pc = 0x18c770u;

    // 0x18c770: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x18c770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x18c774: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x18c774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x18c778: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x18c778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18c77c: 0x24426700  addiu       $v0, $v0, 0x6700
    ctx->pc = 0x18c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26368));
    // 0x18c780: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18c780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18c784: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18c784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18c788: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18c78c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18c790: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18c790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18c794: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18c798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c7a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c7a4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x18c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x18c7a8: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x18c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
    // 0x18c7ac: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x18c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x18c7b0: 0x2442f23a  addiu       $v0, $v0, -0xDC6
    ctx->pc = 0x18c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963770));
    // 0x18c7b4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x18c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x18c7b8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x18c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x18c7bc: 0x0  nop
    ctx->pc = 0x18c7bcu;
    // NOP
label_18c7c0:
    // 0x18c7c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18c7c4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c7c8: 0xc041290  jal         func_104A40
    ctx->pc = 0x18C7C8u;
    SET_GPR_U32(ctx, 31, 0x18C7D0u);
    ctx->pc = 0x18C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7C8u;
    // 0x18c7cc: 0xac4502c0  sw          $a1, 0x2C0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 704), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18C7C8u, 0x18C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7D0u;
label_18c7d0:
    // 0x18c7d0: 0xc041294  jal         func_104A50
    ctx->pc = 0x18C7D0u;
    SET_GPR_U32(ctx, 31, 0x18C7D8u);
    ctx->pc = 0x18C7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7D0u;
    // 0x18c7d4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18C7D0u, 0x18C7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7D8u;
label_18c7d8:
    // 0x18c7d8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c7dc: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18C7DCu;
    SET_GPR_U32(ctx, 31, 0x18C7E4u);
    ctx->pc = 0x18C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7DCu;
    // 0x18c7e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18C7DCu, 0x18C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7E4u;
label_18c7e4:
    // 0x18c7e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c7e8: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18C7E8u;
    SET_GPR_U32(ctx, 31, 0x18C7F0u);
    ctx->pc = 0x18C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7E8u;
    // 0x18c7ec: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18C7E8u, 0x18C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7F0u;
label_18c7f0:
    // 0x18c7f0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c7f4: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18C7F4u;
    SET_GPR_U32(ctx, 31, 0x18C7FCu);
    ctx->pc = 0x18C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7F4u;
    // 0x18c7f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18C7F4u, 0x18C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7FCu;
label_18c7fc:
    // 0x18c7fc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c800: 0xc041386  jal         func_104E18
    ctx->pc = 0x18C800u;
    SET_GPR_U32(ctx, 31, 0x18C808u);
    ctx->pc = 0x18C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C800u;
    // 0x18c804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18C800u, 0x18C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C808u;
label_18c808:
    // 0x18c808: 0x97a500e0  lhu         $a1, 0xE0($sp)
    ctx->pc = 0x18c808u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18c80c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x18c80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18c810: 0x25980  sll         $t3, $v0, 6
    ctx->pc = 0x18c810u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18c814: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x18c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18c818: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x18c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18c81c: 0x30047fff  andi        $a0, $zero, 0x7FFF
    ctx->pc = 0x18c81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18c820: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x18c820u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c824: 0x240cff7f  addiu       $t4, $zero, -0x81
    ctx->pc = 0x18c824u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18c828: 0x640d0080  daddiu      $t5, $zero, 0x80
    ctx->pc = 0x18c828u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18c82c: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x18c82cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18c830: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x18c830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18c834: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x18c834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18c838: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x18c838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18c83c: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x18c83cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18c840: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18c840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18c844: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18c844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18c848: 0xa7a200e0  sh          $v0, 0xE0($sp)
    ctx->pc = 0x18c848u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c84c: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x18c84cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18c850: 0x27a200e1  addiu       $v0, $sp, 0xE1
    ctx->pc = 0x18c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 225));
    // 0x18c854: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18c854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c858: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x18c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x18c85c: 0x4d6025  or          $t4, $v0, $t5
    ctx->pc = 0x18c85cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x18c860: 0x27a200e1  addiu       $v0, $sp, 0xE1
    ctx->pc = 0x18c860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 225));
    // 0x18c864: 0xa04c0000  sb          $t4, 0x0($v0)
    ctx->pc = 0x18c864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x18c868: 0x27a200e5  addiu       $v0, $sp, 0xE5
    ctx->pc = 0x18c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 229));
    // 0x18c86c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18c86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c870: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18c874: 0x4b5025  or          $t2, $v0, $t3
    ctx->pc = 0x18c874u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x18c878: 0x27a200e5  addiu       $v0, $sp, 0xE5
    ctx->pc = 0x18c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 229));
    // 0x18c87c: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x18c87cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x18c880: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18c884: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18c884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c888: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x18c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x18c88c: 0x494025  or          $t0, $v0, $t1
    ctx->pc = 0x18c88cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18c890: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18c894: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x18c894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x18c898: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18c898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c89c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x18c89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x18c8a0: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x18c8a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x18c8a4: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18c8a8: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x18c8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x18c8ac: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x18c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x18c8b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18c8b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c8b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c8b8: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x18c8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18c8bc: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x18c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x18c8c0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x18c8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18c8c4: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x18c8c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18c8c8: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18C8C8u;
    SET_GPR_U32(ctx, 31, 0x18C8D0u);
    ctx->pc = 0x18C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8C8u;
    // 0x18c8cc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18C8C8u, 0x18C8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8D0u;
label_18c8d0:
    // 0x18c8d0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x18c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x18c8d4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c8d8: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18c8dc: 0xc041418  jal         func_105060
    ctx->pc = 0x18C8DCu;
    SET_GPR_U32(ctx, 31, 0x18C8E4u);
    ctx->pc = 0x18C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8DCu;
    // 0x18c8e0: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C8DCu, 0x18C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8E4u;
label_18c8e4:
    // 0x18c8e4: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x18c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x18c8e8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18c8ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18c8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18c8f0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c8f4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18c8f8: 0xc041418  jal         func_105060
    ctx->pc = 0x18C8F8u;
    SET_GPR_U32(ctx, 31, 0x18C900u);
    ctx->pc = 0x18C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8F8u;
    // 0x18c8fc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C8F8u, 0x18C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C900u;
label_18c900:
    // 0x18c900: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x18c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x18c904: 0x24027800  addiu       $v0, $zero, 0x7800
    ctx->pc = 0x18c904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x18c908: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18c908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18c90c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c910: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x18c910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18c914: 0xc041418  jal         func_105060
    ctx->pc = 0x18C914u;
    SET_GPR_U32(ctx, 31, 0x18C91Cu);
    ctx->pc = 0x18C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C914u;
    // 0x18c918: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C914u, 0x18C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C91Cu;
label_18c91c:
    // 0x18c91c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x18c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x18c920: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c924: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18c924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18c928: 0xc041418  jal         func_105060
    ctx->pc = 0x18C928u;
    SET_GPR_U32(ctx, 31, 0x18C930u);
    ctx->pc = 0x18C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C928u;
    // 0x18c92c: 0x34463002  ori         $a2, $v0, 0x3002 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12290);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C928u, 0x18C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C930u;
label_18c930:
    // 0x18c930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c934: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x18c934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x18c938: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18c938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18c93c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x18c93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x18c940: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c944: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x18c944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18c948: 0xc041418  jal         func_105060
    ctx->pc = 0x18C948u;
    SET_GPR_U32(ctx, 31, 0x18C950u);
    ctx->pc = 0x18C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C948u;
    // 0x18c94c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C948u, 0x18C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C950u;
label_18c950:
    // 0x18c950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18c950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c954: 0x0  nop
    ctx->pc = 0x18c954u;
    // NOP
label_18c958:
    // 0x18c958: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18c958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18c95c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c960: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18c960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18c964: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18c968: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18c968u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18c96c: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18c96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18c970: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18c970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18c974: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x18c974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x18c978: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18c978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18c97c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c980: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c984: 0xc041418  jal         func_105060
    ctx->pc = 0x18C984u;
    SET_GPR_U32(ctx, 31, 0x18C98Cu);
    ctx->pc = 0x18C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C984u;
    // 0x18c988: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C984u, 0x18C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C98Cu;
label_18c98c:
    // 0x18c98c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c994: 0xc041418  jal         func_105060
    ctx->pc = 0x18C994u;
    SET_GPR_U32(ctx, 31, 0x18C99Cu);
    ctx->pc = 0x18C998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C994u;
    // 0x18c998: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C994u, 0x18C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C99Cu;
label_18c99c:
    // 0x18c99c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c9a0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c9a4: 0xc041418  jal         func_105060
    ctx->pc = 0x18C9A4u;
    SET_GPR_U32(ctx, 31, 0x18C9ACu);
    ctx->pc = 0x18C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9A4u;
    // 0x18c9a8: 0x5303c  dsll32      $a2, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C9A4u, 0x18C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9ACu;
label_18c9ac:
    // 0x18c9ac: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x18c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x18c9b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c9b4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18c9b8: 0xc041418  jal         func_105060
    ctx->pc = 0x18C9B8u;
    SET_GPR_U32(ctx, 31, 0x18C9C0u);
    ctx->pc = 0x18C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9B8u;
    // 0x18c9bc: 0x34467800  ori         $a2, $v0, 0x7800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C9B8u, 0x18C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9C0u;
label_18c9c0:
    // 0x18c9c0: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x18c9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x18c9c4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c9c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18c9cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c9d0: 0xc041418  jal         func_105060
    ctx->pc = 0x18C9D0u;
    SET_GPR_U32(ctx, 31, 0x18C9D8u);
    ctx->pc = 0x18C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9D0u;
    // 0x18c9d4: 0x34468800  ori         $a2, $v0, 0x8800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18C9D0u, 0x18C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9D8u;
label_18c9d8:
    // 0x18c9d8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18c9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18c9dc: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x18c9dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x18c9e0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x18C9E0u;
    {
        const bool branch_taken_0x18c9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9E0u;
        // 0x18c9e4: 0x3c0300de  lui         $v1, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)222 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9e0) {
            ctx->pc = 0x18C958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c958;
        }
    }
    ctx->pc = 0x18C9E8u;
    // 0x18c9e8: 0x3c0200fe  lui         $v0, 0xFE
    ctx->pc = 0x18c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)254 << 16));
    // 0x18c9ec: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18c9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18c9f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18c9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18c9f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18c9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18c9f8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c9fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18c9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18ca00: 0xc041418  jal         func_105060
    ctx->pc = 0x18CA00u;
    SET_GPR_U32(ctx, 31, 0x18CA08u);
    ctx->pc = 0x18CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA00u;
    // 0x18ca04: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CA00u, 0x18CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA08u;
label_18ca08:
    // 0x18ca08: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18CA08u;
    SET_GPR_U32(ctx, 31, 0x18CA10u);
    ctx->pc = 0x18CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA08u;
    // 0x18ca0c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18CA08u, 0x18CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA10u;
label_18ca10:
    // 0x18ca10: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18CA10u;
    SET_GPR_U32(ctx, 31, 0x18CA18u);
    ctx->pc = 0x18CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA10u;
    // 0x18ca14: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18CA10u, 0x18CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA18u;
label_18ca18:
    // 0x18ca18: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ca1c: 0xc041322  jal         func_104C88
    ctx->pc = 0x18CA1Cu;
    SET_GPR_U32(ctx, 31, 0x18CA24u);
    ctx->pc = 0x18CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA1Cu;
    // 0x18ca20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x18CA1Cu, 0x18CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA24u;
label_18ca24:
    // 0x18ca24: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ca28: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18CA28u;
    SET_GPR_U32(ctx, 31, 0x18CA30u);
    ctx->pc = 0x18CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA28u;
    // 0x18ca2c: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18CA28u, 0x18CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA30u;
label_18ca30:
    // 0x18ca30: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ca34: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18CA34u;
    SET_GPR_U32(ctx, 31, 0x18CA3Cu);
    ctx->pc = 0x18CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA34u;
    // 0x18ca38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18CA34u, 0x18CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA3Cu;
label_18ca3c:
    // 0x18ca3c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ca40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ca44: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18CA44u;
    SET_GPR_U32(ctx, 31, 0x18CA4Cu);
    ctx->pc = 0x18CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA44u;
    // 0x18ca48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18CA44u, 0x18CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA4Cu;
label_18ca4c:
    // 0x18ca4c: 0xc041298  jal         func_104A60
    ctx->pc = 0x18CA4Cu;
    SET_GPR_U32(ctx, 31, 0x18CA54u);
    ctx->pc = 0x18CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA4Cu;
    // 0x18ca50: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18CA4Cu, 0x18CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA54u;
label_18ca54:
    // 0x18ca54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ca54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca58: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ca5c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18ca60: 0xc041290  jal         func_104A40
    ctx->pc = 0x18CA60u;
    SET_GPR_U32(ctx, 31, 0x18CA68u);
    ctx->pc = 0x18CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA60u;
    // 0x18ca64: 0xac4502d0  sw          $a1, 0x2D0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18CA60u, 0x18CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA68u;
label_18ca68:
    // 0x18ca68: 0xc041294  jal         func_104A50
    ctx->pc = 0x18CA68u;
    SET_GPR_U32(ctx, 31, 0x18CA70u);
    ctx->pc = 0x18CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA68u;
    // 0x18ca6c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18CA68u, 0x18CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA70u;
label_18ca70:
    // 0x18ca70: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ca74: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18CA74u;
    SET_GPR_U32(ctx, 31, 0x18CA7Cu);
    ctx->pc = 0x18CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA74u;
    // 0x18ca78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18CA74u, 0x18CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA7Cu;
label_18ca7c:
    // 0x18ca7c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ca80: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18CA80u;
    SET_GPR_U32(ctx, 31, 0x18CA88u);
    ctx->pc = 0x18CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA80u;
    // 0x18ca84: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18CA80u, 0x18CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA88u;
label_18ca88:
    // 0x18ca88: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ca8c: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18CA8Cu;
    SET_GPR_U32(ctx, 31, 0x18CA94u);
    ctx->pc = 0x18CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA8Cu;
    // 0x18ca90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18CA8Cu, 0x18CA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA94u;
label_18ca94:
    // 0x18ca94: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ca98: 0xc041386  jal         func_104E18
    ctx->pc = 0x18CA98u;
    SET_GPR_U32(ctx, 31, 0x18CAA0u);
    ctx->pc = 0x18CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA98u;
    // 0x18ca9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18CA98u, 0x18CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAA0u;
label_18caa0:
    // 0x18caa0: 0x97a500e0  lhu         $a1, 0xE0($sp)
    ctx->pc = 0x18caa0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18caa4: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x18caa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18caa8: 0x25980  sll         $t3, $v0, 6
    ctx->pc = 0x18caa8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18caac: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x18caacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18cab0: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x18cab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18cab4: 0x30047fff  andi        $a0, $zero, 0x7FFF
    ctx->pc = 0x18cab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18cab8: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x18cab8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18cabc: 0x240cff7f  addiu       $t4, $zero, -0x81
    ctx->pc = 0x18cabcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18cac0: 0x640d0080  daddiu      $t5, $zero, 0x80
    ctx->pc = 0x18cac0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18cac4: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x18cac4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18cac8: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x18cac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18cacc: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x18caccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18cad0: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x18cad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18cad4: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x18cad4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18cad8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18cad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18cadc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18cae0: 0xa7a200e0  sh          $v0, 0xE0($sp)
    ctx->pc = 0x18cae0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cae4: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x18cae4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18cae8: 0x27a200e1  addiu       $v0, $sp, 0xE1
    ctx->pc = 0x18cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 225));
    // 0x18caec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18caecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18caf0: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x18caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x18caf4: 0x4d6025  or          $t4, $v0, $t5
    ctx->pc = 0x18caf4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x18caf8: 0x27a200e1  addiu       $v0, $sp, 0xE1
    ctx->pc = 0x18caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 225));
    // 0x18cafc: 0xa04c0000  sb          $t4, 0x0($v0)
    ctx->pc = 0x18cafcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x18cb00: 0x27a200e5  addiu       $v0, $sp, 0xE5
    ctx->pc = 0x18cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 229));
    // 0x18cb04: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cb08: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18cb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18cb0c: 0x4b5025  or          $t2, $v0, $t3
    ctx->pc = 0x18cb0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x18cb10: 0x27a200e5  addiu       $v0, $sp, 0xE5
    ctx->pc = 0x18cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 229));
    // 0x18cb14: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x18cb14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x18cb18: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18cb1c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cb1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cb20: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x18cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x18cb24: 0x494025  or          $t0, $v0, $t1
    ctx->pc = 0x18cb24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18cb28: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18cb2c: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x18cb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x18cb30: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cb30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cb34: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x18cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x18cb38: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x18cb38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x18cb3c: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18cb40: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x18cb40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x18cb44: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x18cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x18cb48: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cb48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cb4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18cb50: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x18cb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18cb54: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x18cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x18cb58: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x18cb58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18cb5c: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x18cb5cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18cb60: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18CB60u;
    SET_GPR_U32(ctx, 31, 0x18CB68u);
    ctx->pc = 0x18CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB60u;
    // 0x18cb64: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18CB60u, 0x18CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB68u;
label_18cb68:
    // 0x18cb68: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x18cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x18cb6c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cb70: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18cb74: 0xc041418  jal         func_105060
    ctx->pc = 0x18CB74u;
    SET_GPR_U32(ctx, 31, 0x18CB7Cu);
    ctx->pc = 0x18CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB74u;
    // 0x18cb78: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CB74u, 0x18CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB7Cu;
label_18cb7c:
    // 0x18cb7c: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x18cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x18cb80: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18cb84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18cb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18cb88: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cb8c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18cb90: 0xc041418  jal         func_105060
    ctx->pc = 0x18CB90u;
    SET_GPR_U32(ctx, 31, 0x18CB98u);
    ctx->pc = 0x18CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB90u;
    // 0x18cb94: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CB90u, 0x18CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB98u;
label_18cb98:
    // 0x18cb98: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x18cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x18cb9c: 0x24027800  addiu       $v0, $zero, 0x7800
    ctx->pc = 0x18cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x18cba0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18cba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18cba4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cba8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x18cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18cbac: 0xc041418  jal         func_105060
    ctx->pc = 0x18CBACu;
    SET_GPR_U32(ctx, 31, 0x18CBB4u);
    ctx->pc = 0x18CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBACu;
    // 0x18cbb0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CBACu, 0x18CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBB4u;
label_18cbb4:
    // 0x18cbb4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x18cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x18cbb8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cbbc: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18cbc0: 0xc041418  jal         func_105060
    ctx->pc = 0x18CBC0u;
    SET_GPR_U32(ctx, 31, 0x18CBC8u);
    ctx->pc = 0x18CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBC0u;
    // 0x18cbc4: 0x34463000  ori         $a2, $v0, 0x3000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CBC0u, 0x18CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBC8u;
label_18cbc8:
    // 0x18cbc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cbcc: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x18cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x18cbd0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18cbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18cbd4: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x18cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x18cbd8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cbdc: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x18cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18cbe0: 0xc041418  jal         func_105060
    ctx->pc = 0x18CBE0u;
    SET_GPR_U32(ctx, 31, 0x18CBE8u);
    ctx->pc = 0x18CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBE0u;
    // 0x18cbe4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CBE0u, 0x18CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBE8u;
label_18cbe8:
    // 0x18cbe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18cbe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbec: 0x0  nop
    ctx->pc = 0x18cbecu;
    // NOP
label_18cbf0:
    // 0x18cbf0: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18cbf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18cbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18cbf8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18cbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18cbfc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18cbfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18cc00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18cc00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18cc04: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18cc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18cc08: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18cc0c: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x18cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x18cc10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18cc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18cc14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18cc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18cc18: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cc1c: 0xc041418  jal         func_105060
    ctx->pc = 0x18CC1Cu;
    SET_GPR_U32(ctx, 31, 0x18CC24u);
    ctx->pc = 0x18CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC1Cu;
    // 0x18cc20: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CC1Cu, 0x18CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC24u;
label_18cc24:
    // 0x18cc24: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cc28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc2c: 0xc041418  jal         func_105060
    ctx->pc = 0x18CC2Cu;
    SET_GPR_U32(ctx, 31, 0x18CC34u);
    ctx->pc = 0x18CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC2Cu;
    // 0x18cc30: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CC2Cu, 0x18CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC34u;
label_18cc34:
    // 0x18cc34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cc38: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cc3c: 0xc041418  jal         func_105060
    ctx->pc = 0x18CC3Cu;
    SET_GPR_U32(ctx, 31, 0x18CC44u);
    ctx->pc = 0x18CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC3Cu;
    // 0x18cc40: 0x5303c  dsll32      $a2, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CC3Cu, 0x18CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC44u;
label_18cc44:
    // 0x18cc44: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x18cc48: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cc4c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18cc50: 0xc041418  jal         func_105060
    ctx->pc = 0x18CC50u;
    SET_GPR_U32(ctx, 31, 0x18CC58u);
    ctx->pc = 0x18CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC50u;
    // 0x18cc54: 0x34467800  ori         $a2, $v0, 0x7800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CC50u, 0x18CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC58u;
label_18cc58:
    // 0x18cc58: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x18cc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x18cc5c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cc60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18cc64: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18cc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18cc68: 0xc041418  jal         func_105060
    ctx->pc = 0x18CC68u;
    SET_GPR_U32(ctx, 31, 0x18CC70u);
    ctx->pc = 0x18CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC68u;
    // 0x18cc6c: 0x34468800  ori         $a2, $v0, 0x8800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CC68u, 0x18CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC70u;
label_18cc70:
    // 0x18cc70: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18cc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18cc74: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x18cc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x18cc78: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x18CC78u;
    {
        const bool branch_taken_0x18cc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC78u;
        // 0x18cc7c: 0x3c0300de  lui         $v1, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)222 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc78) {
            ctx->pc = 0x18CBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cbf0;
        }
    }
    ctx->pc = 0x18CC80u;
    // 0x18cc80: 0x3c0200fe  lui         $v0, 0xFE
    ctx->pc = 0x18cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)254 << 16));
    // 0x18cc84: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18cc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18cc88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18cc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18cc8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18cc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18cc90: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cc94: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18cc98: 0xc041418  jal         func_105060
    ctx->pc = 0x18CC98u;
    SET_GPR_U32(ctx, 31, 0x18CCA0u);
    ctx->pc = 0x18CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC98u;
    // 0x18cc9c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CC98u, 0x18CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCA0u;
label_18cca0:
    // 0x18cca0: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18CCA0u;
    SET_GPR_U32(ctx, 31, 0x18CCA8u);
    ctx->pc = 0x18CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCA0u;
    // 0x18cca4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18CCA0u, 0x18CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCA8u;
label_18cca8:
    // 0x18cca8: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18CCA8u;
    SET_GPR_U32(ctx, 31, 0x18CCB0u);
    ctx->pc = 0x18CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCA8u;
    // 0x18ccac: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18CCA8u, 0x18CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCB0u;
label_18ccb0:
    // 0x18ccb0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ccb4: 0xc041322  jal         func_104C88
    ctx->pc = 0x18CCB4u;
    SET_GPR_U32(ctx, 31, 0x18CCBCu);
    ctx->pc = 0x18CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCB4u;
    // 0x18ccb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x18CCB4u, 0x18CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCBCu;
label_18ccbc:
    // 0x18ccbc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ccc0: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18CCC0u;
    SET_GPR_U32(ctx, 31, 0x18CCC8u);
    ctx->pc = 0x18CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCC0u;
    // 0x18ccc4: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18CCC0u, 0x18CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCC8u;
label_18ccc8:
    // 0x18ccc8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cccc: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18CCCCu;
    SET_GPR_U32(ctx, 31, 0x18CCD4u);
    ctx->pc = 0x18CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCCCu;
    // 0x18ccd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18CCCCu, 0x18CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCD4u;
label_18ccd4:
    // 0x18ccd4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ccd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ccdc: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18CCDCu;
    SET_GPR_U32(ctx, 31, 0x18CCE4u);
    ctx->pc = 0x18CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCDCu;
    // 0x18cce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18CCDCu, 0x18CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCE4u;
label_18cce4:
    // 0x18cce4: 0xc041298  jal         func_104A60
    ctx->pc = 0x18CCE4u;
    SET_GPR_U32(ctx, 31, 0x18CCECu);
    ctx->pc = 0x18CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCE4u;
    // 0x18cce8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18CCE4u, 0x18CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCECu;
label_18ccec:
    // 0x18ccec: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x18ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18ccf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ccf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccf4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ccf8: 0xc041290  jal         func_104A40
    ctx->pc = 0x18CCF8u;
    SET_GPR_U32(ctx, 31, 0x18CD00u);
    ctx->pc = 0x18CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCF8u;
    // 0x18ccfc: 0xac6202e0  sw          $v0, 0x2E0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18CCF8u, 0x18CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD00u;
label_18cd00:
    // 0x18cd00: 0xc041294  jal         func_104A50
    ctx->pc = 0x18CD00u;
    SET_GPR_U32(ctx, 31, 0x18CD08u);
    ctx->pc = 0x18CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD00u;
    // 0x18cd04: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18CD00u, 0x18CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD08u;
label_18cd08:
    // 0x18cd08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cd0c: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18CD0Cu;
    SET_GPR_U32(ctx, 31, 0x18CD14u);
    ctx->pc = 0x18CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD0Cu;
    // 0x18cd10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18CD0Cu, 0x18CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD14u;
label_18cd14:
    // 0x18cd14: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cd18: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18CD18u;
    SET_GPR_U32(ctx, 31, 0x18CD20u);
    ctx->pc = 0x18CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD18u;
    // 0x18cd1c: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18CD18u, 0x18CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD20u;
label_18cd20:
    // 0x18cd20: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cd24: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18CD24u;
    SET_GPR_U32(ctx, 31, 0x18CD2Cu);
    ctx->pc = 0x18CD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD24u;
    // 0x18cd28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18CD24u, 0x18CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD2Cu;
label_18cd2c:
    // 0x18cd2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cd30: 0xc041386  jal         func_104E18
    ctx->pc = 0x18CD30u;
    SET_GPR_U32(ctx, 31, 0x18CD38u);
    ctx->pc = 0x18CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD30u;
    // 0x18cd34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18CD30u, 0x18CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD38u;
label_18cd38:
    // 0x18cd38: 0x97a500e0  lhu         $a1, 0xE0($sp)
    ctx->pc = 0x18cd38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18cd3c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x18cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18cd40: 0x25980  sll         $t3, $v0, 6
    ctx->pc = 0x18cd40u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18cd44: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x18cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18cd48: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x18cd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18cd4c: 0x30047fff  andi        $a0, $zero, 0x7FFF
    ctx->pc = 0x18cd4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18cd50: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x18cd50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18cd54: 0x240cff7f  addiu       $t4, $zero, -0x81
    ctx->pc = 0x18cd54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18cd58: 0x640d0080  daddiu      $t5, $zero, 0x80
    ctx->pc = 0x18cd58u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18cd5c: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x18cd5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18cd60: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x18cd60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18cd64: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x18cd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18cd68: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x18cd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18cd6c: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x18cd6cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18cd70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18cd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18cd74: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18cd78: 0xa7a200e0  sh          $v0, 0xE0($sp)
    ctx->pc = 0x18cd78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cd7c: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x18cd7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18cd80: 0x27a200e1  addiu       $v0, $sp, 0xE1
    ctx->pc = 0x18cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 225));
    // 0x18cd84: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cd84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cd88: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x18cd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x18cd8c: 0x4d6025  or          $t4, $v0, $t5
    ctx->pc = 0x18cd8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x18cd90: 0x27a200e1  addiu       $v0, $sp, 0xE1
    ctx->pc = 0x18cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 225));
    // 0x18cd94: 0xa04c0000  sb          $t4, 0x0($v0)
    ctx->pc = 0x18cd94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x18cd98: 0x27a200e5  addiu       $v0, $sp, 0xE5
    ctx->pc = 0x18cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 229));
    // 0x18cd9c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cd9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cda0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18cda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18cda4: 0x4b5025  or          $t2, $v0, $t3
    ctx->pc = 0x18cda4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x18cda8: 0x27a200e5  addiu       $v0, $sp, 0xE5
    ctx->pc = 0x18cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 229));
    // 0x18cdac: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x18cdacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x18cdb0: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18cdb4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cdb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cdb8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x18cdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x18cdbc: 0x494025  or          $t0, $v0, $t1
    ctx->pc = 0x18cdbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18cdc0: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18cdc4: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x18cdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x18cdc8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cdc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cdcc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x18cdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x18cdd0: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x18cdd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x18cdd4: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18cdd8: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x18cdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x18cddc: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x18cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x18cde0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18cde0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cde4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18cde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18cde8: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x18cde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18cdec: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x18cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x18cdf0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x18cdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18cdf4: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x18cdf4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18cdf8: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18CDF8u;
    SET_GPR_U32(ctx, 31, 0x18CE00u);
    ctx->pc = 0x18CDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDF8u;
    // 0x18cdfc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18CDF8u, 0x18CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE00u;
label_18ce00:
    // 0x18ce00: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x18ce00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18ce04: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ce08: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18ce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18ce0c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x18ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18ce10: 0xc041418  jal         func_105060
    ctx->pc = 0x18CE10u;
    SET_GPR_U32(ctx, 31, 0x18CE18u);
    ctx->pc = 0x18CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE10u;
    // 0x18ce14: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CE10u, 0x18CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE18u;
label_18ce18:
    // 0x18ce18: 0x24030378  addiu       $v1, $zero, 0x378
    ctx->pc = 0x18ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 888));
    // 0x18ce1c: 0x3c02013f  lui         $v0, 0x13F
    ctx->pc = 0x18ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)319 << 16));
    // 0x18ce20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18ce20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18ce24: 0x3442801a  ori         $v0, $v0, 0x801A
    ctx->pc = 0x18ce24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32794);
    // 0x18ce28: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ce2c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18ce30: 0xc041418  jal         func_105060
    ctx->pc = 0x18CE30u;
    SET_GPR_U32(ctx, 31, 0x18CE38u);
    ctx->pc = 0x18CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE30u;
    // 0x18ce34: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CE30u, 0x18CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE38u;
label_18ce38:
    // 0x18ce38: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x18ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x18ce3c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ce40: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18ce44: 0xc041418  jal         func_105060
    ctx->pc = 0x18CE44u;
    SET_GPR_U32(ctx, 31, 0x18CE4Cu);
    ctx->pc = 0x18CE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE44u;
    // 0x18ce48: 0x3446c000  ori         $a2, $v0, 0xC000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CE44u, 0x18CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE4Cu;
label_18ce4c:
    // 0x18ce4c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ce50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ce50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce54: 0xc041418  jal         func_105060
    ctx->pc = 0x18CE54u;
    SET_GPR_U32(ctx, 31, 0x18CE5Cu);
    ctx->pc = 0x18CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE54u;
    // 0x18ce58: 0x24060106  addiu       $a2, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CE54u, 0x18CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE5Cu;
label_18ce5c:
    // 0x18ce5c: 0x340280ff  ori         $v0, $zero, 0x80FF
    ctx->pc = 0x18ce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33023);
    // 0x18ce60: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ce64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18ce68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ce6c: 0xc041418  jal         func_105060
    ctx->pc = 0x18CE6Cu;
    SET_GPR_U32(ctx, 31, 0x18CE74u);
    ctx->pc = 0x18CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE6Cu;
    // 0x18ce70: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CE6Cu, 0x18CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE74u;
label_18ce74:
    // 0x18ce74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18ce74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ce78:
    // 0x18ce78: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18ce7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18ce80: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18ce80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18ce84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18ce84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18ce88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18ce88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18ce8c: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18ce8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18ce90: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18ce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18ce94: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x18ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x18ce98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18ce98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18ce9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18cea0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cea4: 0xc041418  jal         func_105060
    ctx->pc = 0x18CEA4u;
    SET_GPR_U32(ctx, 31, 0x18CEACu);
    ctx->pc = 0x18CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEA4u;
    // 0x18cea8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CEA4u, 0x18CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEACu;
label_18ceac:
    // 0x18ceac: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x18ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x18ceb0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ceb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ceb8: 0xc041418  jal         func_105060
    ctx->pc = 0x18CEB8u;
    SET_GPR_U32(ctx, 31, 0x18CEC0u);
    ctx->pc = 0x18CEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEB8u;
    // 0x18cebc: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CEB8u, 0x18CEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEC0u;
label_18cec0:
    // 0x18cec0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18cec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18cec4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cec8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18cecc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18ceccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18ced0: 0xc041418  jal         func_105060
    ctx->pc = 0x18CED0u;
    SET_GPR_U32(ctx, 31, 0x18CED8u);
    ctx->pc = 0x18CED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CED0u;
    // 0x18ced4: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CED0u, 0x18CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CED8u;
label_18ced8:
    // 0x18ced8: 0x3c020e08  lui         $v0, 0xE08
    ctx->pc = 0x18ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3592 << 16));
    // 0x18cedc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cee0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18cee4: 0xc041418  jal         func_105060
    ctx->pc = 0x18CEE4u;
    SET_GPR_U32(ctx, 31, 0x18CEECu);
    ctx->pc = 0x18CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEE4u;
    // 0x18cee8: 0x34461008  ori         $a2, $v0, 0x1008 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CEE4u, 0x18CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEECu;
label_18ceec:
    // 0x18ceec: 0x34028e00  ori         $v0, $zero, 0x8E00
    ctx->pc = 0x18ceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36352);
    // 0x18cef0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cef4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18cef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18cef8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18cefc: 0xc041418  jal         func_105060
    ctx->pc = 0x18CEFCu;
    SET_GPR_U32(ctx, 31, 0x18CF04u);
    ctx->pc = 0x18CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEFCu;
    // 0x18cf00: 0x34469000  ori         $a2, $v0, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CEFCu, 0x18CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF04u;
label_18cf04:
    // 0x18cf04: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18cf04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18cf08: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x18cf08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x18cf0c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x18CF0Cu;
    {
        const bool branch_taken_0x18cf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF0Cu;
        // 0x18cf10: 0x3c0300df  lui         $v1, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf0c) {
            ctx->pc = 0x18CE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ce78;
        }
    }
    ctx->pc = 0x18CF14u;
    // 0x18cf14: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18cf18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18cf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18cf1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cf20: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18cf24: 0xc041418  jal         func_105060
    ctx->pc = 0x18CF24u;
    SET_GPR_U32(ctx, 31, 0x18CF2Cu);
    ctx->pc = 0x18CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF24u;
    // 0x18cf28: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CF24u, 0x18CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF2Cu;
label_18cf2c:
    // 0x18cf2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cf30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cf34: 0xc041418  jal         func_105060
    ctx->pc = 0x18CF34u;
    SET_GPR_U32(ctx, 31, 0x18CF3Cu);
    ctx->pc = 0x18CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF34u;
    // 0x18cf38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CF34u, 0x18CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF3Cu;
label_18cf3c:
    // 0x18cf3c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cf40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf44: 0xc041418  jal         func_105060
    ctx->pc = 0x18CF44u;
    SET_GPR_U32(ctx, 31, 0x18CF4Cu);
    ctx->pc = 0x18CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF44u;
    // 0x18cf48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CF44u, 0x18CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF4Cu;
label_18cf4c:
    // 0x18cf4c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18cf50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cf54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18cf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18cf58: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18cf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18cf5c: 0xc041418  jal         func_105060
    ctx->pc = 0x18CF5Cu;
    SET_GPR_U32(ctx, 31, 0x18CF64u);
    ctx->pc = 0x18CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF5Cu;
    // 0x18cf60: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CF5Cu, 0x18CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF64u;
label_18cf64:
    // 0x18cf64: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18cf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18cf68: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cf6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18cf70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18cf74: 0xc041418  jal         func_105060
    ctx->pc = 0x18CF74u;
    SET_GPR_U32(ctx, 31, 0x18CF7Cu);
    ctx->pc = 0x18CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF74u;
    // 0x18cf78: 0x34468ff0  ori         $a2, $v0, 0x8FF0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36848);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CF74u, 0x18CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF7Cu;
label_18cf7c:
    // 0x18cf7c: 0x34028df0  ori         $v0, $zero, 0x8DF0
    ctx->pc = 0x18cf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36336);
    // 0x18cf80: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cf84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18cf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18cf88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18cf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18cf8c: 0xc041418  jal         func_105060
    ctx->pc = 0x18CF8Cu;
    SET_GPR_U32(ctx, 31, 0x18CF94u);
    ctx->pc = 0x18CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF8Cu;
    // 0x18cf90: 0x34468ff0  ori         $a2, $v0, 0x8FF0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36848);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CF8Cu, 0x18CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF94u;
label_18cf94:
    // 0x18cf94: 0x34028df0  ori         $v0, $zero, 0x8DF0
    ctx->pc = 0x18cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36336);
    // 0x18cf98: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cf9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18cfa0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18cfa4: 0xc041418  jal         func_105060
    ctx->pc = 0x18CFA4u;
    SET_GPR_U32(ctx, 31, 0x18CFACu);
    ctx->pc = 0x18CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFA4u;
    // 0x18cfa8: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CFA4u, 0x18CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFACu;
label_18cfac:
    // 0x18cfac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18cfb0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cfb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18cfb8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18cfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18cfbc: 0xc041418  jal         func_105060
    ctx->pc = 0x18CFBCu;
    SET_GPR_U32(ctx, 31, 0x18CFC4u);
    ctx->pc = 0x18CFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFBCu;
    // 0x18cfc0: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CFBCu, 0x18CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFC4u;
label_18cfc4:
    // 0x18cfc4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x18cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18cfc8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18cfcc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x18cfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18cfd0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18cfd4: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x18cfd4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cfd8: 0x3c022001  lui         $v0, 0x2001
    ctx->pc = 0x18cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8193 << 16));
    // 0x18cfdc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x18cfe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18cfe4: 0x61dbc  dsll32      $v1, $a2, 22
    ctx->pc = 0x18cfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 22));
    // 0x18cfe8: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x18cfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x18cfec: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x18cfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x18cff0: 0xc041418  jal         func_105060
    ctx->pc = 0x18CFF0u;
    SET_GPR_U32(ctx, 31, 0x18CFF8u);
    ctx->pc = 0x18CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFF0u;
    // 0x18cff4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18CFF0u, 0x18CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFF8u;
label_18cff8:
    // 0x18cff8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x18cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x18cffc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d000: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18d000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18d004: 0xc041418  jal         func_105060
    ctx->pc = 0x18D004u;
    SET_GPR_U32(ctx, 31, 0x18D00Cu);
    ctx->pc = 0x18D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D004u;
    // 0x18d008: 0x3446009c  ori         $a2, $v0, 0x9C (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)156);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D004u, 0x18D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D00Cu;
label_18d00c:
    // 0x18d00c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d010: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x18d010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18d014: 0xc041418  jal         func_105060
    ctx->pc = 0x18D014u;
    SET_GPR_U32(ctx, 31, 0x18D01Cu);
    ctx->pc = 0x18D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D014u;
    // 0x18d018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D014u, 0x18D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D01Cu;
label_18d01c:
    // 0x18d01c: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x18d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x18d020: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x18d024: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d028: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x18d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x18d02c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d030: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18d030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18d034: 0xc041418  jal         func_105060
    ctx->pc = 0x18D034u;
    SET_GPR_U32(ctx, 31, 0x18D03Cu);
    ctx->pc = 0x18D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D034u;
    // 0x18d038: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D034u, 0x18D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D03Cu;
label_18d03c:
    // 0x18d03c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x18d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x18d040: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d044: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18d044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d048: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d04c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D04Cu;
    SET_GPR_U32(ctx, 31, 0x18D054u);
    ctx->pc = 0x18D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D04Cu;
    // 0x18d050: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D04Cu, 0x18D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D054u;
label_18d054:
    // 0x18d054: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d058: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18d058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18d05c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D05Cu;
    SET_GPR_U32(ctx, 31, 0x18D064u);
    ctx->pc = 0x18D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D05Cu;
    // 0x18d060: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D05Cu, 0x18D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D064u;
label_18d064:
    // 0x18d064: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x18d064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18d068: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d06c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d070: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d074: 0xc041418  jal         func_105060
    ctx->pc = 0x18D074u;
    SET_GPR_U32(ctx, 31, 0x18D07Cu);
    ctx->pc = 0x18D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D074u;
    // 0x18d078: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D074u, 0x18D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D07Cu;
label_18d07c:
    // 0x18d07c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d084: 0xc041418  jal         func_105060
    ctx->pc = 0x18D084u;
    SET_GPR_U32(ctx, 31, 0x18D08Cu);
    ctx->pc = 0x18D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D084u;
    // 0x18d088: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D084u, 0x18D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D08Cu;
label_18d08c:
    // 0x18d08c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18d08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d090:
    // 0x18d090: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18d090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18d094: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d098: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18d098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18d09c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d09cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d0a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18d0a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18d0a4: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18d0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18d0a8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d0ac: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x18d0b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18d0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18d0b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d0b8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d0bc: 0xc041418  jal         func_105060
    ctx->pc = 0x18D0BCu;
    SET_GPR_U32(ctx, 31, 0x18D0C4u);
    ctx->pc = 0x18D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0BCu;
    // 0x18d0c0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D0BCu, 0x18D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0C4u;
label_18d0c4:
    // 0x18d0c4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d0c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d0cc: 0xc041418  jal         func_105060
    ctx->pc = 0x18D0CCu;
    SET_GPR_U32(ctx, 31, 0x18D0D4u);
    ctx->pc = 0x18D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0CCu;
    // 0x18d0d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D0CCu, 0x18D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0D4u;
label_18d0d4:
    // 0x18d0d4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18d0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18d0d8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d0dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d0e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d0e4: 0xc041418  jal         func_105060
    ctx->pc = 0x18D0E4u;
    SET_GPR_U32(ctx, 31, 0x18D0ECu);
    ctx->pc = 0x18D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0E4u;
    // 0x18d0e8: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D0E4u, 0x18D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0ECu;
label_18d0ec:
    // 0x18d0ec: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x18d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x18d0f0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d0f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d0f8: 0xc041418  jal         func_105060
    ctx->pc = 0x18D0F8u;
    SET_GPR_U32(ctx, 31, 0x18D100u);
    ctx->pc = 0x18D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0F8u;
    // 0x18d0fc: 0x34461000  ori         $a2, $v0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D0F8u, 0x18D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D100u;
label_18d100:
    // 0x18d100: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x18d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x18d104: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d108: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d10c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d110: 0xc041418  jal         func_105060
    ctx->pc = 0x18D110u;
    SET_GPR_U32(ctx, 31, 0x18D118u);
    ctx->pc = 0x18D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D110u;
    // 0x18d114: 0x34468800  ori         $a2, $v0, 0x8800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D110u, 0x18D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D118u;
label_18d118:
    // 0x18d118: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18d118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18d11c: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x18d11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18d120: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x18D120u;
    {
        const bool branch_taken_0x18d120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D120u;
        // 0x18d124: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d120) {
            ctx->pc = 0x18D090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d090;
        }
    }
    ctx->pc = 0x18D128u;
    // 0x18d128: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18d128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18d12c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D12Cu;
    SET_GPR_U32(ctx, 31, 0x18D134u);
    ctx->pc = 0x18D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D12Cu;
    // 0x18d130: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D12Cu, 0x18D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D134u;
label_18d134:
    // 0x18d134: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d138: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18d138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18d13c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D13Cu;
    SET_GPR_U32(ctx, 31, 0x18D144u);
    ctx->pc = 0x18D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D13Cu;
    // 0x18d140: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D13Cu, 0x18D144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D144u;
label_18d144:
    // 0x18d144: 0x3402dc00  ori         $v0, $zero, 0xDC00
    ctx->pc = 0x18d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56320);
    // 0x18d148: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18d148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d14c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d150: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d154: 0x34429380  ori         $v0, $v0, 0x9380
    ctx->pc = 0x18d154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37760);
    // 0x18d158: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d15c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18d15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d160: 0xc041418  jal         func_105060
    ctx->pc = 0x18D160u;
    SET_GPR_U32(ctx, 31, 0x18D168u);
    ctx->pc = 0x18D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D160u;
    // 0x18d164: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D160u, 0x18D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D168u;
label_18d168:
    // 0x18d168: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x18d168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x18d16c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d170: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18d174: 0xc041418  jal         func_105060
    ctx->pc = 0x18D174u;
    SET_GPR_U32(ctx, 31, 0x18D17Cu);
    ctx->pc = 0x18D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D174u;
    // 0x18d178: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D174u, 0x18D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D17Cu;
label_18d17c:
    // 0x18d17c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d180: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x18d180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18d184: 0xc041418  jal         func_105060
    ctx->pc = 0x18D184u;
    SET_GPR_U32(ctx, 31, 0x18D18Cu);
    ctx->pc = 0x18D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D184u;
    // 0x18d188: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D184u, 0x18D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D18Cu;
label_18d18c:
    // 0x18d18c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d194: 0xc041418  jal         func_105060
    ctx->pc = 0x18D194u;
    SET_GPR_U32(ctx, 31, 0x18D19Cu);
    ctx->pc = 0x18D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D194u;
    // 0x18d198: 0x24060106  addiu       $a2, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D194u, 0x18D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D19Cu;
label_18d19c:
    // 0x18d19c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d1a0: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18d1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18d1a4: 0xc041418  jal         func_105060
    ctx->pc = 0x18D1A4u;
    SET_GPR_U32(ctx, 31, 0x18D1ACu);
    ctx->pc = 0x18D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1A4u;
    // 0x18d1a8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D1A4u, 0x18D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1ACu;
label_18d1ac:
    // 0x18d1ac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d1b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d1b4: 0xc041418  jal         func_105060
    ctx->pc = 0x18D1B4u;
    SET_GPR_U32(ctx, 31, 0x18D1BCu);
    ctx->pc = 0x18D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1B4u;
    // 0x18d1b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D1B4u, 0x18D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1BCu;
label_18d1bc:
    // 0x18d1bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18d1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d1c0:
    // 0x18d1c0: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18d1c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d1c8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18d1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18d1cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d1ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d1d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18d1d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18d1d4: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18d1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18d1d8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d1dc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x18d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x18d1e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18d1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18d1e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d1e8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d1ec: 0xc041418  jal         func_105060
    ctx->pc = 0x18D1ECu;
    SET_GPR_U32(ctx, 31, 0x18D1F4u);
    ctx->pc = 0x18D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1ECu;
    // 0x18d1f0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D1ECu, 0x18D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1F4u;
label_18d1f4:
    // 0x18d1f4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18d1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18d1f8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d1fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d200: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18d200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d204: 0xc041418  jal         func_105060
    ctx->pc = 0x18D204u;
    SET_GPR_U32(ctx, 31, 0x18D20Cu);
    ctx->pc = 0x18D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D204u;
    // 0x18d208: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D204u, 0x18D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D20Cu;
label_18d20c:
    // 0x18d20c: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x18d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x18d210: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d214: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d218: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d21c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D21Cu;
    SET_GPR_U32(ctx, 31, 0x18D224u);
    ctx->pc = 0x18D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D21Cu;
    // 0x18d220: 0x34468800  ori         $a2, $v0, 0x8800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D21Cu, 0x18D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D224u;
label_18d224:
    // 0x18d224: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18d224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18d228: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x18d228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18d22c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x18D22Cu;
    {
        const bool branch_taken_0x18d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D22Cu;
        // 0x18d230: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d22c) {
            ctx->pc = 0x18D1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d1c0;
        }
    }
    ctx->pc = 0x18D234u;
    // 0x18d234: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d238: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x18d238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18d23c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d240: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d244: 0xc041418  jal         func_105060
    ctx->pc = 0x18D244u;
    SET_GPR_U32(ctx, 31, 0x18D24Cu);
    ctx->pc = 0x18D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D244u;
    // 0x18d248: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D244u, 0x18D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D24Cu;
label_18d24c:
    // 0x18d24c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x18d24cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d250: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18d250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d254: 0x0  nop
    ctx->pc = 0x18d254u;
    // NOP
label_18d258:
    // 0x18d258: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d25c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d260: 0xc041418  jal         func_105060
    ctx->pc = 0x18D260u;
    SET_GPR_U32(ctx, 31, 0x18D268u);
    ctx->pc = 0x18D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D260u;
    // 0x18d264: 0x2406015c  addiu       $a2, $zero, 0x15C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D260u, 0x18D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D268u;
label_18d268:
    // 0x18d268: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18d268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d26c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D26Cu;
    {
        const bool branch_taken_0x18d26c = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x18D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D26Cu;
        // 0x18d270: 0x14b103  sra         $s6, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d26c) {
            ctx->pc = 0x18D27Cu;
            goto label_18d27c;
        }
    }
    ctx->pc = 0x18D274u;
    // 0x18d274: 0x2682000f  addiu       $v0, $s4, 0xF
    ctx->pc = 0x18d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x18d278: 0x2b103  sra         $s6, $v0, 4
    ctx->pc = 0x18d278u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 4));
label_18d27c:
    // 0x18d27c: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x18d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x18d280: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x18d280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x18d284: 0x562023  subu        $a0, $v0, $s6
    ctx->pc = 0x18d284u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x18d288: 0x2402087f  addiu       $v0, $zero, 0x87F
    ctx->pc = 0x18d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2175));
    // 0x18d28c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18d290: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x18d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x18d294: 0x839825  or          $s3, $a0, $v1
    ctx->pc = 0x18d294u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18d298: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d29c: 0x142083  sra         $a0, $s4, 2
    ctx->pc = 0x18d29cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), 2));
    // 0x18d2a0: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D2A0u;
    {
        const bool branch_taken_0x18d2a0 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x18D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2A0u;
        // 0x18d2a4: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2a0) {
            ctx->pc = 0x18D2B0u;
            goto label_18d2b0;
        }
    }
    ctx->pc = 0x18D2A8u;
    // 0x18d2a8: 0x26820003  addiu       $v0, $s4, 0x3
    ctx->pc = 0x18d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x18d2ac: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x18d2acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_18d2b0:
    // 0x18d2b0: 0x2403087f  addiu       $v1, $zero, 0x87F
    ctx->pc = 0x18d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2175));
    // 0x18d2b4: 0x268207ff  addiu       $v0, $s4, 0x7FF
    ctx->pc = 0x18d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2047));
    // 0x18d2b8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d2bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d2c0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18d2c4: 0x2682087f  addiu       $v0, $s4, 0x87F
    ctx->pc = 0x18d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2175));
    // 0x18d2c8: 0x4bc38  dsll        $s7, $a0, 16
    ctx->pc = 0x18d2c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << 16);
    // 0x18d2cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d2d0: 0x778825  or          $s1, $v1, $s7
    ctx->pc = 0x18d2d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x18d2d4: 0x578025  or          $s0, $v0, $s7
    ctx->pc = 0x18d2d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_18d2d8:
    // 0x18d2d8: 0x26a2001f  addiu       $v0, $s5, 0x1F
    ctx->pc = 0x18d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 31));
    // 0x18d2dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d2e0: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x18d2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x18d2e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d2e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d2e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18d2e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18d2ec: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18d2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18d2f0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d2f4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x18d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x18d2f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18d2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18d2fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d300: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d304: 0xc041418  jal         func_105060
    ctx->pc = 0x18D304u;
    SET_GPR_U32(ctx, 31, 0x18D30Cu);
    ctx->pc = 0x18D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D304u;
    // 0x18d308: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D304u, 0x18D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D30Cu;
label_18d30c:
    // 0x18d30c: 0x3c022828  lui         $v0, 0x2828
    ctx->pc = 0x18d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10280 << 16));
    // 0x18d310: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d314: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d318: 0xc041418  jal         func_105060
    ctx->pc = 0x18D318u;
    SET_GPR_U32(ctx, 31, 0x18D320u);
    ctx->pc = 0x18D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D318u;
    // 0x18d31c: 0x34462828  ori         $a2, $v0, 0x2828 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D318u, 0x18D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D320u;
label_18d320:
    // 0x18d320: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d324: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d328: 0xc041418  jal         func_105060
    ctx->pc = 0x18D328u;
    SET_GPR_U32(ctx, 31, 0x18D330u);
    ctx->pc = 0x18D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D328u;
    // 0x18d32c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D328u, 0x18D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D330u;
label_18d330:
    // 0x18d330: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d334: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18d334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d338: 0xc041418  jal         func_105060
    ctx->pc = 0x18D338u;
    SET_GPR_U32(ctx, 31, 0x18D340u);
    ctx->pc = 0x18D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D338u;
    // 0x18d33c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D338u, 0x18D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D340u;
label_18d340:
    // 0x18d340: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d344: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d348: 0xc041418  jal         func_105060
    ctx->pc = 0x18D348u;
    SET_GPR_U32(ctx, 31, 0x18D350u);
    ctx->pc = 0x18D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D348u;
    // 0x18d34c: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D348u, 0x18D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D350u;
label_18d350:
    // 0x18d350: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d354: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d358: 0xc041418  jal         func_105060
    ctx->pc = 0x18D358u;
    SET_GPR_U32(ctx, 31, 0x18D360u);
    ctx->pc = 0x18D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D358u;
    // 0x18d35c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D358u, 0x18D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D360u;
label_18d360:
    // 0x18d360: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d368: 0xc041418  jal         func_105060
    ctx->pc = 0x18D368u;
    SET_GPR_U32(ctx, 31, 0x18D370u);
    ctx->pc = 0x18D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D368u;
    // 0x18d36c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D368u, 0x18D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D370u;
label_18d370:
    // 0x18d370: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d374: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d378: 0xc041418  jal         func_105060
    ctx->pc = 0x18D378u;
    SET_GPR_U32(ctx, 31, 0x18D380u);
    ctx->pc = 0x18D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D378u;
    // 0x18d37c: 0x3c060800  lui         $a2, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D378u, 0x18D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D380u;
label_18d380:
    // 0x18d380: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d384: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d388: 0xc041418  jal         func_105060
    ctx->pc = 0x18D388u;
    SET_GPR_U32(ctx, 31, 0x18D390u);
    ctx->pc = 0x18D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D388u;
    // 0x18d38c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D388u, 0x18D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D390u;
label_18d390:
    // 0x18d390: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d394: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d398: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d39c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D39Cu;
    SET_GPR_U32(ctx, 31, 0x18D3A4u);
    ctx->pc = 0x18D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D39Cu;
    // 0x18d3a0: 0x34460800  ori         $a2, $v0, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D39Cu, 0x18D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D3A4u;
label_18d3a4:
    // 0x18d3a4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d3a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d3ac: 0xc041418  jal         func_105060
    ctx->pc = 0x18D3ACu;
    SET_GPR_U32(ctx, 31, 0x18D3B4u);
    ctx->pc = 0x18D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3ACu;
    // 0x18d3b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D3ACu, 0x18D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D3B4u;
label_18d3b4:
    // 0x18d3b4: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x18d3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x18d3b8: 0x2aa20080  slti        $v0, $s5, 0x80
    ctx->pc = 0x18d3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18d3bc: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x18D3BCu;
    {
        const bool branch_taken_0x18d3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3BCu;
        // 0x18d3c0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3bc) {
            ctx->pc = 0x18D2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d2d8;
        }
    }
    ctx->pc = 0x18D3C4u;
    // 0x18d3c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d3c8: 0xc041418  jal         func_105060
    ctx->pc = 0x18D3C8u;
    SET_GPR_U32(ctx, 31, 0x18D3D0u);
    ctx->pc = 0x18D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3C8u;
    // 0x18d3cc: 0x2406015c  addiu       $a2, $zero, 0x15C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D3C8u, 0x18D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D3D0u;
label_18d3d0:
    // 0x18d3d0: 0x26c20800  addiu       $v0, $s6, 0x800
    ctx->pc = 0x18d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2048));
    // 0x18d3d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18d3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d3d8: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x18d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d3dc: 0x26c20880  addiu       $v0, $s6, 0x880
    ctx->pc = 0x18d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
    // 0x18d3e0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d3e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18d3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18d3e8: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18d3e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18d3ec: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x18d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x18d3f0: 0x649025  or          $s2, $v1, $a0
    ctx->pc = 0x18d3f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18d3f4: 0x541823  subu        $v1, $v0, $s4
    ctx->pc = 0x18d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18d3f8: 0xa49825  or          $s3, $a1, $a0
    ctx->pc = 0x18d3f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x18d3fc: 0x2402087f  addiu       $v0, $zero, 0x87F
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2175));
    // 0x18d400: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18d400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18d404: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x18d404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18d408: 0x778825  or          $s1, $v1, $s7
    ctx->pc = 0x18d408u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x18d40c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d410: 0x57a825  or          $s5, $v0, $s7
    ctx->pc = 0x18d410u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x18d414: 0x0  nop
    ctx->pc = 0x18d414u;
    // NOP
label_18d418:
    // 0x18d418: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18d41c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d420: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18d420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18d424: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d424u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d428: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18d428u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18d42c: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18d42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18d430: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d434: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x18d438: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18d438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18d43c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d440: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d444: 0xc041418  jal         func_105060
    ctx->pc = 0x18D444u;
    SET_GPR_U32(ctx, 31, 0x18D44Cu);
    ctx->pc = 0x18D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D444u;
    // 0x18d448: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D444u, 0x18D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D44Cu;
label_18d44c:
    // 0x18d44c: 0x3c022828  lui         $v0, 0x2828
    ctx->pc = 0x18d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10280 << 16));
    // 0x18d450: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d454: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d458: 0xc041418  jal         func_105060
    ctx->pc = 0x18D458u;
    SET_GPR_U32(ctx, 31, 0x18D460u);
    ctx->pc = 0x18D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D458u;
    // 0x18d45c: 0x34462828  ori         $a2, $v0, 0x2828 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D458u, 0x18D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D460u;
label_18d460:
    // 0x18d460: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d464: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d468: 0xc041418  jal         func_105060
    ctx->pc = 0x18D468u;
    SET_GPR_U32(ctx, 31, 0x18D470u);
    ctx->pc = 0x18D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D468u;
    // 0x18d46c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D468u, 0x18D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D470u;
label_18d470:
    // 0x18d470: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d474: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18d474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d478: 0xc041418  jal         func_105060
    ctx->pc = 0x18D478u;
    SET_GPR_U32(ctx, 31, 0x18D480u);
    ctx->pc = 0x18D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D478u;
    // 0x18d47c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D478u, 0x18D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D480u;
label_18d480:
    // 0x18d480: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d484: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d488: 0xc041418  jal         func_105060
    ctx->pc = 0x18D488u;
    SET_GPR_U32(ctx, 31, 0x18D490u);
    ctx->pc = 0x18D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D488u;
    // 0x18d48c: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D488u, 0x18D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D490u;
label_18d490:
    // 0x18d490: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d494: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18d494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d498: 0xc041418  jal         func_105060
    ctx->pc = 0x18D498u;
    SET_GPR_U32(ctx, 31, 0x18D4A0u);
    ctx->pc = 0x18D49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D498u;
    // 0x18d49c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D498u, 0x18D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4A0u;
label_18d4a0:
    // 0x18d4a0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d4a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d4a8: 0xc041418  jal         func_105060
    ctx->pc = 0x18D4A8u;
    SET_GPR_U32(ctx, 31, 0x18D4B0u);
    ctx->pc = 0x18D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4A8u;
    // 0x18d4ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D4A8u, 0x18D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4B0u;
label_18d4b0:
    // 0x18d4b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d4b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d4b8: 0xc041418  jal         func_105060
    ctx->pc = 0x18D4B8u;
    SET_GPR_U32(ctx, 31, 0x18D4C0u);
    ctx->pc = 0x18D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4B8u;
    // 0x18d4bc: 0x3c060800  lui         $a2, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D4B8u, 0x18D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4C0u;
label_18d4c0:
    // 0x18d4c0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d4c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d4c8: 0xc041418  jal         func_105060
    ctx->pc = 0x18D4C8u;
    SET_GPR_U32(ctx, 31, 0x18D4D0u);
    ctx->pc = 0x18D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4C8u;
    // 0x18d4cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D4C8u, 0x18D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4D0u;
label_18d4d0:
    // 0x18d4d0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d4d4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d4d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d4dc: 0xc041418  jal         func_105060
    ctx->pc = 0x18D4DCu;
    SET_GPR_U32(ctx, 31, 0x18D4E4u);
    ctx->pc = 0x18D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4DCu;
    // 0x18d4e0: 0x34460800  ori         $a2, $v0, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D4DCu, 0x18D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4E4u;
label_18d4e4:
    // 0x18d4e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d4e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d4ec: 0xc041418  jal         func_105060
    ctx->pc = 0x18D4ECu;
    SET_GPR_U32(ctx, 31, 0x18D4F4u);
    ctx->pc = 0x18D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4ECu;
    // 0x18d4f0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D4ECu, 0x18D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4F4u;
label_18d4f4:
    // 0x18d4f4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18d4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18d4f8: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x18d4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18d4fc: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x18D4FCu;
    {
        const bool branch_taken_0x18d4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d4fc) {
            ctx->pc = 0x18D418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d418;
        }
    }
    ctx->pc = 0x18D504u;
    // 0x18d504: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x18d504u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x18d508: 0x2bc20005  slti        $v0, $fp, 0x5
    ctx->pc = 0x18d508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x18d50c: 0x1440ff52  bnez        $v0, . + 4 + (-0xAE << 2)
    ctx->pc = 0x18D50Cu;
    {
        const bool branch_taken_0x18d50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D50Cu;
        // 0x18d510: 0x26940005  addiu       $s4, $s4, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d50c) {
            ctx->pc = 0x18D258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d258;
        }
    }
    ctx->pc = 0x18D514u;
    // 0x18d514: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x18d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x18d518: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d51c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d520: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d524: 0xc041418  jal         func_105060
    ctx->pc = 0x18D524u;
    SET_GPR_U32(ctx, 31, 0x18D52Cu);
    ctx->pc = 0x18D528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D524u;
    // 0x18d528: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D524u, 0x18D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D52Cu;
label_18d52c:
    // 0x18d52c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d534: 0xc041418  jal         func_105060
    ctx->pc = 0x18D534u;
    SET_GPR_U32(ctx, 31, 0x18D53Cu);
    ctx->pc = 0x18D538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D534u;
    // 0x18d538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D534u, 0x18D53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D53Cu;
label_18d53c:
    // 0x18d53c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d544: 0xc041418  jal         func_105060
    ctx->pc = 0x18D544u;
    SET_GPR_U32(ctx, 31, 0x18D54Cu);
    ctx->pc = 0x18D548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D544u;
    // 0x18d548: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D544u, 0x18D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D54Cu;
label_18d54c:
    // 0x18d54c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18d550: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d554: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d558: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18d558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d55c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D55Cu;
    SET_GPR_U32(ctx, 31, 0x18D564u);
    ctx->pc = 0x18D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D55Cu;
    // 0x18d560: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D55Cu, 0x18D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D564u;
label_18d564:
    // 0x18d564: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18d564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18d568: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d56c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d570: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d574: 0xc041418  jal         func_105060
    ctx->pc = 0x18D574u;
    SET_GPR_U32(ctx, 31, 0x18D57Cu);
    ctx->pc = 0x18D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D574u;
    // 0x18d578: 0x344687f0  ori         $a2, $v0, 0x87F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D574u, 0x18D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D57Cu;
label_18d57c:
    // 0x18d57c: 0x340287f0  ori         $v0, $zero, 0x87F0
    ctx->pc = 0x18d57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34800);
    // 0x18d580: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d584: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d588: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d58c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D58Cu;
    SET_GPR_U32(ctx, 31, 0x18D594u);
    ctx->pc = 0x18D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D58Cu;
    // 0x18d590: 0x344687f0  ori         $a2, $v0, 0x87F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D58Cu, 0x18D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D594u;
label_18d594:
    // 0x18d594: 0x340287f0  ori         $v0, $zero, 0x87F0
    ctx->pc = 0x18d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34800);
    // 0x18d598: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d59c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d5a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d5a4: 0xc041418  jal         func_105060
    ctx->pc = 0x18D5A4u;
    SET_GPR_U32(ctx, 31, 0x18D5ACu);
    ctx->pc = 0x18D5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5A4u;
    // 0x18d5a8: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D5A4u, 0x18D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5ACu;
label_18d5ac:
    // 0x18d5ac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18d5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18d5b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d5b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d5b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d5bc: 0xc041418  jal         func_105060
    ctx->pc = 0x18D5BCu;
    SET_GPR_U32(ctx, 31, 0x18D5C4u);
    ctx->pc = 0x18D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5BCu;
    // 0x18d5c0: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D5BCu, 0x18D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5C4u;
label_18d5c4:
    // 0x18d5c4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d5c8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x18d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18d5cc: 0xc041418  jal         func_105060
    ctx->pc = 0x18D5CCu;
    SET_GPR_U32(ctx, 31, 0x18D5D4u);
    ctx->pc = 0x18D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5CCu;
    // 0x18d5d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D5CCu, 0x18D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5D4u;
label_18d5d4:
    // 0x18d5d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d5d8: 0x3c021c20  lui         $v0, 0x1C20
    ctx->pc = 0x18d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7200 << 16));
    // 0x18d5dc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x18d5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18d5e0: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x18d5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x18d5e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d5e8: 0xc041418  jal         func_105060
    ctx->pc = 0x18D5E8u;
    SET_GPR_U32(ctx, 31, 0x18D5F0u);
    ctx->pc = 0x18D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5E8u;
    // 0x18d5ec: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D5E8u, 0x18D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5F0u;
label_18d5f0:
    // 0x18d5f0: 0x3c020202  lui         $v0, 0x202
    ctx->pc = 0x18d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)514 << 16));
    // 0x18d5f4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d5f8: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18d5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18d5fc: 0xc041418  jal         func_105060
    ctx->pc = 0x18D5FCu;
    SET_GPR_U32(ctx, 31, 0x18D604u);
    ctx->pc = 0x18D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5FCu;
    // 0x18d600: 0x3446009c  ori         $a2, $v0, 0x9C (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)156);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D5FCu, 0x18D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D604u;
label_18d604:
    // 0x18d604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d608: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x18d60c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d610: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x18d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x18d614: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d618: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x18d618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18d61c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D61Cu;
    SET_GPR_U32(ctx, 31, 0x18D624u);
    ctx->pc = 0x18D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D61Cu;
    // 0x18d620: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D61Cu, 0x18D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D624u;
label_18d624:
    // 0x18d624: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d628: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18d628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18d62c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D62Cu;
    SET_GPR_U32(ctx, 31, 0x18D634u);
    ctx->pc = 0x18D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D62Cu;
    // 0x18d630: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D62Cu, 0x18D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D634u;
label_18d634:
    // 0x18d634: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18d638: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d63c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x18d63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18d640: 0xc041418  jal         func_105060
    ctx->pc = 0x18D640u;
    SET_GPR_U32(ctx, 31, 0x18D648u);
    ctx->pc = 0x18D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D640u;
    // 0x18d644: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D640u, 0x18D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D648u;
label_18d648:
    // 0x18d648: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d64c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18d650: 0xc041418  jal         func_105060
    ctx->pc = 0x18D650u;
    SET_GPR_U32(ctx, 31, 0x18D658u);
    ctx->pc = 0x18D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D650u;
    // 0x18d654: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D650u, 0x18D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D658u;
label_18d658:
    // 0x18d658: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d65c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d660: 0xc041418  jal         func_105060
    ctx->pc = 0x18D660u;
    SET_GPR_U32(ctx, 31, 0x18D668u);
    ctx->pc = 0x18D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D660u;
    // 0x18d664: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D660u, 0x18D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D668u;
label_18d668:
    // 0x18d668: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x18d668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x18d66c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18d670: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d674: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d678: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d67c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D67Cu;
    SET_GPR_U32(ctx, 31, 0x18D684u);
    ctx->pc = 0x18D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D67Cu;
    // 0x18d680: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D67Cu, 0x18D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D684u;
label_18d684:
    // 0x18d684: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x18d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18d688: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d68c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d694: 0xc041418  jal         func_105060
    ctx->pc = 0x18D694u;
    SET_GPR_U32(ctx, 31, 0x18D69Cu);
    ctx->pc = 0x18D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D694u;
    // 0x18d698: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D694u, 0x18D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D69Cu;
label_18d69c:
    // 0x18d69c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18d69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d6a0:
    // 0x18d6a0: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18d6a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d6a8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18d6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18d6ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18d6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d6b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d6b4: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18d6b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18d6b8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d6bc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18d6c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18d6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18d6c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d6c8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d6cc: 0xc041418  jal         func_105060
    ctx->pc = 0x18D6CCu;
    SET_GPR_U32(ctx, 31, 0x18D6D4u);
    ctx->pc = 0x18D6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6CCu;
    // 0x18d6d0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D6CCu, 0x18D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6D4u;
label_18d6d4:
    // 0x18d6d4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x18d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x18d6d8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d6dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d6e0: 0xc041418  jal         func_105060
    ctx->pc = 0x18D6E0u;
    SET_GPR_U32(ctx, 31, 0x18D6E8u);
    ctx->pc = 0x18D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6E0u;
    // 0x18d6e4: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D6E0u, 0x18D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6E8u;
label_18d6e8:
    // 0x18d6e8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18d6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18d6ec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d6f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d6f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18d6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d6f8: 0xc041418  jal         func_105060
    ctx->pc = 0x18D6F8u;
    SET_GPR_U32(ctx, 31, 0x18D700u);
    ctx->pc = 0x18D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6F8u;
    // 0x18d6fc: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D6F8u, 0x18D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D700u;
label_18d700:
    // 0x18d700: 0x3c022008  lui         $v0, 0x2008
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8200 << 16));
    // 0x18d704: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d708: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18d708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d70c: 0xc041418  jal         func_105060
    ctx->pc = 0x18D70Cu;
    SET_GPR_U32(ctx, 31, 0x18D714u);
    ctx->pc = 0x18D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D70Cu;
    // 0x18d710: 0x34461008  ori         $a2, $v0, 0x1008 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D70Cu, 0x18D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D714u;
label_18d714:
    // 0x18d714: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x18d714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x18d718: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d71c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d720: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18d720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d724: 0xc041418  jal         func_105060
    ctx->pc = 0x18D724u;
    SET_GPR_U32(ctx, 31, 0x18D72Cu);
    ctx->pc = 0x18D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D724u;
    // 0x18d728: 0x34469080  ori         $a2, $v0, 0x9080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36992);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D724u, 0x18D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D72Cu;
label_18d72c:
    // 0x18d72c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18d72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18d730: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x18d730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x18d734: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x18D734u;
    {
        const bool branch_taken_0x18d734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D734u;
        // 0x18d738: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d734) {
            ctx->pc = 0x18D6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d6a0;
        }
    }
    ctx->pc = 0x18D73Cu;
    // 0x18d73c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x18d73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18d740: 0xc041418  jal         func_105060
    ctx->pc = 0x18D740u;
    SET_GPR_U32(ctx, 31, 0x18D748u);
    ctx->pc = 0x18D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D740u;
    // 0x18d744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D740u, 0x18D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D748u;
label_18d748:
    // 0x18d748: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18d748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18d74c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d750: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D750u;
    {
        const bool branch_taken_0x18d750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D750u;
        // 0x18d754: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d750) {
            ctx->pc = 0x18D760u;
            goto label_18d760;
        }
    }
    ctx->pc = 0x18D758u;
    // 0x18d758: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x18d758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x18d75c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x18d75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_18d760:
    // 0x18d760: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x18d764: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d76c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18d770: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x18d770u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x18d774: 0xc041418  jal         func_105060
    ctx->pc = 0x18D774u;
    SET_GPR_U32(ctx, 31, 0x18D77Cu);
    ctx->pc = 0x18D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D774u;
    // 0x18d778: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D774u, 0x18D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D77Cu;
label_18d77c:
    // 0x18d77c: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x18d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x18d780: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x18d780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x18d784: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d788: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d78c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d790: 0xc041418  jal         func_105060
    ctx->pc = 0x18D790u;
    SET_GPR_U32(ctx, 31, 0x18D798u);
    ctx->pc = 0x18D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D790u;
    // 0x18d794: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D790u, 0x18D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D798u;
label_18d798:
    // 0x18d798: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x18d798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x18d79c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d7a0: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x18d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18d7a4: 0xc041418  jal         func_105060
    ctx->pc = 0x18D7A4u;
    SET_GPR_U32(ctx, 31, 0x18D7ACu);
    ctx->pc = 0x18D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7A4u;
    // 0x18d7a8: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D7A4u, 0x18D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7ACu;
label_18d7ac:
    // 0x18d7ac: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18d7b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d7b4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18d7b8: 0xc041418  jal         func_105060
    ctx->pc = 0x18D7B8u;
    SET_GPR_U32(ctx, 31, 0x18D7C0u);
    ctx->pc = 0x18D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7B8u;
    // 0x18d7bc: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D7B8u, 0x18D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7C0u;
label_18d7c0:
    // 0x18d7c0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18d7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7c8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x18d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x18d7cc: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x18D7CCu;
    SET_GPR_U32(ctx, 31, 0x18D7D4u);
    ctx->pc = 0x18D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7CCu;
    // 0x18d7d0: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x18D7CCu, 0x18D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7D4u;
label_18d7d4:
    // 0x18d7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7dc: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x18D7DCu;
    SET_GPR_U32(ctx, 31, 0x18D7E4u);
    ctx->pc = 0x18D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7DCu;
    // 0x18d7e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x18D7DCu, 0x18D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7E4u;
label_18d7e4:
    // 0x18d7e4: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x18d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x18d7e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d7ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18d7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18d7f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d7f4: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x18d7f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x18d7f8: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x18d7f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x18d7fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d800: 0x3402ddb0  ori         $v0, $zero, 0xDDB0
    ctx->pc = 0x18d800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56752);
    // 0x18d804: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d808: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d80c: 0x34429380  ori         $v0, $v0, 0x9380
    ctx->pc = 0x18d80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37760);
    // 0x18d810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18d810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18d814: 0xc041418  jal         func_105060
    ctx->pc = 0x18D814u;
    SET_GPR_U32(ctx, 31, 0x18D81Cu);
    ctx->pc = 0x18D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D814u;
    // 0x18d818: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D814u, 0x18D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D81Cu;
label_18d81c:
    // 0x18d81c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d820: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x18d820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18d824: 0xc041418  jal         func_105060
    ctx->pc = 0x18D824u;
    SET_GPR_U32(ctx, 31, 0x18D82Cu);
    ctx->pc = 0x18D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D824u;
    // 0x18d828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D824u, 0x18D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D82Cu;
label_18d82c:
    // 0x18d82c: 0x3402dc00  ori         $v0, $zero, 0xDC00
    ctx->pc = 0x18d82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56320);
    // 0x18d830: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d834: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d838: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d83c: 0x34429380  ori         $v0, $v0, 0x9380
    ctx->pc = 0x18d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37760);
    // 0x18d840: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d844: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18d844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d848: 0xc041418  jal         func_105060
    ctx->pc = 0x18D848u;
    SET_GPR_U32(ctx, 31, 0x18D850u);
    ctx->pc = 0x18D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D848u;
    // 0x18d84c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D848u, 0x18D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D850u;
label_18d850:
    // 0x18d850: 0x240301fc  addiu       $v1, $zero, 0x1FC
    ctx->pc = 0x18d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x18d854: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x18d854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x18d858: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d85c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x18d85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x18d860: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d864: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18d864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18d868: 0xc041418  jal         func_105060
    ctx->pc = 0x18D868u;
    SET_GPR_U32(ctx, 31, 0x18D870u);
    ctx->pc = 0x18D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D868u;
    // 0x18d86c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D868u, 0x18D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D870u;
label_18d870:
    // 0x18d870: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d874: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18d874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18d878: 0xc041418  jal         func_105060
    ctx->pc = 0x18D878u;
    SET_GPR_U32(ctx, 31, 0x18D880u);
    ctx->pc = 0x18D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D878u;
    // 0x18d87c: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18D878u, 0x18D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D880u;
label_18d880:
    // 0x18d880: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18D880u;
    SET_GPR_U32(ctx, 31, 0x18D888u);
    ctx->pc = 0x18D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D880u;
    // 0x18d884: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18D880u, 0x18D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D888u;
label_18d888:
    // 0x18d888: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18D888u;
    SET_GPR_U32(ctx, 31, 0x18D890u);
    ctx->pc = 0x18D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D888u;
    // 0x18d88c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18D888u, 0x18D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D890u;
label_18d890:
    // 0x18d890: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18d894: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d898: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18d898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d89c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18d89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8a0: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x18d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x18d8a4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18d8a8: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18d8a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18d8ac: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x18d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x18d8b0: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18D8B0u;
    SET_GPR_U32(ctx, 31, 0x18D8B8u);
    ctx->pc = 0x18D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8B0u;
    // 0x18d8b4: 0x344803f0  ori         $t0, $v0, 0x3F0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18D8B0u, 0x18D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8B8u;
label_18d8b8:
    // 0x18d8b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18d8bc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d8c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18d8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d8c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18d8c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8c8: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x18d8cc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18d8d0: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18d8d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18d8d4: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x18d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x18d8d8: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18D8D8u;
    SET_GPR_U32(ctx, 31, 0x18D8E0u);
    ctx->pc = 0x18D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8D8u;
    // 0x18d8dc: 0x344803f4  ori         $t0, $v0, 0x3F4 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1012);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18D8D8u, 0x18D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8E0u;
label_18d8e0:
    // 0x18d8e0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d8e4: 0xc041322  jal         func_104C88
    ctx->pc = 0x18D8E4u;
    SET_GPR_U32(ctx, 31, 0x18D8ECu);
    ctx->pc = 0x18D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8E4u;
    // 0x18d8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x18D8E4u, 0x18D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8ECu;
label_18d8ec:
    // 0x18d8ec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d8f0: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18D8F0u;
    SET_GPR_U32(ctx, 31, 0x18D8F8u);
    ctx->pc = 0x18D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8F0u;
    // 0x18d8f4: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18D8F0u, 0x18D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8F8u;
label_18d8f8:
    // 0x18d8f8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d8fc: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18D8FCu;
    SET_GPR_U32(ctx, 31, 0x18D904u);
    ctx->pc = 0x18D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8FCu;
    // 0x18d900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18D8FCu, 0x18D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D904u;
label_18d904:
    // 0x18d904: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d908: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18d908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d90c: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18D90Cu;
    SET_GPR_U32(ctx, 31, 0x18D914u);
    ctx->pc = 0x18D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D90Cu;
    // 0x18d910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18D90Cu, 0x18D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D914u;
label_18d914:
    // 0x18d914: 0xc041298  jal         func_104A60
    ctx->pc = 0x18D914u;
    SET_GPR_U32(ctx, 31, 0x18D91Cu);
    ctx->pc = 0x18D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D914u;
    // 0x18d918: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18D914u, 0x18D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D91Cu;
label_18d91c:
    // 0x18d91c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x18d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18d920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18d920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d924: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d928: 0xc041290  jal         func_104A40
    ctx->pc = 0x18D928u;
    SET_GPR_U32(ctx, 31, 0x18D930u);
    ctx->pc = 0x18D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D928u;
    // 0x18d92c: 0xac6202f0  sw          $v0, 0x2F0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18D928u, 0x18D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D930u;
label_18d930:
    // 0x18d930: 0xc041294  jal         func_104A50
    ctx->pc = 0x18D930u;
    SET_GPR_U32(ctx, 31, 0x18D938u);
    ctx->pc = 0x18D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D930u;
    // 0x18d934: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18D930u, 0x18D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D938u;
label_18d938:
    // 0x18d938: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d93c: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x18D93Cu;
    SET_GPR_U32(ctx, 31, 0x18D944u);
    ctx->pc = 0x18D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D93Cu;
    // 0x18d940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x18D93Cu, 0x18D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D944u;
label_18d944:
    // 0x18d944: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d948: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18D948u;
    SET_GPR_U32(ctx, 31, 0x18D950u);
    ctx->pc = 0x18D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D948u;
    // 0x18d94c: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18D948u, 0x18D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D950u;
label_18d950:
    // 0x18d950: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d954: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18D954u;
    SET_GPR_U32(ctx, 31, 0x18D95Cu);
    ctx->pc = 0x18D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D954u;
    // 0x18d958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18D954u, 0x18D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D95Cu;
label_18d95c:
    // 0x18d95c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18d960: 0xc041386  jal         func_104E18
    ctx->pc = 0x18D960u;
    SET_GPR_U32(ctx, 31, 0x18D968u);
    ctx->pc = 0x18D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D960u;
    // 0x18d964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x18D960u, 0x18D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D968u;
label_18d968:
    // 0x18d968: 0x97a500e0  lhu         $a1, 0xE0($sp)
    ctx->pc = 0x18d968u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18d96c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x18d96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x18d970: 0x25980  sll         $t3, $v0, 6
    ctx->pc = 0x18d970u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18d974: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x18d974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18d978: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x18d978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x18d97c: 0x30047fff  andi        $a0, $zero, 0x7FFF
    ctx->pc = 0x18d97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x18d980: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x18d980u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18d984: 0x240cff7f  addiu       $t4, $zero, -0x81
    ctx->pc = 0x18d984u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18d988: 0x640d0080  daddiu      $t5, $zero, 0x80
    ctx->pc = 0x18d988u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x18d98c: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x18d98cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x18d990: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x18d990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18d994: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x18d994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x18d998: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x18d998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18d99c: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x18d99cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18d9a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18d9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18d9a4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18d9a8: 0xa7a200e0  sh          $v0, 0xE0($sp)
    ctx->pc = 0x18d9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d9ac: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x18d9acu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x18d9b0: 0x27a200e1  addiu       $v0, $sp, 0xE1
    ctx->pc = 0x18d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 225));
    // 0x18d9b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18d9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d9b8: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x18d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x18d9bc: 0x4d6025  or          $t4, $v0, $t5
    ctx->pc = 0x18d9bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x18d9c0: 0x27a200e1  addiu       $v0, $sp, 0xE1
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 225));
    // 0x18d9c4: 0xa04c0000  sb          $t4, 0x0($v0)
    ctx->pc = 0x18d9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x18d9c8: 0x27a200e5  addiu       $v0, $sp, 0xE5
    ctx->pc = 0x18d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 229));
    // 0x18d9cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18d9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d9d0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18d9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18d9d4: 0x4b5025  or          $t2, $v0, $t3
    ctx->pc = 0x18d9d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x18d9d8: 0x27a200e5  addiu       $v0, $sp, 0xE5
    ctx->pc = 0x18d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 229));
    // 0x18d9dc: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x18d9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x18d9e0: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18d9e4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18d9e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d9e8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x18d9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x18d9ec: 0x494025  or          $t0, $v0, $t1
    ctx->pc = 0x18d9ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x18d9f0: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18d9f4: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x18d9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x18d9f8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18d9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d9fc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x18d9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x18da00: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x18da00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x18da04: 0x27a200e7  addiu       $v0, $sp, 0xE7
    ctx->pc = 0x18da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 231));
    // 0x18da08: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x18da08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x18da0c: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x18da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x18da10: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18da10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18da14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18da14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18da18: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x18da18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18da1c: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x18da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x18da20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x18da20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18da24: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x18da24u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18da28: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x18DA28u;
    SET_GPR_U32(ctx, 31, 0x18DA30u);
    ctx->pc = 0x18DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA28u;
    // 0x18da2c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x18DA28u, 0x18DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA30u;
label_18da30:
    // 0x18da30: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x18da30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18da34: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18da34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18da38: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18da38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18da3c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x18da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18da40: 0xc041418  jal         func_105060
    ctx->pc = 0x18DA40u;
    SET_GPR_U32(ctx, 31, 0x18DA48u);
    ctx->pc = 0x18DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA40u;
    // 0x18da44: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DA40u, 0x18DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA48u;
label_18da48:
    // 0x18da48: 0x24030378  addiu       $v1, $zero, 0x378
    ctx->pc = 0x18da48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 888));
    // 0x18da4c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x18da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x18da50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18da50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18da54: 0x3442800a  ori         $v0, $v0, 0x800A
    ctx->pc = 0x18da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32778);
    // 0x18da58: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18da5c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18da60: 0xc041418  jal         func_105060
    ctx->pc = 0x18DA60u;
    SET_GPR_U32(ctx, 31, 0x18DA68u);
    ctx->pc = 0x18DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA60u;
    // 0x18da64: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DA60u, 0x18DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA68u;
label_18da68:
    // 0x18da68: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x18da68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x18da6c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18da70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18da70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18da74: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18da78: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18da7c: 0xc041418  jal         func_105060
    ctx->pc = 0x18DA7Cu;
    SET_GPR_U32(ctx, 31, 0x18DA84u);
    ctx->pc = 0x18DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA7Cu;
    // 0x18da80: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DA7Cu, 0x18DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA84u;
label_18da84:
    // 0x18da84: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x18da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x18da88: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18da8c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18da90: 0xc041418  jal         func_105060
    ctx->pc = 0x18DA90u;
    SET_GPR_U32(ctx, 31, 0x18DA98u);
    ctx->pc = 0x18DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA90u;
    // 0x18da94: 0x3446c000  ori         $a2, $v0, 0xC000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DA90u, 0x18DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA98u;
label_18da98:
    // 0x18da98: 0x340280ff  ori         $v0, $zero, 0x80FF
    ctx->pc = 0x18da98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33023);
    // 0x18da9c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18daa0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18daa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18daa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18daa8: 0xc041418  jal         func_105060
    ctx->pc = 0x18DAA8u;
    SET_GPR_U32(ctx, 31, 0x18DAB0u);
    ctx->pc = 0x18DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAA8u;
    // 0x18daac: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DAA8u, 0x18DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAB0u;
label_18dab0:
    // 0x18dab0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18dab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dab8: 0xc041418  jal         func_105060
    ctx->pc = 0x18DAB8u;
    SET_GPR_U32(ctx, 31, 0x18DAC0u);
    ctx->pc = 0x18DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAB8u;
    // 0x18dabc: 0x24060106  addiu       $a2, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DAB8u, 0x18DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAC0u;
label_18dac0:
    // 0x18dac0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18dac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dac4: 0x0  nop
    ctx->pc = 0x18dac4u;
    // NOP
label_18dac8:
    // 0x18dac8: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18dacc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18daccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dad0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18dad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18dad4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18dad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18dad8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18dad8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18dadc: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18dadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18dae0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18dae4: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x18dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x18dae8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18dae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18daec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18daecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18daf0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18daf4: 0xc041418  jal         func_105060
    ctx->pc = 0x18DAF4u;
    SET_GPR_U32(ctx, 31, 0x18DAFCu);
    ctx->pc = 0x18DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAF4u;
    // 0x18daf8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DAF4u, 0x18DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAFCu;
label_18dafc:
    // 0x18dafc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x18dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x18db00: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18db00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18db04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18db04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18db08: 0xc041418  jal         func_105060
    ctx->pc = 0x18DB08u;
    SET_GPR_U32(ctx, 31, 0x18DB10u);
    ctx->pc = 0x18DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB08u;
    // 0x18db0c: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DB08u, 0x18DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB10u;
label_18db10:
    // 0x18db10: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18db14: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18db18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18db18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18db1c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18db20: 0xc041418  jal         func_105060
    ctx->pc = 0x18DB20u;
    SET_GPR_U32(ctx, 31, 0x18DB28u);
    ctx->pc = 0x18DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB20u;
    // 0x18db24: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DB20u, 0x18DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB28u;
label_18db28:
    // 0x18db28: 0x3c020e08  lui         $v0, 0xE08
    ctx->pc = 0x18db28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3592 << 16));
    // 0x18db2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18db30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18db30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18db34: 0xc041418  jal         func_105060
    ctx->pc = 0x18DB34u;
    SET_GPR_U32(ctx, 31, 0x18DB3Cu);
    ctx->pc = 0x18DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB34u;
    // 0x18db38: 0x34461008  ori         $a2, $v0, 0x1008 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DB34u, 0x18DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB3Cu;
label_18db3c:
    // 0x18db3c: 0x34028e00  ori         $v0, $zero, 0x8E00
    ctx->pc = 0x18db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36352);
    // 0x18db40: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18db44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18db44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18db48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18db48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18db4c: 0xc041418  jal         func_105060
    ctx->pc = 0x18DB4Cu;
    SET_GPR_U32(ctx, 31, 0x18DB54u);
    ctx->pc = 0x18DB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB4Cu;
    // 0x18db50: 0x34469000  ori         $a2, $v0, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DB4Cu, 0x18DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB54u;
label_18db54:
    // 0x18db54: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18db54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18db58: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x18db58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x18db5c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x18DB5Cu;
    {
        const bool branch_taken_0x18db5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB5Cu;
        // 0x18db60: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db5c) {
            ctx->pc = 0x18DAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dac8;
        }
    }
    ctx->pc = 0x18DB64u;
    // 0x18db64: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18db64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18db68: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18db6c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18db70: 0xc041418  jal         func_105060
    ctx->pc = 0x18DB70u;
    SET_GPR_U32(ctx, 31, 0x18DB78u);
    ctx->pc = 0x18DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB70u;
    // 0x18db74: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DB70u, 0x18DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB78u;
label_18db78:
    // 0x18db78: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x18db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18db7c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18db80: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x18db80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18db84: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18db84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18db88: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x18db88u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18db8c: 0x3c022001  lui         $v0, 0x2001
    ctx->pc = 0x18db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8193 << 16));
    // 0x18db90: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18db90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x18db94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18db94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18db98: 0x61dbc  dsll32      $v1, $a2, 22
    ctx->pc = 0x18db98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 22));
    // 0x18db9c: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x18db9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x18dba0: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x18dba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x18dba4: 0xc041418  jal         func_105060
    ctx->pc = 0x18DBA4u;
    SET_GPR_U32(ctx, 31, 0x18DBACu);
    ctx->pc = 0x18DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBA4u;
    // 0x18dba8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DBA4u, 0x18DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBACu;
label_18dbac:
    // 0x18dbac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x18dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x18dbb0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dbb4: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18dbb8: 0xc041418  jal         func_105060
    ctx->pc = 0x18DBB8u;
    SET_GPR_U32(ctx, 31, 0x18DBC0u);
    ctx->pc = 0x18DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBB8u;
    // 0x18dbbc: 0x3446009c  ori         $a2, $v0, 0x9C (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)156);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DBB8u, 0x18DBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBC0u;
label_18dbc0:
    // 0x18dbc0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dbc4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18dbc8: 0xc041418  jal         func_105060
    ctx->pc = 0x18DBC8u;
    SET_GPR_U32(ctx, 31, 0x18DBD0u);
    ctx->pc = 0x18DBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBC8u;
    // 0x18dbcc: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DBC8u, 0x18DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBD0u;
label_18dbd0:
    // 0x18dbd0: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x18dbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18dbd4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dbd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18dbdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dbe0: 0xc041418  jal         func_105060
    ctx->pc = 0x18DBE0u;
    SET_GPR_U32(ctx, 31, 0x18DBE8u);
    ctx->pc = 0x18DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBE0u;
    // 0x18dbe4: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DBE0u, 0x18DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBE8u;
label_18dbe8:
    // 0x18dbe8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dbec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18dbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dbf0: 0xc041418  jal         func_105060
    ctx->pc = 0x18DBF0u;
    SET_GPR_U32(ctx, 31, 0x18DBF8u);
    ctx->pc = 0x18DBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBF0u;
    // 0x18dbf4: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DBF0u, 0x18DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DBF8u;
label_18dbf8:
    // 0x18dbf8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18dbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dbfc: 0x0  nop
    ctx->pc = 0x18dbfcu;
    // NOP
label_18dc00:
    // 0x18dc00: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18dc04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dc08: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18dc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18dc0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18dc0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18dc10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18dc10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18dc14: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18dc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18dc18: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18dc1c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x18dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x18dc20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18dc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18dc24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dc28: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dc2c: 0xc041418  jal         func_105060
    ctx->pc = 0x18DC2Cu;
    SET_GPR_U32(ctx, 31, 0x18DC34u);
    ctx->pc = 0x18DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC2Cu;
    // 0x18dc30: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DC2Cu, 0x18DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC34u;
label_18dc34:
    // 0x18dc34: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dc38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18dc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18dc3c: 0xc041418  jal         func_105060
    ctx->pc = 0x18DC3Cu;
    SET_GPR_U32(ctx, 31, 0x18DC44u);
    ctx->pc = 0x18DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC3Cu;
    // 0x18dc40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DC3Cu, 0x18DC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC44u;
label_18dc44:
    // 0x18dc44: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18dc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18dc48: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dc4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18dc50: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18dc54: 0xc041418  jal         func_105060
    ctx->pc = 0x18DC54u;
    SET_GPR_U32(ctx, 31, 0x18DC5Cu);
    ctx->pc = 0x18DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC54u;
    // 0x18dc58: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DC54u, 0x18DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC5Cu;
label_18dc5c:
    // 0x18dc5c: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x18dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x18dc60: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dc64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18dc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18dc68: 0xc041418  jal         func_105060
    ctx->pc = 0x18DC68u;
    SET_GPR_U32(ctx, 31, 0x18DC70u);
    ctx->pc = 0x18DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC68u;
    // 0x18dc6c: 0x34461000  ori         $a2, $v0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DC68u, 0x18DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC70u;
label_18dc70:
    // 0x18dc70: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x18dc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x18dc74: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dc78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18dc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18dc7c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18dc80: 0xc041418  jal         func_105060
    ctx->pc = 0x18DC80u;
    SET_GPR_U32(ctx, 31, 0x18DC88u);
    ctx->pc = 0x18DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC80u;
    // 0x18dc84: 0x34468800  ori         $a2, $v0, 0x8800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DC80u, 0x18DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC88u;
label_18dc88:
    // 0x18dc88: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18dc88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18dc8c: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x18dc8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18dc90: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x18DC90u;
    {
        const bool branch_taken_0x18dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC90u;
        // 0x18dc94: 0x240301fc  addiu       $v1, $zero, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc90) {
            ctx->pc = 0x18DC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dc00;
        }
    }
    ctx->pc = 0x18DC98u;
    // 0x18dc98: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x18dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x18dc9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18dc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18dca0: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x18dca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x18dca4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dca8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18dca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18dcac: 0xc041418  jal         func_105060
    ctx->pc = 0x18DCACu;
    SET_GPR_U32(ctx, 31, 0x18DCB4u);
    ctx->pc = 0x18DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCACu;
    // 0x18dcb0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DCACu, 0x18DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCB4u;
label_18dcb4:
    // 0x18dcb4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x18dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x18dcb8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dcbc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18dcc0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18dcc4: 0xc041418  jal         func_105060
    ctx->pc = 0x18DCC4u;
    SET_GPR_U32(ctx, 31, 0x18DCCCu);
    ctx->pc = 0x18DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCC4u;
    // 0x18dcc8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DCC4u, 0x18DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCCCu;
label_18dccc:
    // 0x18dccc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dcd0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18dcd4: 0xc041418  jal         func_105060
    ctx->pc = 0x18DCD4u;
    SET_GPR_U32(ctx, 31, 0x18DCDCu);
    ctx->pc = 0x18DCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCD4u;
    // 0x18dcd8: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DCD4u, 0x18DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCDCu;
label_18dcdc:
    // 0x18dcdc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dce0: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18dce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18dce4: 0xc041418  jal         func_105060
    ctx->pc = 0x18DCE4u;
    SET_GPR_U32(ctx, 31, 0x18DCECu);
    ctx->pc = 0x18DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCE4u;
    // 0x18dce8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DCE4u, 0x18DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCECu;
label_18dcec:
    // 0x18dcec: 0x3402dc01  ori         $v0, $zero, 0xDC01
    ctx->pc = 0x18dcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56321);
    // 0x18dcf0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18dcf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18dcf8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18dcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18dcfc: 0x34421380  ori         $v0, $v0, 0x1380
    ctx->pc = 0x18dcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4992);
    // 0x18dd00: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dd04: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18dd08: 0xc041418  jal         func_105060
    ctx->pc = 0x18DD08u;
    SET_GPR_U32(ctx, 31, 0x18DD10u);
    ctx->pc = 0x18DD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD08u;
    // 0x18dd0c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DD08u, 0x18DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD10u;
label_18dd10:
    // 0x18dd10: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x18dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x18dd14: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dd18: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18dd1c: 0xc041418  jal         func_105060
    ctx->pc = 0x18DD1Cu;
    SET_GPR_U32(ctx, 31, 0x18DD24u);
    ctx->pc = 0x18DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD1Cu;
    // 0x18dd20: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DD1Cu, 0x18DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD24u;
label_18dd24:
    // 0x18dd24: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x18dd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18dd28: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dd2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18dd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18dd30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dd34: 0xc041418  jal         func_105060
    ctx->pc = 0x18DD34u;
    SET_GPR_U32(ctx, 31, 0x18DD3Cu);
    ctx->pc = 0x18DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD34u;
    // 0x18dd38: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DD34u, 0x18DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD3Cu;
label_18dd3c:
    // 0x18dd3c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dd40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18dd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd44: 0xc041418  jal         func_105060
    ctx->pc = 0x18DD44u;
    SET_GPR_U32(ctx, 31, 0x18DD4Cu);
    ctx->pc = 0x18DD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD44u;
    // 0x18dd48: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DD44u, 0x18DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD4Cu;
label_18dd4c:
    // 0x18dd4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18dd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18dd50:
    // 0x18dd50: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x18dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x18dd54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dd58: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18dd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18dd5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18dd5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18dd60: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18dd60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18dd64: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x18dd64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x18dd68: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18dd6c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x18dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x18dd70: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18dd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18dd74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dd78: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dd7c: 0xc041418  jal         func_105060
    ctx->pc = 0x18DD7Cu;
    SET_GPR_U32(ctx, 31, 0x18DD84u);
    ctx->pc = 0x18DD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD7Cu;
    // 0x18dd80: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DD7Cu, 0x18DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD84u;
label_18dd84:
    // 0x18dd84: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dd88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18dd8c: 0xc041418  jal         func_105060
    ctx->pc = 0x18DD8Cu;
    SET_GPR_U32(ctx, 31, 0x18DD94u);
    ctx->pc = 0x18DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD8Cu;
    // 0x18dd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DD8Cu, 0x18DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD94u;
label_18dd94:
    // 0x18dd94: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x18dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x18dd98: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dd9c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18dda0: 0xc041418  jal         func_105060
    ctx->pc = 0x18DDA0u;
    SET_GPR_U32(ctx, 31, 0x18DDA8u);
    ctx->pc = 0x18DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDA0u;
    // 0x18dda4: 0x34467ff0  ori         $a2, $v0, 0x7FF0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32752);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DDA0u, 0x18DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDA8u;
label_18dda8:
    // 0x18dda8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18ddac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ddb0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ddb4: 0xc041418  jal         func_105060
    ctx->pc = 0x18DDB4u;
    SET_GPR_U32(ctx, 31, 0x18DDBCu);
    ctx->pc = 0x18DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDB4u;
    // 0x18ddb8: 0x34460800  ori         $a2, $v0, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DDB4u, 0x18DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDBCu;
label_18ddbc:
    // 0x18ddbc: 0x340287f0  ori         $v0, $zero, 0x87F0
    ctx->pc = 0x18ddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34800);
    // 0x18ddc0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ddc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18ddc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18ddc8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18ddcc: 0xc041418  jal         func_105060
    ctx->pc = 0x18DDCCu;
    SET_GPR_U32(ctx, 31, 0x18DDD4u);
    ctx->pc = 0x18DDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDCCu;
    // 0x18ddd0: 0x344687f0  ori         $a2, $v0, 0x87F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DDCCu, 0x18DDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDD4u;
label_18ddd4:
    // 0x18ddd4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x18ddd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18ddd8: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x18ddd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18dddc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x18DDDCu;
    {
        const bool branch_taken_0x18dddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDDCu;
        // 0x18dde0: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dddc) {
            ctx->pc = 0x18DD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dd50;
        }
    }
    ctx->pc = 0x18DDE4u;
    // 0x18dde4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dde8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18dde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18ddec: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18ddecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18ddf0: 0xc041418  jal         func_105060
    ctx->pc = 0x18DDF0u;
    SET_GPR_U32(ctx, 31, 0x18DDF8u);
    ctx->pc = 0x18DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDF0u;
    // 0x18ddf4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DDF0u, 0x18DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDF8u;
label_18ddf8:
    // 0x18ddf8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ddfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ddfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de00: 0xc041418  jal         func_105060
    ctx->pc = 0x18DE00u;
    SET_GPR_U32(ctx, 31, 0x18DE08u);
    ctx->pc = 0x18DE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE00u;
    // 0x18de04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DE00u, 0x18DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE08u;
label_18de08:
    // 0x18de08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18de0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de10: 0xc041418  jal         func_105060
    ctx->pc = 0x18DE10u;
    SET_GPR_U32(ctx, 31, 0x18DE18u);
    ctx->pc = 0x18DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE10u;
    // 0x18de14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DE10u, 0x18DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE18u;
label_18de18:
    // 0x18de18: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18de18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18de1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18de20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18de24: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18de24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18de28: 0xc041418  jal         func_105060
    ctx->pc = 0x18DE28u;
    SET_GPR_U32(ctx, 31, 0x18DE30u);
    ctx->pc = 0x18DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE28u;
    // 0x18de2c: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DE28u, 0x18DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE30u;
label_18de30:
    // 0x18de30: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18de30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18de34: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18de38: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18de38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18de3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18de40: 0xc041418  jal         func_105060
    ctx->pc = 0x18DE40u;
    SET_GPR_U32(ctx, 31, 0x18DE48u);
    ctx->pc = 0x18DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE40u;
    // 0x18de44: 0x344687f0  ori         $a2, $v0, 0x87F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DE40u, 0x18DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE48u;
label_18de48:
    // 0x18de48: 0x340287f0  ori         $v0, $zero, 0x87F0
    ctx->pc = 0x18de48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34800);
    // 0x18de4c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18de50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18de50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18de54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18de54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18de58: 0xc041418  jal         func_105060
    ctx->pc = 0x18DE58u;
    SET_GPR_U32(ctx, 31, 0x18DE60u);
    ctx->pc = 0x18DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE58u;
    // 0x18de5c: 0x344687f0  ori         $a2, $v0, 0x87F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DE58u, 0x18DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE60u;
label_18de60:
    // 0x18de60: 0x340287f0  ori         $v0, $zero, 0x87F0
    ctx->pc = 0x18de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34800);
    // 0x18de64: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18de64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18de68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18de68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18de6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18de6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18de70: 0xc041418  jal         func_105060
    ctx->pc = 0x18DE70u;
    SET_GPR_U32(ctx, 31, 0x18DE78u);
    ctx->pc = 0x18DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE70u;
    // 0x18de74: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DE70u, 0x18DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE78u;
label_18de78:
    // 0x18de78: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18de78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18de7c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18de80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18de80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18de84: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18de84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18de88: 0xc041418  jal         func_105060
    ctx->pc = 0x18DE88u;
    SET_GPR_U32(ctx, 31, 0x18DE90u);
    ctx->pc = 0x18DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE88u;
    // 0x18de8c: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DE88u, 0x18DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE90u;
label_18de90:
    // 0x18de90: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18de94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de98: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DE98u;
    {
        const bool branch_taken_0x18de98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE98u;
        // 0x18de9c: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de98) {
            ctx->pc = 0x18DEA8u;
            goto label_18dea8;
        }
    }
    ctx->pc = 0x18DEA0u;
    // 0x18dea0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x18dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x18dea4: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x18dea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_18dea8:
    // 0x18dea8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x18dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x18deac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18deacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18deb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18deb4: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x18deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18deb8: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x18deb8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x18debc: 0xc041418  jal         func_105060
    ctx->pc = 0x18DEBCu;
    SET_GPR_U32(ctx, 31, 0x18DEC4u);
    ctx->pc = 0x18DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEBCu;
    // 0x18dec0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DEBCu, 0x18DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DEC4u;
label_18dec4:
    // 0x18dec4: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x18dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x18dec8: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x18dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x18decc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18deccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18ded0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18ded4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18ded8: 0xc041418  jal         func_105060
    ctx->pc = 0x18DED8u;
    SET_GPR_U32(ctx, 31, 0x18DEE0u);
    ctx->pc = 0x18DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DED8u;
    // 0x18dedc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DED8u, 0x18DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DEE0u;
label_18dee0:
    // 0x18dee0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x18dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x18dee4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dee8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18deec: 0xc041418  jal         func_105060
    ctx->pc = 0x18DEECu;
    SET_GPR_U32(ctx, 31, 0x18DEF4u);
    ctx->pc = 0x18DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEECu;
    // 0x18def0: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DEECu, 0x18DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DEF4u;
label_18def4:
    // 0x18def4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18def4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18def8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18defc: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x18defcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18df00: 0xc041418  jal         func_105060
    ctx->pc = 0x18DF00u;
    SET_GPR_U32(ctx, 31, 0x18DF08u);
    ctx->pc = 0x18DF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF00u;
    // 0x18df04: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DF00u, 0x18DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF08u;
label_18df08:
    // 0x18df08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18df0c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x18df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18df10: 0xc041418  jal         func_105060
    ctx->pc = 0x18DF10u;
    SET_GPR_U32(ctx, 31, 0x18DF18u);
    ctx->pc = 0x18DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF10u;
    // 0x18df14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DF10u, 0x18DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF18u;
label_18df18:
    // 0x18df18: 0x3402dc01  ori         $v0, $zero, 0xDC01
    ctx->pc = 0x18df18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56321);
    // 0x18df1c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18df20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18df20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18df24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18df24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18df28: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x18df2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18df30: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18df30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18df34: 0xc041418  jal         func_105060
    ctx->pc = 0x18DF34u;
    SET_GPR_U32(ctx, 31, 0x18DF3Cu);
    ctx->pc = 0x18DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF34u;
    // 0x18df38: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DF34u, 0x18DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF3Cu;
label_18df3c:
    // 0x18df3c: 0x240301fc  addiu       $v1, $zero, 0x1FC
    ctx->pc = 0x18df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
    // 0x18df40: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x18df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x18df44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18df44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18df48: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x18df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x18df4c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18df50: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18df50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18df54: 0xc041418  jal         func_105060
    ctx->pc = 0x18DF54u;
    SET_GPR_U32(ctx, 31, 0x18DF5Cu);
    ctx->pc = 0x18DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF54u;
    // 0x18df58: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DF54u, 0x18DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF5Cu;
label_18df5c:
    // 0x18df5c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18df5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18df60: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x18df60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18df64: 0xc041418  jal         func_105060
    ctx->pc = 0x18DF64u;
    SET_GPR_U32(ctx, 31, 0x18DF6Cu);
    ctx->pc = 0x18DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF64u;
    // 0x18df68: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x18DF64u, 0x18DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF6Cu;
label_18df6c:
    // 0x18df6c: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x18DF6Cu;
    SET_GPR_U32(ctx, 31, 0x18DF74u);
    ctx->pc = 0x18DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF6Cu;
    // 0x18df70: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x18DF6Cu, 0x18DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF74u;
label_18df74:
    // 0x18df74: 0xc04139c  jal         func_104E70
    ctx->pc = 0x18DF74u;
    SET_GPR_U32(ctx, 31, 0x18DF7Cu);
    ctx->pc = 0x18DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF74u;
    // 0x18df78: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x18DF74u, 0x18DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF7Cu;
label_18df7c:
    // 0x18df7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18df80: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18df80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18df84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18df84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18df88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18df88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df8c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x18df8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x18df90: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18df90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18df94: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18df94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18df98: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x18df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x18df9c: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18DF9Cu;
    SET_GPR_U32(ctx, 31, 0x18DFA4u);
    ctx->pc = 0x18DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF9Cu;
    // 0x18dfa0: 0x344803f0  ori         $t0, $v0, 0x3F0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18DF9Cu, 0x18DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFA4u;
label_18dfa4:
    // 0x18dfa4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18dfa8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dfac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18dfb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18dfb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfb4: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x18dfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x18dfb8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18dfbc: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18dfbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18dfc0: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x18dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x18dfc4: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18DFC4u;
    SET_GPR_U32(ctx, 31, 0x18DFCCu);
    ctx->pc = 0x18DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFC4u;
    // 0x18dfc8: 0x344803f4  ori         $t0, $v0, 0x3F4 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1012);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18DFC4u, 0x18DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFCCu;
label_18dfcc:
    // 0x18dfcc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dfd0: 0xc041322  jal         func_104C88
    ctx->pc = 0x18DFD0u;
    SET_GPR_U32(ctx, 31, 0x18DFD8u);
    ctx->pc = 0x18DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFD0u;
    // 0x18dfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x18DFD0u, 0x18DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFD8u;
label_18dfd8:
    // 0x18dfd8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dfdc: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18DFDCu;
    SET_GPR_U32(ctx, 31, 0x18DFE4u);
    ctx->pc = 0x18DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFDCu;
    // 0x18dfe0: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18DFDCu, 0x18DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFE4u;
label_18dfe4:
    // 0x18dfe4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dfe8: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x18DFE8u;
    SET_GPR_U32(ctx, 31, 0x18DFF0u);
    ctx->pc = 0x18DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFE8u;
    // 0x18dfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x18DFE8u, 0x18DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFF0u;
label_18dff0:
    // 0x18dff0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18dff4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18dff8: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18DFF8u;
    SET_GPR_U32(ctx, 31, 0x18E000u);
    ctx->pc = 0x18DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFF8u;
    // 0x18dffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18DFF8u, 0x18E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E000u;
label_18e000:
    // 0x18e000: 0xc041298  jal         func_104A60
    ctx->pc = 0x18E000u;
    SET_GPR_U32(ctx, 31, 0x18E008u);
    ctx->pc = 0x18E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E000u;
    // 0x18e004: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18E000u, 0x18E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E008u;
label_18e008:
    // 0x18e008: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18e008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e00c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18e010: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x18e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18e014: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x18e014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x18e018: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x18e018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18e01c: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x18e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x18e020: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x18e020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x18e024: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18e028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18e02c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x18e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x18e030: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x18e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18e034: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x18e034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18e038: 0x1440f9e1  bnez        $v0, . + 4 + (-0x61F << 2)
    ctx->pc = 0x18E038u;
    {
        const bool branch_taken_0x18e038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e038) {
            ctx->pc = 0x18C7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c7c0;
        }
    }
    ctx->pc = 0x18E040u;
    // 0x18e040: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18e040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18e044: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x18e044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x18e048: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18e048u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18e04c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x18e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18e050: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18e050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e054: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18e054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18e058: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18e058u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e05c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18e05cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e060: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18e060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e064: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18e064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e068: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e06c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e074: 0x3e00008  jr          $ra
    ctx->pc = 0x18E074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E074u;
        // 0x18e078: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E07Cu;
}
