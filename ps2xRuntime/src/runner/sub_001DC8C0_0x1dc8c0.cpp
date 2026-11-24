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

// Function: sub_001DC8C0
// Address: 0x1dc8c0 - 0x1dcbbc
void sub_001DC8C0_0x1dc8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC8C0_0x1dc8c0");
#endif

    switch (ctx->pc) {
        case 0x1dc8c0u: goto label_1dc8c0;
        case 0x1dc8c4u: goto label_1dc8c4;
        case 0x1dc8c8u: goto label_1dc8c8;
        case 0x1dc8ccu: goto label_1dc8cc;
        case 0x1dc8d0u: goto label_1dc8d0;
        case 0x1dc8d4u: goto label_1dc8d4;
        case 0x1dc8d8u: goto label_1dc8d8;
        case 0x1dc8dcu: goto label_1dc8dc;
        case 0x1dc8e0u: goto label_1dc8e0;
        case 0x1dc8e4u: goto label_1dc8e4;
        case 0x1dc8e8u: goto label_1dc8e8;
        case 0x1dc8ecu: goto label_1dc8ec;
        case 0x1dc8f0u: goto label_1dc8f0;
        case 0x1dc8f4u: goto label_1dc8f4;
        case 0x1dc8f8u: goto label_1dc8f8;
        case 0x1dc8fcu: goto label_1dc8fc;
        case 0x1dc900u: goto label_1dc900;
        case 0x1dc904u: goto label_1dc904;
        case 0x1dc908u: goto label_1dc908;
        case 0x1dc90cu: goto label_1dc90c;
        case 0x1dc910u: goto label_1dc910;
        case 0x1dc914u: goto label_1dc914;
        case 0x1dc918u: goto label_1dc918;
        case 0x1dc91cu: goto label_1dc91c;
        case 0x1dc920u: goto label_1dc920;
        case 0x1dc924u: goto label_1dc924;
        case 0x1dc928u: goto label_1dc928;
        case 0x1dc92cu: goto label_1dc92c;
        case 0x1dc930u: goto label_1dc930;
        case 0x1dc934u: goto label_1dc934;
        case 0x1dc938u: goto label_1dc938;
        case 0x1dc93cu: goto label_1dc93c;
        case 0x1dc940u: goto label_1dc940;
        case 0x1dc944u: goto label_1dc944;
        case 0x1dc948u: goto label_1dc948;
        case 0x1dc94cu: goto label_1dc94c;
        case 0x1dc950u: goto label_1dc950;
        case 0x1dc954u: goto label_1dc954;
        case 0x1dc958u: goto label_1dc958;
        case 0x1dc95cu: goto label_1dc95c;
        case 0x1dc960u: goto label_1dc960;
        case 0x1dc964u: goto label_1dc964;
        case 0x1dc968u: goto label_1dc968;
        case 0x1dc96cu: goto label_1dc96c;
        case 0x1dc970u: goto label_1dc970;
        case 0x1dc974u: goto label_1dc974;
        case 0x1dc978u: goto label_1dc978;
        case 0x1dc97cu: goto label_1dc97c;
        case 0x1dc980u: goto label_1dc980;
        case 0x1dc984u: goto label_1dc984;
        case 0x1dc988u: goto label_1dc988;
        case 0x1dc98cu: goto label_1dc98c;
        case 0x1dc990u: goto label_1dc990;
        case 0x1dc994u: goto label_1dc994;
        case 0x1dc998u: goto label_1dc998;
        case 0x1dc99cu: goto label_1dc99c;
        case 0x1dc9a0u: goto label_1dc9a0;
        case 0x1dc9a4u: goto label_1dc9a4;
        case 0x1dc9a8u: goto label_1dc9a8;
        case 0x1dc9acu: goto label_1dc9ac;
        case 0x1dc9b0u: goto label_1dc9b0;
        case 0x1dc9b4u: goto label_1dc9b4;
        case 0x1dc9b8u: goto label_1dc9b8;
        case 0x1dc9bcu: goto label_1dc9bc;
        case 0x1dc9c0u: goto label_1dc9c0;
        case 0x1dc9c4u: goto label_1dc9c4;
        case 0x1dc9c8u: goto label_1dc9c8;
        case 0x1dc9ccu: goto label_1dc9cc;
        case 0x1dc9d0u: goto label_1dc9d0;
        case 0x1dc9d4u: goto label_1dc9d4;
        case 0x1dc9d8u: goto label_1dc9d8;
        case 0x1dc9dcu: goto label_1dc9dc;
        case 0x1dc9e0u: goto label_1dc9e0;
        case 0x1dc9e4u: goto label_1dc9e4;
        case 0x1dc9e8u: goto label_1dc9e8;
        case 0x1dc9ecu: goto label_1dc9ec;
        case 0x1dc9f0u: goto label_1dc9f0;
        case 0x1dc9f4u: goto label_1dc9f4;
        case 0x1dc9f8u: goto label_1dc9f8;
        case 0x1dc9fcu: goto label_1dc9fc;
        case 0x1dca00u: goto label_1dca00;
        case 0x1dca04u: goto label_1dca04;
        case 0x1dca08u: goto label_1dca08;
        case 0x1dca0cu: goto label_1dca0c;
        case 0x1dca10u: goto label_1dca10;
        case 0x1dca14u: goto label_1dca14;
        case 0x1dca18u: goto label_1dca18;
        case 0x1dca1cu: goto label_1dca1c;
        case 0x1dca20u: goto label_1dca20;
        case 0x1dca24u: goto label_1dca24;
        case 0x1dca28u: goto label_1dca28;
        case 0x1dca2cu: goto label_1dca2c;
        case 0x1dca30u: goto label_1dca30;
        case 0x1dca34u: goto label_1dca34;
        case 0x1dca38u: goto label_1dca38;
        case 0x1dca3cu: goto label_1dca3c;
        case 0x1dca40u: goto label_1dca40;
        case 0x1dca44u: goto label_1dca44;
        case 0x1dca48u: goto label_1dca48;
        case 0x1dca4cu: goto label_1dca4c;
        case 0x1dca50u: goto label_1dca50;
        case 0x1dca54u: goto label_1dca54;
        case 0x1dca58u: goto label_1dca58;
        case 0x1dca5cu: goto label_1dca5c;
        case 0x1dca60u: goto label_1dca60;
        case 0x1dca64u: goto label_1dca64;
        case 0x1dca68u: goto label_1dca68;
        case 0x1dca6cu: goto label_1dca6c;
        case 0x1dca70u: goto label_1dca70;
        case 0x1dca74u: goto label_1dca74;
        case 0x1dca78u: goto label_1dca78;
        case 0x1dca7cu: goto label_1dca7c;
        case 0x1dca80u: goto label_1dca80;
        case 0x1dca84u: goto label_1dca84;
        case 0x1dca88u: goto label_1dca88;
        case 0x1dca8cu: goto label_1dca8c;
        case 0x1dca90u: goto label_1dca90;
        case 0x1dca94u: goto label_1dca94;
        case 0x1dca98u: goto label_1dca98;
        case 0x1dca9cu: goto label_1dca9c;
        case 0x1dcaa0u: goto label_1dcaa0;
        case 0x1dcaa4u: goto label_1dcaa4;
        case 0x1dcaa8u: goto label_1dcaa8;
        case 0x1dcaacu: goto label_1dcaac;
        case 0x1dcab0u: goto label_1dcab0;
        case 0x1dcab4u: goto label_1dcab4;
        case 0x1dcab8u: goto label_1dcab8;
        case 0x1dcabcu: goto label_1dcabc;
        case 0x1dcac0u: goto label_1dcac0;
        case 0x1dcac4u: goto label_1dcac4;
        case 0x1dcac8u: goto label_1dcac8;
        case 0x1dcaccu: goto label_1dcacc;
        case 0x1dcad0u: goto label_1dcad0;
        case 0x1dcad4u: goto label_1dcad4;
        case 0x1dcad8u: goto label_1dcad8;
        case 0x1dcadcu: goto label_1dcadc;
        case 0x1dcae0u: goto label_1dcae0;
        case 0x1dcae4u: goto label_1dcae4;
        case 0x1dcae8u: goto label_1dcae8;
        case 0x1dcaecu: goto label_1dcaec;
        case 0x1dcaf0u: goto label_1dcaf0;
        case 0x1dcaf4u: goto label_1dcaf4;
        case 0x1dcaf8u: goto label_1dcaf8;
        case 0x1dcafcu: goto label_1dcafc;
        case 0x1dcb00u: goto label_1dcb00;
        case 0x1dcb04u: goto label_1dcb04;
        case 0x1dcb08u: goto label_1dcb08;
        case 0x1dcb0cu: goto label_1dcb0c;
        case 0x1dcb10u: goto label_1dcb10;
        case 0x1dcb14u: goto label_1dcb14;
        case 0x1dcb18u: goto label_1dcb18;
        case 0x1dcb1cu: goto label_1dcb1c;
        case 0x1dcb20u: goto label_1dcb20;
        case 0x1dcb24u: goto label_1dcb24;
        case 0x1dcb28u: goto label_1dcb28;
        case 0x1dcb2cu: goto label_1dcb2c;
        case 0x1dcb30u: goto label_1dcb30;
        case 0x1dcb34u: goto label_1dcb34;
        case 0x1dcb38u: goto label_1dcb38;
        case 0x1dcb3cu: goto label_1dcb3c;
        case 0x1dcb40u: goto label_1dcb40;
        case 0x1dcb44u: goto label_1dcb44;
        case 0x1dcb48u: goto label_1dcb48;
        case 0x1dcb4cu: goto label_1dcb4c;
        case 0x1dcb50u: goto label_1dcb50;
        case 0x1dcb54u: goto label_1dcb54;
        case 0x1dcb58u: goto label_1dcb58;
        case 0x1dcb5cu: goto label_1dcb5c;
        case 0x1dcb60u: goto label_1dcb60;
        case 0x1dcb64u: goto label_1dcb64;
        case 0x1dcb68u: goto label_1dcb68;
        case 0x1dcb6cu: goto label_1dcb6c;
        case 0x1dcb70u: goto label_1dcb70;
        case 0x1dcb74u: goto label_1dcb74;
        case 0x1dcb78u: goto label_1dcb78;
        case 0x1dcb7cu: goto label_1dcb7c;
        case 0x1dcb80u: goto label_1dcb80;
        case 0x1dcb84u: goto label_1dcb84;
        case 0x1dcb88u: goto label_1dcb88;
        case 0x1dcb8cu: goto label_1dcb8c;
        case 0x1dcb90u: goto label_1dcb90;
        case 0x1dcb94u: goto label_1dcb94;
        case 0x1dcb98u: goto label_1dcb98;
        case 0x1dcb9cu: goto label_1dcb9c;
        case 0x1dcba0u: goto label_1dcba0;
        case 0x1dcba4u: goto label_1dcba4;
        case 0x1dcba8u: goto label_1dcba8;
        case 0x1dcbacu: goto label_1dcbac;
        case 0x1dcbb0u: goto label_1dcbb0;
        case 0x1dcbb4u: goto label_1dcbb4;
        case 0x1dcbb8u: goto label_1dcbb8;
        default: break;
    }

    ctx->pc = 0x1dc8c0u;

label_1dc8c0:
    // 0x1dc8c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1dc8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1dc8c4:
    // 0x1dc8c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1dc8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1dc8c8:
    // 0x1dc8c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dc8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1dc8cc:
    // 0x1dc8cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dc8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dc8d0:
    // 0x1dc8d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dc8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dc8d4:
    // 0x1dc8d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dc8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dc8d8:
    // 0x1dc8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dc8dc:
    // 0x1dc8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dc8e0:
    // 0x1dc8e0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1dc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1dc8e4:
    // 0x1dc8e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1dc8e8:
    if (ctx->pc == 0x1DC8E8u) {
        ctx->pc = 0x1DC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8E4u;
        // 0x1dc8e8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8ECu;
        goto label_1dc8ec;
    }
    ctx->pc = 0x1DC8E4u;
    {
        const bool branch_taken_0x1dc8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8E4u;
        // 0x1dc8e8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8e4) {
            ctx->pc = 0x1DC8F8u;
            goto label_1dc8f8;
        }
    }
    ctx->pc = 0x1DC8ECu;
label_1dc8ec:
    // 0x1dc8ec: 0x100000aa  b           . + 4 + (0xAA << 2)
label_1dc8f0:
    if (ctx->pc == 0x1DC8F0u) {
        ctx->pc = 0x1DC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8ECu;
        // 0x1dc8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8F4u;
        goto label_1dc8f4;
    }
    ctx->pc = 0x1DC8ECu;
    {
        const bool branch_taken_0x1dc8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8ECu;
        // 0x1dc8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8ec) {
            ctx->pc = 0x1DCB98u;
            goto label_1dcb98;
        }
    }
    ctx->pc = 0x1DC8F4u;
label_1dc8f4:
    // 0x1dc8f4: 0x0  nop
    ctx->pc = 0x1dc8f4u;
    // NOP
label_1dc8f8:
    // 0x1dc8f8: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1dc8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1dc8fc:
    // 0x1dc8fc: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dc8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dc900:
    // 0x1dc900: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1dc900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1dc904:
    // 0x1dc904: 0x320f809  jalr        $t9
label_1dc908:
    if (ctx->pc == 0x1DC908u) {
        ctx->pc = 0x1DC90Cu;
        goto label_1dc90c;
    }
    ctx->pc = 0x1DC904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC90Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC904u, 0x1DC90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC90Cu;
label_1dc90c:
    // 0x1dc90c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dc910:
    if (ctx->pc == 0x1DC910u) {
        ctx->pc = 0x1DC914u;
        goto label_1dc914;
    }
    ctx->pc = 0x1DC90Cu;
    {
        const bool branch_taken_0x1dc90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc90c) {
            ctx->pc = 0x1DC930u;
            goto label_1dc930;
        }
    }
    ctx->pc = 0x1DC914u;
label_1dc914:
    // 0x1dc914: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1dc914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1dc918:
    // 0x1dc918: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dc918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dc91c:
    // 0x1dc91c: 0x320f809  jalr        $t9
label_1dc920:
    if (ctx->pc == 0x1DC920u) {
        ctx->pc = 0x1DC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC91Cu;
        // 0x1dc920: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC924u;
        goto label_1dc924;
    }
    ctx->pc = 0x1DC91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC924u);
        ctx->pc = 0x1DC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC91Cu;
        // 0x1dc920: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC91Cu, 0x1DC924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC924u;
label_1dc924:
    // 0x1dc924: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1dc928:
    if (ctx->pc == 0x1DC928u) {
        ctx->pc = 0x1DC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC924u;
        // 0x1dc928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC92Cu;
        goto label_1dc92c;
    }
    ctx->pc = 0x1DC924u;
    {
        const bool branch_taken_0x1dc924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC924u;
        // 0x1dc928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc924) {
            ctx->pc = 0x1DCB98u;
            goto label_1dcb98;
        }
    }
    ctx->pc = 0x1DC92Cu;
label_1dc92c:
    // 0x1dc92c: 0x0  nop
    ctx->pc = 0x1dc92cu;
    // NOP
label_1dc930:
    // 0x1dc930: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1dc930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1dc934:
    // 0x1dc934: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1dc934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1dc938:
    // 0x1dc938: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1dc938u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc93c:
    // 0x1dc93c: 0x84670006  lh          $a3, 0x6($v1)
    ctx->pc = 0x1dc93cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_1dc940:
    // 0x1dc940: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dc940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1dc944:
    // 0x1dc944: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1dc944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1dc948:
    // 0x1dc948: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1dc948u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1dc94c:
    // 0x1dc94c: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1dc94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1dc950:
    // 0x1dc950: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1dc950u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dc954:
    // 0x1dc954: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1dc954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1dc958:
    // 0x1dc958: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dc958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dc95c:
    // 0x1dc95c: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1dc95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1dc960:
    // 0x1dc960: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1dc960u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dc964:
    // 0x1dc964: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1dc964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1dc968:
    // 0x1dc968: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1dc968u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1dc96c:
    // 0x1dc96c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dc96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dc970:
    // 0x1dc970: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1dc970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1dc974:
    // 0x1dc974: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dc974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dc978:
    // 0x1dc978: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1dc978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1dc97c:
    // 0x1dc97c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dc980:
    if (ctx->pc == 0x1DC980u) {
        ctx->pc = 0x1DC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC97Cu;
        // 0x1dc980: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC984u;
        goto label_1dc984;
    }
    ctx->pc = 0x1DC97Cu;
    {
        const bool branch_taken_0x1dc97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC97Cu;
        // 0x1dc980: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc97c) {
            ctx->pc = 0x1DC990u;
            goto label_1dc990;
        }
    }
    ctx->pc = 0x1DC984u;
label_1dc984:
    // 0x1dc984: 0x10000084  b           . + 4 + (0x84 << 2)
label_1dc988:
    if (ctx->pc == 0x1DC988u) {
        ctx->pc = 0x1DC98Cu;
        goto label_1dc98c;
    }
    ctx->pc = 0x1DC984u;
    {
        const bool branch_taken_0x1dc984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc984) {
            ctx->pc = 0x1DCB98u;
            goto label_1dcb98;
        }
    }
    ctx->pc = 0x1DC98Cu;
label_1dc98c:
    // 0x1dc98c: 0x0  nop
    ctx->pc = 0x1dc98cu;
    // NOP
label_1dc990:
    // 0x1dc990: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x1dc990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1dc994:
    // 0x1dc994: 0x1080007e  beqz        $a0, . + 4 + (0x7E << 2)
label_1dc998:
    if (ctx->pc == 0x1DC998u) {
        ctx->pc = 0x1DC99Cu;
        goto label_1dc99c;
    }
    ctx->pc = 0x1DC994u;
    {
        const bool branch_taken_0x1dc994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc994) {
            ctx->pc = 0x1DCB90u;
            goto label_1dcb90;
        }
    }
    ctx->pc = 0x1DC99Cu;
label_1dc99c:
    // 0x1dc99c: 0xc07bc14  jal         func_1EF050
label_1dc9a0:
    if (ctx->pc == 0x1DC9A0u) {
        ctx->pc = 0x1DC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC99Cu;
        // 0x1dc9a0: 0x86a50014  lh          $a1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9A4u;
        goto label_1dc9a4;
    }
    ctx->pc = 0x1DC99Cu;
    SET_GPR_U32(ctx, 31, 0x1DC9A4u);
    ctx->pc = 0x1DC9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC99Cu;
    // 0x1dc9a0: 0x86a50014  lh          $a1, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF050u, 0x1DC99Cu, 0x1DC9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9A4u;
label_1dc9a4:
    // 0x1dc9a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dc9a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc9a8:
    // 0x1dc9a8: 0x12800079  beqz        $s4, . + 4 + (0x79 << 2)
label_1dc9ac:
    if (ctx->pc == 0x1DC9ACu) {
        ctx->pc = 0x1DC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9A8u;
        // 0x1dc9ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9B0u;
        goto label_1dc9b0;
    }
    ctx->pc = 0x1DC9A8u;
    {
        const bool branch_taken_0x1dc9a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9A8u;
        // 0x1dc9ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9a8) {
            ctx->pc = 0x1DCB90u;
            goto label_1dcb90;
        }
    }
    ctx->pc = 0x1DC9B0u;
label_1dc9b0:
    // 0x1dc9b0: 0xc076ed8  jal         func_1DBB60
label_1dc9b4:
    if (ctx->pc == 0x1DC9B4u) {
        ctx->pc = 0x1DC9B8u;
        goto label_1dc9b8;
    }
    ctx->pc = 0x1DC9B0u;
    SET_GPR_U32(ctx, 31, 0x1DC9B8u);
    ctx->pc = 0x1DBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB60u, 0x1DC9B0u, 0x1DC9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9B8u;
label_1dc9b8:
    // 0x1dc9b8: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x1dc9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1dc9bc:
    // 0x1dc9bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dc9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc9c0:
    // 0x1dc9c0: 0xc0766b8  jal         func_1D9AE0
label_1dc9c4:
    if (ctx->pc == 0x1DC9C4u) {
        ctx->pc = 0x1DC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9C0u;
        // 0x1dc9c4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9C8u;
        goto label_1dc9c8;
    }
    ctx->pc = 0x1DC9C0u;
    SET_GPR_U32(ctx, 31, 0x1DC9C8u);
    ctx->pc = 0x1DC9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9C0u;
    // 0x1dc9c4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1DC9C0u, 0x1DC9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9C8u;
label_1dc9c8:
    // 0x1dc9c8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1dc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1dc9cc:
    // 0x1dc9cc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1dc9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1dc9d0:
    // 0x1dc9d0: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_1dc9d4:
    if (ctx->pc == 0x1DC9D4u) {
        ctx->pc = 0x1DC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9D0u;
        // 0x1dc9d4: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9D8u;
        goto label_1dc9d8;
    }
    ctx->pc = 0x1DC9D0u;
    {
        const bool branch_taken_0x1dc9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9D0u;
        // 0x1dc9d4: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9d0) {
            ctx->pc = 0x1DCB68u;
            goto label_1dcb68;
        }
    }
    ctx->pc = 0x1DC9D8u;
label_1dc9d8:
    // 0x1dc9d8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1dc9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1dc9dc:
    // 0x1dc9dc: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x1dc9dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23568)));
label_1dc9e0:
    // 0x1dc9e0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1dc9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_1dc9e4:
    // 0x1dc9e4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1dc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1dc9e8:
    // 0x1dc9e8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1dc9e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1dc9ec:
    // 0x1dc9ec: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1dc9f0:
    if (ctx->pc == 0x1DC9F0u) {
        ctx->pc = 0x1DC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9ECu;
        // 0x1dc9f0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9F4u;
        goto label_1dc9f4;
    }
    ctx->pc = 0x1DC9ECu;
    {
        const bool branch_taken_0x1dc9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9ECu;
        // 0x1dc9f0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9ec) {
            ctx->pc = 0x1DCA28u;
            goto label_1dca28;
        }
    }
    ctx->pc = 0x1DC9F4u;
label_1dc9f4:
    // 0x1dc9f4: 0xc076654  jal         func_1D9950
label_1dc9f8:
    if (ctx->pc == 0x1DC9F8u) {
        ctx->pc = 0x1DC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9F4u;
        // 0x1dc9f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9FCu;
        goto label_1dc9fc;
    }
    ctx->pc = 0x1DC9F4u;
    SET_GPR_U32(ctx, 31, 0x1DC9FCu);
    ctx->pc = 0x1DC9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9F4u;
    // 0x1dc9f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x1DC9F4u, 0x1DC9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9FCu;
label_1dc9fc:
    // 0x1dc9fc: 0xc0765d8  jal         func_1D9760
label_1dca00:
    if (ctx->pc == 0x1DCA00u) {
        ctx->pc = 0x1DCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9FCu;
        // 0x1dca00: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA04u;
        goto label_1dca04;
    }
    ctx->pc = 0x1DC9FCu;
    SET_GPR_U32(ctx, 31, 0x1DCA04u);
    ctx->pc = 0x1DCA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9FCu;
    // 0x1dca00: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1DC9FCu, 0x1DCA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA04u;
label_1dca04:
    // 0x1dca04: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1dca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1dca08:
    // 0x1dca08: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dca0c:
    // 0x1dca0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dca0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dca10:
    // 0x1dca10: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1dca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dca14:
    // 0x1dca14: 0xc0766c8  jal         func_1D9B20
label_1dca18:
    if (ctx->pc == 0x1DCA18u) {
        ctx->pc = 0x1DCA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA14u;
        // 0x1dca18: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA1Cu;
        goto label_1dca1c;
    }
    ctx->pc = 0x1DCA14u;
    SET_GPR_U32(ctx, 31, 0x1DCA1Cu);
    ctx->pc = 0x1DCA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA14u;
    // 0x1dca18: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x1DCA14u, 0x1DCA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA1Cu;
label_1dca1c:
    // 0x1dca1c: 0x10000052  b           . + 4 + (0x52 << 2)
label_1dca20:
    if (ctx->pc == 0x1DCA20u) {
        ctx->pc = 0x1DCA24u;
        goto label_1dca24;
    }
    ctx->pc = 0x1DCA1Cu;
    {
        const bool branch_taken_0x1dca1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca1c) {
            ctx->pc = 0x1DCB68u;
            goto label_1dcb68;
        }
    }
    ctx->pc = 0x1DCA24u;
label_1dca24:
    // 0x1dca24: 0x0  nop
    ctx->pc = 0x1dca24u;
    // NOP
label_1dca28:
    // 0x1dca28: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dca2c:
    // 0x1dca2c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1dca30:
    if (ctx->pc == 0x1DCA30u) {
        ctx->pc = 0x1DCA34u;
        goto label_1dca34;
    }
    ctx->pc = 0x1DCA2Cu;
    {
        const bool branch_taken_0x1dca2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dca2c) {
            ctx->pc = 0x1DCA90u;
            goto label_1dca90;
        }
    }
    ctx->pc = 0x1DCA34u;
label_1dca34:
    // 0x1dca34: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1dca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dca38:
    // 0x1dca38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dca38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dca3c:
    // 0x1dca3c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1dca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1dca40:
    // 0x1dca40: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x1dca40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1dca44:
    // 0x1dca44: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x1dca44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1dca48:
    // 0x1dca48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dca48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dca4c:
    // 0x1dca4c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1dca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1dca50:
    // 0x1dca50: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1dca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dca54:
    // 0x1dca54: 0xc076654  jal         func_1D9950
label_1dca58:
    if (ctx->pc == 0x1DCA58u) {
        ctx->pc = 0x1DCA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA54u;
        // 0x1dca58: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA5Cu;
        goto label_1dca5c;
    }
    ctx->pc = 0x1DCA54u;
    SET_GPR_U32(ctx, 31, 0x1DCA5Cu);
    ctx->pc = 0x1DCA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA54u;
    // 0x1dca58: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x1DCA54u, 0x1DCA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA5Cu;
label_1dca5c:
    // 0x1dca5c: 0xc0765d8  jal         func_1D9760
label_1dca60:
    if (ctx->pc == 0x1DCA60u) {
        ctx->pc = 0x1DCA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA5Cu;
        // 0x1dca60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA64u;
        goto label_1dca64;
    }
    ctx->pc = 0x1DCA5Cu;
    SET_GPR_U32(ctx, 31, 0x1DCA64u);
    ctx->pc = 0x1DCA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA5Cu;
    // 0x1dca60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1DCA5Cu, 0x1DCA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA64u;
label_1dca64:
    // 0x1dca64: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1dca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1dca68:
    // 0x1dca68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dca6c:
    // 0x1dca6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dca6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dca70:
    // 0x1dca70: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1dca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dca74:
    // 0x1dca74: 0xc0766c8  jal         func_1D9B20
label_1dca78:
    if (ctx->pc == 0x1DCA78u) {
        ctx->pc = 0x1DCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA74u;
        // 0x1dca78: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA7Cu;
        goto label_1dca7c;
    }
    ctx->pc = 0x1DCA74u;
    SET_GPR_U32(ctx, 31, 0x1DCA7Cu);
    ctx->pc = 0x1DCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA74u;
    // 0x1dca78: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x1DCA74u, 0x1DCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA7Cu;
label_1dca7c:
    // 0x1dca7c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1dca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dca80:
    // 0x1dca80: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1dca80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1dca84:
    // 0x1dca84: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1dca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dca88:
    // 0x1dca88: 0x10000037  b           . + 4 + (0x37 << 2)
label_1dca8c:
    if (ctx->pc == 0x1DCA8Cu) {
        ctx->pc = 0x1DCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA88u;
        // 0x1dca8c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA90u;
        goto label_1dca90;
    }
    ctx->pc = 0x1DCA88u;
    {
        const bool branch_taken_0x1dca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA88u;
        // 0x1dca8c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca88) {
            ctx->pc = 0x1DCB68u;
            goto label_1dcb68;
        }
    }
    ctx->pc = 0x1DCA90u;
label_1dca90:
    // 0x1dca90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dca94:
    // 0x1dca94: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1dca98:
    if (ctx->pc == 0x1DCA98u) {
        ctx->pc = 0x1DCA9Cu;
        goto label_1dca9c;
    }
    ctx->pc = 0x1DCA94u;
    {
        const bool branch_taken_0x1dca94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dca94) {
            ctx->pc = 0x1DCAF8u;
            goto label_1dcaf8;
        }
    }
    ctx->pc = 0x1DCA9Cu;
label_1dca9c:
    // 0x1dca9c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1dca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcaa0:
    // 0x1dcaa0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dcaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dcaa4:
    // 0x1dcaa4: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1dcaa8:
    // 0x1dcaa8: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x1dcaa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1dcaac:
    // 0x1dcaac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dcaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcab0:
    // 0x1dcab0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1dcab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1dcab4:
    // 0x1dcab4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1dcab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcab8:
    // 0x1dcab8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1dcab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1dcabc:
    // 0x1dcabc: 0xc076654  jal         func_1D9950
label_1dcac0:
    if (ctx->pc == 0x1DCAC0u) {
        ctx->pc = 0x1DCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCABCu;
        // 0x1dcac0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCAC4u;
        goto label_1dcac4;
    }
    ctx->pc = 0x1DCABCu;
    SET_GPR_U32(ctx, 31, 0x1DCAC4u);
    ctx->pc = 0x1DCAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCABCu;
    // 0x1dcac0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x1DCABCu, 0x1DCAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAC4u;
label_1dcac4:
    // 0x1dcac4: 0xc0765d8  jal         func_1D9760
label_1dcac8:
    if (ctx->pc == 0x1DCAC8u) {
        ctx->pc = 0x1DCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAC4u;
        // 0x1dcac8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCACCu;
        goto label_1dcacc;
    }
    ctx->pc = 0x1DCAC4u;
    SET_GPR_U32(ctx, 31, 0x1DCACCu);
    ctx->pc = 0x1DCAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCAC4u;
    // 0x1dcac8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1DCAC4u, 0x1DCACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCACCu;
label_1dcacc:
    // 0x1dcacc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1dcaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1dcad0:
    // 0x1dcad0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dcad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dcad4:
    // 0x1dcad4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dcad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcad8:
    // 0x1dcad8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1dcad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dcadc:
    // 0x1dcadc: 0xc0766c8  jal         func_1D9B20
label_1dcae0:
    if (ctx->pc == 0x1DCAE0u) {
        ctx->pc = 0x1DCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCADCu;
        // 0x1dcae0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCAE4u;
        goto label_1dcae4;
    }
    ctx->pc = 0x1DCADCu;
    SET_GPR_U32(ctx, 31, 0x1DCAE4u);
    ctx->pc = 0x1DCAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCADCu;
    // 0x1dcae0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x1DCADCu, 0x1DCAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAE4u;
label_1dcae4:
    // 0x1dcae4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1dcae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcae8:
    // 0x1dcae8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1dcae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1dcaec:
    // 0x1dcaec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1dcaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcaf0:
    // 0x1dcaf0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1dcaf4:
    if (ctx->pc == 0x1DCAF4u) {
        ctx->pc = 0x1DCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAF0u;
        // 0x1dcaf4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCAF8u;
        goto label_1dcaf8;
    }
    ctx->pc = 0x1DCAF0u;
    {
        const bool branch_taken_0x1dcaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAF0u;
        // 0x1dcaf4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcaf0) {
            ctx->pc = 0x1DCB68u;
            goto label_1dcb68;
        }
    }
    ctx->pc = 0x1DCAF8u;
label_1dcaf8:
    // 0x1dcaf8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1dcaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dcafc:
    // 0x1dcafc: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_1dcb00:
    if (ctx->pc == 0x1DCB00u) {
        ctx->pc = 0x1DCB04u;
        goto label_1dcb04;
    }
    ctx->pc = 0x1DCAFCu;
    {
        const bool branch_taken_0x1dcafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcafc) {
            ctx->pc = 0x1DCB68u;
            goto label_1dcb68;
        }
    }
    ctx->pc = 0x1DCB04u;
label_1dcb04:
    // 0x1dcb04: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1dcb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_1dcb08:
    // 0x1dcb08: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x1dcb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1dcb0c:
    // 0x1dcb0c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1dcb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcb10:
    // 0x1dcb10: 0x27b10074  addiu       $s1, $sp, 0x74
    ctx->pc = 0x1dcb10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1dcb14:
    // 0x1dcb14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dcb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dcb18:
    // 0x1dcb18: 0x27b20088  addiu       $s2, $sp, 0x88
    ctx->pc = 0x1dcb18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1dcb1c:
    // 0x1dcb1c: 0x27b30078  addiu       $s3, $sp, 0x78
    ctx->pc = 0x1dcb1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1dcb20:
    // 0x1dcb20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dcb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb24:
    // 0x1dcb24: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1dcb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1dcb28:
    // 0x1dcb28: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1dcb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcb2c:
    // 0x1dcb2c: 0xc076654  jal         func_1D9950
label_1dcb30:
    if (ctx->pc == 0x1DCB30u) {
        ctx->pc = 0x1DCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB2Cu;
        // 0x1dcb30: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB34u;
        goto label_1dcb34;
    }
    ctx->pc = 0x1DCB2Cu;
    SET_GPR_U32(ctx, 31, 0x1DCB34u);
    ctx->pc = 0x1DCB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB2Cu;
    // 0x1dcb30: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x1DCB2Cu, 0x1DCB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB34u;
label_1dcb34:
    // 0x1dcb34: 0xc0765d8  jal         func_1D9760
label_1dcb38:
    if (ctx->pc == 0x1DCB38u) {
        ctx->pc = 0x1DCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB34u;
        // 0x1dcb38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB3Cu;
        goto label_1dcb3c;
    }
    ctx->pc = 0x1DCB34u;
    SET_GPR_U32(ctx, 31, 0x1DCB3Cu);
    ctx->pc = 0x1DCB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB34u;
    // 0x1dcb38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1DCB34u, 0x1DCB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB3Cu;
label_1dcb3c:
    // 0x1dcb3c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1dcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1dcb40:
    // 0x1dcb40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1dcb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1dcb44:
    // 0x1dcb44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dcb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb48:
    // 0x1dcb48: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1dcb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dcb4c:
    // 0x1dcb4c: 0xc0766c8  jal         func_1D9B20
label_1dcb50:
    if (ctx->pc == 0x1DCB50u) {
        ctx->pc = 0x1DCB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB4Cu;
        // 0x1dcb50: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB54u;
        goto label_1dcb54;
    }
    ctx->pc = 0x1DCB4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCB54u);
    ctx->pc = 0x1DCB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB4Cu;
    // 0x1dcb50: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x1DCB4Cu, 0x1DCB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB54u;
label_1dcb54:
    // 0x1dcb54: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1dcb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcb58:
    // 0x1dcb58: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1dcb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1dcb5c:
    // 0x1dcb5c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1dcb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcb60:
    // 0x1dcb60: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1dcb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1dcb64:
    // 0x1dcb64: 0x0  nop
    ctx->pc = 0x1dcb64u;
    // NOP
label_1dcb68:
    // 0x1dcb68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dcb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dcb6c:
    // 0x1dcb6c: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x1dcb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_1dcb70:
    // 0x1dcb70: 0xc07679c  jal         func_1D9E70
label_1dcb74:
    if (ctx->pc == 0x1DCB74u) {
        ctx->pc = 0x1DCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB70u;
        // 0x1dcb74: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB78u;
        goto label_1dcb78;
    }
    ctx->pc = 0x1DCB70u;
    SET_GPR_U32(ctx, 31, 0x1DCB78u);
    ctx->pc = 0x1DCB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB70u;
    // 0x1dcb74: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1DCB70u, 0x1DCB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB78u;
label_1dcb78:
    // 0x1dcb78: 0xc076ed8  jal         func_1DBB60
label_1dcb7c:
    if (ctx->pc == 0x1DCB7Cu) {
        ctx->pc = 0x1DCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB78u;
        // 0x1dcb7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB80u;
        goto label_1dcb80;
    }
    ctx->pc = 0x1DCB78u;
    SET_GPR_U32(ctx, 31, 0x1DCB80u);
    ctx->pc = 0x1DCB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB78u;
    // 0x1dcb7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB60u, 0x1DCB78u, 0x1DCB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB80u;
label_1dcb80:
    // 0x1dcb80: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1dcb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1dcb84:
    // 0x1dcb84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dcb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb88:
    // 0x1dcb88: 0xc0766a8  jal         func_1D9AA0
label_1dcb8c:
    if (ctx->pc == 0x1DCB8Cu) {
        ctx->pc = 0x1DCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB88u;
        // 0x1dcb8c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB90u;
        goto label_1dcb90;
    }
    ctx->pc = 0x1DCB88u;
    SET_GPR_U32(ctx, 31, 0x1DCB90u);
    ctx->pc = 0x1DCB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB88u;
    // 0x1dcb8c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1DCB88u, 0x1DCB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB90u;
label_1dcb90:
    // 0x1dcb90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcb94:
    // 0x1dcb94: 0x0  nop
    ctx->pc = 0x1dcb94u;
    // NOP
label_1dcb98:
    // 0x1dcb98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1dcb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1dcb9c:
    // 0x1dcb9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dcb9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dcba0:
    // 0x1dcba0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dcba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dcba4:
    // 0x1dcba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dcba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dcba8:
    // 0x1dcba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dcba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dcbac:
    // 0x1dcbac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcbb0:
    // 0x1dcbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcbb4:
    // 0x1dcbb4: 0x3e00008  jr          $ra
label_1dcbb8:
    if (ctx->pc == 0x1DCBB8u) {
        ctx->pc = 0x1DCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBB4u;
        // 0x1dcbb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCBBCu;
        goto label_fallthrough_0x1dcbb4;
    }
    ctx->pc = 0x1DCBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBB4u;
        // 0x1dcbb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dcbb4:
    ctx->pc = 0x1DCBBCu;
}
