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

// Function: sub_001F59A8
// Address: 0x1f59a8 - 0x1f5bb4
void sub_001F59A8_0x1f59a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F59A8_0x1f59a8");
#endif

    switch (ctx->pc) {
        case 0x1f59a8u: goto label_1f59a8;
        case 0x1f59acu: goto label_1f59ac;
        case 0x1f59b0u: goto label_1f59b0;
        case 0x1f59b4u: goto label_1f59b4;
        case 0x1f59b8u: goto label_1f59b8;
        case 0x1f59bcu: goto label_1f59bc;
        case 0x1f59c0u: goto label_1f59c0;
        case 0x1f59c4u: goto label_1f59c4;
        case 0x1f59c8u: goto label_1f59c8;
        case 0x1f59ccu: goto label_1f59cc;
        case 0x1f59d0u: goto label_1f59d0;
        case 0x1f59d4u: goto label_1f59d4;
        case 0x1f59d8u: goto label_1f59d8;
        case 0x1f59dcu: goto label_1f59dc;
        case 0x1f59e0u: goto label_1f59e0;
        case 0x1f59e4u: goto label_1f59e4;
        case 0x1f59e8u: goto label_1f59e8;
        case 0x1f59ecu: goto label_1f59ec;
        case 0x1f59f0u: goto label_1f59f0;
        case 0x1f59f4u: goto label_1f59f4;
        case 0x1f59f8u: goto label_1f59f8;
        case 0x1f59fcu: goto label_1f59fc;
        case 0x1f5a00u: goto label_1f5a00;
        case 0x1f5a04u: goto label_1f5a04;
        case 0x1f5a08u: goto label_1f5a08;
        case 0x1f5a0cu: goto label_1f5a0c;
        case 0x1f5a10u: goto label_1f5a10;
        case 0x1f5a14u: goto label_1f5a14;
        case 0x1f5a18u: goto label_1f5a18;
        case 0x1f5a1cu: goto label_1f5a1c;
        case 0x1f5a20u: goto label_1f5a20;
        case 0x1f5a24u: goto label_1f5a24;
        case 0x1f5a28u: goto label_1f5a28;
        case 0x1f5a2cu: goto label_1f5a2c;
        case 0x1f5a30u: goto label_1f5a30;
        case 0x1f5a34u: goto label_1f5a34;
        case 0x1f5a38u: goto label_1f5a38;
        case 0x1f5a3cu: goto label_1f5a3c;
        case 0x1f5a40u: goto label_1f5a40;
        case 0x1f5a44u: goto label_1f5a44;
        case 0x1f5a48u: goto label_1f5a48;
        case 0x1f5a4cu: goto label_1f5a4c;
        case 0x1f5a50u: goto label_1f5a50;
        case 0x1f5a54u: goto label_1f5a54;
        case 0x1f5a58u: goto label_1f5a58;
        case 0x1f5a5cu: goto label_1f5a5c;
        case 0x1f5a60u: goto label_1f5a60;
        case 0x1f5a64u: goto label_1f5a64;
        case 0x1f5a68u: goto label_1f5a68;
        case 0x1f5a6cu: goto label_1f5a6c;
        case 0x1f5a70u: goto label_1f5a70;
        case 0x1f5a74u: goto label_1f5a74;
        case 0x1f5a78u: goto label_1f5a78;
        case 0x1f5a7cu: goto label_1f5a7c;
        case 0x1f5a80u: goto label_1f5a80;
        case 0x1f5a84u: goto label_1f5a84;
        case 0x1f5a88u: goto label_1f5a88;
        case 0x1f5a8cu: goto label_1f5a8c;
        case 0x1f5a90u: goto label_1f5a90;
        case 0x1f5a94u: goto label_1f5a94;
        case 0x1f5a98u: goto label_1f5a98;
        case 0x1f5a9cu: goto label_1f5a9c;
        case 0x1f5aa0u: goto label_1f5aa0;
        case 0x1f5aa4u: goto label_1f5aa4;
        case 0x1f5aa8u: goto label_1f5aa8;
        case 0x1f5aacu: goto label_1f5aac;
        case 0x1f5ab0u: goto label_1f5ab0;
        case 0x1f5ab4u: goto label_1f5ab4;
        case 0x1f5ab8u: goto label_1f5ab8;
        case 0x1f5abcu: goto label_1f5abc;
        case 0x1f5ac0u: goto label_1f5ac0;
        case 0x1f5ac4u: goto label_1f5ac4;
        case 0x1f5ac8u: goto label_1f5ac8;
        case 0x1f5accu: goto label_1f5acc;
        case 0x1f5ad0u: goto label_1f5ad0;
        case 0x1f5ad4u: goto label_1f5ad4;
        case 0x1f5ad8u: goto label_1f5ad8;
        case 0x1f5adcu: goto label_1f5adc;
        case 0x1f5ae0u: goto label_1f5ae0;
        case 0x1f5ae4u: goto label_1f5ae4;
        case 0x1f5ae8u: goto label_1f5ae8;
        case 0x1f5aecu: goto label_1f5aec;
        case 0x1f5af0u: goto label_1f5af0;
        case 0x1f5af4u: goto label_1f5af4;
        case 0x1f5af8u: goto label_1f5af8;
        case 0x1f5afcu: goto label_1f5afc;
        case 0x1f5b00u: goto label_1f5b00;
        case 0x1f5b04u: goto label_1f5b04;
        case 0x1f5b08u: goto label_1f5b08;
        case 0x1f5b0cu: goto label_1f5b0c;
        case 0x1f5b10u: goto label_1f5b10;
        case 0x1f5b14u: goto label_1f5b14;
        case 0x1f5b18u: goto label_1f5b18;
        case 0x1f5b1cu: goto label_1f5b1c;
        case 0x1f5b20u: goto label_1f5b20;
        case 0x1f5b24u: goto label_1f5b24;
        case 0x1f5b28u: goto label_1f5b28;
        case 0x1f5b2cu: goto label_1f5b2c;
        case 0x1f5b30u: goto label_1f5b30;
        case 0x1f5b34u: goto label_1f5b34;
        case 0x1f5b38u: goto label_1f5b38;
        case 0x1f5b3cu: goto label_1f5b3c;
        case 0x1f5b40u: goto label_1f5b40;
        case 0x1f5b44u: goto label_1f5b44;
        case 0x1f5b48u: goto label_1f5b48;
        case 0x1f5b4cu: goto label_1f5b4c;
        case 0x1f5b50u: goto label_1f5b50;
        case 0x1f5b54u: goto label_1f5b54;
        case 0x1f5b58u: goto label_1f5b58;
        case 0x1f5b5cu: goto label_1f5b5c;
        case 0x1f5b60u: goto label_1f5b60;
        case 0x1f5b64u: goto label_1f5b64;
        case 0x1f5b68u: goto label_1f5b68;
        case 0x1f5b6cu: goto label_1f5b6c;
        case 0x1f5b70u: goto label_1f5b70;
        case 0x1f5b74u: goto label_1f5b74;
        case 0x1f5b78u: goto label_1f5b78;
        case 0x1f5b7cu: goto label_1f5b7c;
        case 0x1f5b80u: goto label_1f5b80;
        case 0x1f5b84u: goto label_1f5b84;
        case 0x1f5b88u: goto label_1f5b88;
        case 0x1f5b8cu: goto label_1f5b8c;
        case 0x1f5b90u: goto label_1f5b90;
        case 0x1f5b94u: goto label_1f5b94;
        case 0x1f5b98u: goto label_1f5b98;
        case 0x1f5b9cu: goto label_1f5b9c;
        case 0x1f5ba0u: goto label_1f5ba0;
        case 0x1f5ba4u: goto label_1f5ba4;
        case 0x1f5ba8u: goto label_1f5ba8;
        case 0x1f5bacu: goto label_1f5bac;
        case 0x1f5bb0u: goto label_1f5bb0;
        default: break;
    }

    ctx->pc = 0x1f59a8u;

label_1f59a8:
    // 0x1f59a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f59a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f59ac:
    // 0x1f59ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f59acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1f59b0:
    // 0x1f59b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f59b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f59b4:
    // 0x1f59b4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f59b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1f59b8:
    // 0x1f59b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f59b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f59bc:
    // 0x1f59bc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f59bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1f59c0:
    // 0x1f59c0: 0x26530160  addiu       $s3, $s2, 0x160
    ctx->pc = 0x1f59c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
label_1f59c4:
    // 0x1f59c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f59c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1f59c8:
    // 0x1f59c8: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1f59c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f59cc:
    // 0x1f59cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f59ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1f59d0:
    // 0x1f59d0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f59d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1f59d4:
    // 0x1f59d4: 0xae600494  sw          $zero, 0x494($s3)
    ctx->pc = 0x1f59d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 0));
label_1f59d8:
    // 0x1f59d8: 0xae600498  sw          $zero, 0x498($s3)
    ctx->pc = 0x1f59d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1176), GPR_U32(ctx, 0));
label_1f59dc:
    // 0x1f59dc: 0xae600308  sw          $zero, 0x308($s3)
    ctx->pc = 0x1f59dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 776), GPR_U32(ctx, 0));
label_1f59e0:
    // 0x1f59e0: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1f59e4:
    if (ctx->pc == 0x1F59E4u) {
        ctx->pc = 0x1F59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59E0u;
        // 0x1f59e4: 0xae60030c  sw          $zero, 0x30C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F59E8u;
        goto label_1f59e8;
    }
    ctx->pc = 0x1F59E0u;
    {
        const bool branch_taken_0x1f59e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59E0u;
        // 0x1f59e4: 0xae60030c  sw          $zero, 0x30C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59e0) {
            ctx->pc = 0x1F5B58u;
            goto label_1f5b58;
        }
    }
    ctx->pc = 0x1F59E8u;
label_1f59e8:
    // 0x1f59e8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1f59e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1f59ec:
    // 0x1f59ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f59ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f59f0:
    // 0x1f59f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f59f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f59f4:
    // 0x1f59f4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f59f8:
    // 0x1f59f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1f59f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1f59fc:
    // 0x1f59fc: 0x40f809  jalr        $v0
label_1f5a00:
    if (ctx->pc == 0x1F5A00u) {
        ctx->pc = 0x1F5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59FCu;
        // 0x1f5a00: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A04u;
        goto label_1f5a04;
    }
    ctx->pc = 0x1F59FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5A04u);
        ctx->pc = 0x1F5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59FCu;
        // 0x1f5a00: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F59FCu, 0x1F5A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5A04u;
label_1f5a04:
    // 0x1f5a04: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f5a08:
    // 0x1f5a08: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
label_1f5a0c:
    if (ctx->pc == 0x1F5A0Cu) {
        ctx->pc = 0x1F5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A08u;
        // 0x1f5a0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A10u;
        goto label_1f5a10;
    }
    ctx->pc = 0x1F5A08u;
    {
        const bool branch_taken_0x1f5a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A08u;
        // 0x1f5a0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a08) {
            ctx->pc = 0x1F5AA8u;
            goto label_1f5aa8;
        }
    }
    ctx->pc = 0x1F5A10u;
label_1f5a10:
    // 0x1f5a10: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1f5a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_1f5a14:
    // 0x1f5a14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f5a18:
    if (ctx->pc == 0x1F5A18u) {
        ctx->pc = 0x1F5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A14u;
        // 0x1f5a18: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A1Cu;
        goto label_1f5a1c;
    }
    ctx->pc = 0x1F5A14u;
    {
        const bool branch_taken_0x1f5a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A14u;
        // 0x1f5a18: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a14) {
            ctx->pc = 0x1F5A38u;
            goto label_1f5a38;
        }
    }
    ctx->pc = 0x1F5A1Cu;
label_1f5a1c:
    // 0x1f5a1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f5a20:
    // 0x1f5a20: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
label_1f5a24:
    if (ctx->pc == 0x1F5A24u) {
        ctx->pc = 0x1F5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A20u;
        // 0x1f5a24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A28u;
        goto label_1f5a28;
    }
    ctx->pc = 0x1F5A20u;
    {
        const bool branch_taken_0x1f5a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A20u;
        // 0x1f5a24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a20) {
            ctx->pc = 0x1F5AD0u;
            goto label_1f5ad0;
        }
    }
    ctx->pc = 0x1F5A28u;
label_1f5a28:
    // 0x1f5a28: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
label_1f5a2c:
    if (ctx->pc == 0x1F5A2Cu) {
        ctx->pc = 0x1F5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A28u;
        // 0x1f5a2c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A30u;
        goto label_1f5a30;
    }
    ctx->pc = 0x1F5A28u;
    {
        const bool branch_taken_0x1f5a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A28u;
        // 0x1f5a2c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a28) {
            ctx->pc = 0x1F5AC0u;
            goto label_1f5ac0;
        }
    }
    ctx->pc = 0x1F5A30u;
label_1f5a30:
    // 0x1f5a30: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1f5a34:
    if (ctx->pc == 0x1F5A34u) {
        ctx->pc = 0x1F5A38u;
        goto label_1f5a38;
    }
    ctx->pc = 0x1F5A30u;
    {
        const bool branch_taken_0x1f5a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a30) {
            ctx->pc = 0x1F5AE0u;
            goto label_1f5ae0;
        }
    }
    ctx->pc = 0x1F5A38u;
label_1f5a38:
    // 0x1f5a38: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_1f5a3c:
    if (ctx->pc == 0x1F5A3Cu) {
        ctx->pc = 0x1F5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A38u;
        // 0x1f5a3c: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A40u;
        goto label_1f5a40;
    }
    ctx->pc = 0x1F5A38u;
    {
        const bool branch_taken_0x1f5a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A38u;
        // 0x1f5a3c: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a38) {
            ctx->pc = 0x1F5A70u;
            goto label_1f5a70;
        }
    }
    ctx->pc = 0x1F5A40u;
label_1f5a40:
    // 0x1f5a40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f5a44:
    if (ctx->pc == 0x1F5A44u) {
        ctx->pc = 0x1F5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A40u;
        // 0x1f5a44: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A48u;
        goto label_1f5a48;
    }
    ctx->pc = 0x1F5A40u;
    {
        const bool branch_taken_0x1f5a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A40u;
        // 0x1f5a44: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a40) {
            ctx->pc = 0x1F5A60u;
            goto label_1f5a60;
        }
    }
    ctx->pc = 0x1F5A48u;
label_1f5a48:
    // 0x1f5a48: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f5a4c:
    // 0x1f5a4c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_1f5a50:
    if (ctx->pc == 0x1F5A50u) {
        ctx->pc = 0x1F5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A4Cu;
        // 0x1f5a50: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A54u;
        goto label_1f5a54;
    }
    ctx->pc = 0x1F5A4Cu;
    {
        const bool branch_taken_0x1f5a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A4Cu;
        // 0x1f5a50: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a4c) {
            ctx->pc = 0x1F5A98u;
            goto label_1f5a98;
        }
    }
    ctx->pc = 0x1F5A54u;
label_1f5a54:
    // 0x1f5a54: 0x10000022  b           . + 4 + (0x22 << 2)
label_1f5a58:
    if (ctx->pc == 0x1F5A58u) {
        ctx->pc = 0x1F5A5Cu;
        goto label_1f5a5c;
    }
    ctx->pc = 0x1F5A54u;
    {
        const bool branch_taken_0x1f5a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a54) {
            ctx->pc = 0x1F5AE0u;
            goto label_1f5ae0;
        }
    }
    ctx->pc = 0x1F5A5Cu;
label_1f5a5c:
    // 0x1f5a5c: 0x0  nop
    ctx->pc = 0x1f5a5cu;
    // NOP
label_1f5a60:
    // 0x1f5a60: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_1f5a64:
    if (ctx->pc == 0x1F5A64u) {
        ctx->pc = 0x1F5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A60u;
        // 0x1f5a64: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A68u;
        goto label_1f5a68;
    }
    ctx->pc = 0x1F5A60u;
    {
        const bool branch_taken_0x1f5a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A60u;
        // 0x1f5a64: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a60) {
            ctx->pc = 0x1F5A88u;
            goto label_1f5a88;
        }
    }
    ctx->pc = 0x1F5A68u;
label_1f5a68:
    // 0x1f5a68: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1f5a6c:
    if (ctx->pc == 0x1F5A6Cu) {
        ctx->pc = 0x1F5A70u;
        goto label_1f5a70;
    }
    ctx->pc = 0x1F5A68u;
    {
        const bool branch_taken_0x1f5a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a68) {
            ctx->pc = 0x1F5AE0u;
            goto label_1f5ae0;
        }
    }
    ctx->pc = 0x1F5A70u;
label_1f5a70:
    // 0x1f5a70: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f5a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5a74:
    // 0x1f5a74: 0xc07d74e  jal         func_1F5D38
label_1f5a78:
    if (ctx->pc == 0x1F5A78u) {
        ctx->pc = 0x1F5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A74u;
        // 0x1f5a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A7Cu;
        goto label_1f5a7c;
    }
    ctx->pc = 0x1F5A74u;
    SET_GPR_U32(ctx, 31, 0x1F5A7Cu);
    ctx->pc = 0x1F5A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A74u;
    // 0x1f5a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D38u, 0x1F5A74u, 0x1F5A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A7Cu;
label_1f5a7c:
    // 0x1f5a7c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1f5a80:
    if (ctx->pc == 0x1F5A80u) {
        ctx->pc = 0x1F5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A7Cu;
        // 0x1f5a80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A84u;
        goto label_1f5a84;
    }
    ctx->pc = 0x1F5A7Cu;
    {
        const bool branch_taken_0x1f5a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A7Cu;
        // 0x1f5a80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a7c) {
            ctx->pc = 0x1F5AE0u;
            goto label_1f5ae0;
        }
    }
    ctx->pc = 0x1F5A84u;
label_1f5a84:
    // 0x1f5a84: 0x0  nop
    ctx->pc = 0x1f5a84u;
    // NOP
label_1f5a88:
    // 0x1f5a88: 0xc07d944  jal         func_1F6510
label_1f5a8c:
    if (ctx->pc == 0x1F5A8Cu) {
        ctx->pc = 0x1F5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A88u;
        // 0x1f5a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A90u;
        goto label_1f5a90;
    }
    ctx->pc = 0x1F5A88u;
    SET_GPR_U32(ctx, 31, 0x1F5A90u);
    ctx->pc = 0x1F5A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A88u;
    // 0x1f5a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6510u, 0x1F5A88u, 0x1F5A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A90u;
label_1f5a90:
    // 0x1f5a90: 0x10000013  b           . + 4 + (0x13 << 2)
label_1f5a94:
    if (ctx->pc == 0x1F5A94u) {
        ctx->pc = 0x1F5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A90u;
        // 0x1f5a94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A98u;
        goto label_1f5a98;
    }
    ctx->pc = 0x1F5A90u;
    {
        const bool branch_taken_0x1f5a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A90u;
        // 0x1f5a94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a90) {
            ctx->pc = 0x1F5AE0u;
            goto label_1f5ae0;
        }
    }
    ctx->pc = 0x1F5A98u;
label_1f5a98:
    // 0x1f5a98: 0xc07d98c  jal         func_1F6630
label_1f5a9c:
    if (ctx->pc == 0x1F5A9Cu) {
        ctx->pc = 0x1F5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A98u;
        // 0x1f5a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AA0u;
        goto label_1f5aa0;
    }
    ctx->pc = 0x1F5A98u;
    SET_GPR_U32(ctx, 31, 0x1F5AA0u);
    ctx->pc = 0x1F5A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A98u;
    // 0x1f5a9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6630u, 0x1F5A98u, 0x1F5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5AA0u;
label_1f5aa0:
    // 0x1f5aa0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f5aa4:
    if (ctx->pc == 0x1F5AA4u) {
        ctx->pc = 0x1F5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AA0u;
        // 0x1f5aa4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AA8u;
        goto label_1f5aa8;
    }
    ctx->pc = 0x1F5AA0u;
    {
        const bool branch_taken_0x1f5aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AA0u;
        // 0x1f5aa4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5aa0) {
            ctx->pc = 0x1F5AE0u;
            goto label_1f5ae0;
        }
    }
    ctx->pc = 0x1F5AA8u;
label_1f5aa8:
    // 0x1f5aa8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f5aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5aac:
    // 0x1f5aac: 0xc07da80  jal         func_1F6A00
label_1f5ab0:
    if (ctx->pc == 0x1F5AB0u) {
        ctx->pc = 0x1F5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AACu;
        // 0x1f5ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AB4u;
        goto label_1f5ab4;
    }
    ctx->pc = 0x1F5AACu;
    SET_GPR_U32(ctx, 31, 0x1F5AB4u);
    ctx->pc = 0x1F5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AACu;
    // 0x1f5ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A00u, 0x1F5AACu, 0x1F5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5AB4u;
label_1f5ab4:
    // 0x1f5ab4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1f5ab8:
    if (ctx->pc == 0x1F5AB8u) {
        ctx->pc = 0x1F5AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AB4u;
        // 0x1f5ab8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5ABCu;
        goto label_1f5abc;
    }
    ctx->pc = 0x1F5AB4u;
    {
        const bool branch_taken_0x1f5ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AB4u;
        // 0x1f5ab8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ab4) {
            ctx->pc = 0x1F5AE0u;
            goto label_1f5ae0;
        }
    }
    ctx->pc = 0x1F5ABCu;
label_1f5abc:
    // 0x1f5abc: 0x0  nop
    ctx->pc = 0x1f5abcu;
    // NOP
label_1f5ac0:
    // 0x1f5ac0: 0xc07e678  jal         func_1F99E0
label_1f5ac4:
    if (ctx->pc == 0x1F5AC4u) {
        ctx->pc = 0x1F5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AC0u;
        // 0x1f5ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AC8u;
        goto label_1f5ac8;
    }
    ctx->pc = 0x1F5AC0u;
    SET_GPR_U32(ctx, 31, 0x1F5AC8u);
    ctx->pc = 0x1F5AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AC0u;
    // 0x1f5ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99E0u, 0x1F5AC0u, 0x1F5AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5AC8u;
label_1f5ac8:
    // 0x1f5ac8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f5acc:
    if (ctx->pc == 0x1F5ACCu) {
        ctx->pc = 0x1F5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AC8u;
        // 0x1f5acc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AD0u;
        goto label_1f5ad0;
    }
    ctx->pc = 0x1F5AC8u;
    {
        const bool branch_taken_0x1f5ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AC8u;
        // 0x1f5acc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ac8) {
            ctx->pc = 0x1F5AE0u;
            goto label_1f5ae0;
        }
    }
    ctx->pc = 0x1F5AD0u;
label_1f5ad0:
    // 0x1f5ad0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5ad4:
    // 0x1f5ad4: 0xc07e7d2  jal         func_1F9F48
label_1f5ad8:
    if (ctx->pc == 0x1F5AD8u) {
        ctx->pc = 0x1F5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AD4u;
        // 0x1f5ad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5ADCu;
        goto label_1f5adc;
    }
    ctx->pc = 0x1F5AD4u;
    SET_GPR_U32(ctx, 31, 0x1F5ADCu);
    ctx->pc = 0x1F5AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AD4u;
    // 0x1f5ad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9F48u, 0x1F5AD4u, 0x1F5ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5ADCu;
label_1f5adc:
    // 0x1f5adc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ae0:
    // 0x1f5ae0: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_1f5ae4:
    if (ctx->pc == 0x1F5AE4u) {
        ctx->pc = 0x1F5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AE0u;
        // 0x1f5ae4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AE8u;
        goto label_1f5ae8;
    }
    ctx->pc = 0x1F5AE0u;
    {
        const bool branch_taken_0x1f5ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ae0) {
            ctx->pc = 0x1F5AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5AE0u;
            // 0x1f5ae4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B08u;
            goto label_1f5b08;
        }
    }
    ctx->pc = 0x1F5AE8u;
label_1f5ae8:
    // 0x1f5ae8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f5aec:
    // 0x1f5aec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f5aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f5af0:
    // 0x1f5af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5af4:
    // 0x1f5af4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1f5af8:
    // 0x1f5af8: 0x40f809  jalr        $v0
label_1f5afc:
    if (ctx->pc == 0x1F5AFCu) {
        ctx->pc = 0x1F5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AF8u;
        // 0x1f5afc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B00u;
        goto label_1f5b00;
    }
    ctx->pc = 0x1F5AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5B00u);
        ctx->pc = 0x1F5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AF8u;
        // 0x1f5afc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5AF8u, 0x1F5B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5B00u;
label_1f5b00:
    // 0x1f5b00: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1f5b04:
    if (ctx->pc == 0x1F5B04u) {
        ctx->pc = 0x1F5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B00u;
        // 0x1f5b04: 0x8e660494  lw          $a2, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B08u;
        goto label_1f5b08;
    }
    ctx->pc = 0x1F5B00u;
    {
        const bool branch_taken_0x1f5b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B00u;
        // 0x1f5b04: 0x8e660494  lw          $a2, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b00) {
            ctx->pc = 0x1F5B70u;
            goto label_1f5b70;
        }
    }
    ctx->pc = 0x1F5B08u;
label_1f5b08:
    // 0x1f5b08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b0c:
    // 0x1f5b0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f5b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b10:
    // 0x1f5b10: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f5b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b14:
    // 0x1f5b14: 0xc094854  jal         func_252150
label_1f5b18:
    if (ctx->pc == 0x1F5B18u) {
        ctx->pc = 0x1F5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B14u;
        // 0x1f5b18: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B1Cu;
        goto label_1f5b1c;
    }
    ctx->pc = 0x1F5B14u;
    SET_GPR_U32(ctx, 31, 0x1F5B1Cu);
    ctx->pc = 0x1F5B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B14u;
    // 0x1f5b18: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x1F5B14u, 0x1F5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B1Cu;
label_1f5b1c:
    // 0x1f5b1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f5b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f5b20:
    // 0x1f5b20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f5b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b24:
    // 0x1f5b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b28:
    // 0x1f5b28: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1f5b2c:
    // 0x1f5b2c: 0x40f809  jalr        $v0
label_1f5b30:
    if (ctx->pc == 0x1F5B30u) {
        ctx->pc = 0x1F5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B2Cu;
        // 0x1f5b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B34u;
        goto label_1f5b34;
    }
    ctx->pc = 0x1F5B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5B34u);
        ctx->pc = 0x1F5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B2Cu;
        // 0x1f5b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B2Cu, 0x1F5B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5B34u;
label_1f5b34:
    // 0x1f5b34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f5b38:
    // 0x1f5b38: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f5b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b3c:
    // 0x1f5b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b40:
    // 0x1f5b40: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1f5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1f5b44:
    // 0x1f5b44: 0x40f809  jalr        $v0
label_1f5b48:
    if (ctx->pc == 0x1F5B48u) {
        ctx->pc = 0x1F5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B44u;
        // 0x1f5b48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B4Cu;
        goto label_1f5b4c;
    }
    ctx->pc = 0x1F5B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5B4Cu);
        ctx->pc = 0x1F5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B44u;
        // 0x1f5b48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B44u, 0x1F5B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5B4Cu;
label_1f5b4c:
    // 0x1f5b4c: 0x8e660494  lw          $a2, 0x494($s3)
    ctx->pc = 0x1f5b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
label_1f5b50:
    // 0x1f5b50: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
label_1f5b54:
    if (ctx->pc == 0x1F5B54u) {
        ctx->pc = 0x1F5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B50u;
        // 0x1f5b54: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B58u;
        goto label_1f5b58;
    }
    ctx->pc = 0x1F5B50u;
    {
        const bool branch_taken_0x1f5b50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b50) {
            ctx->pc = 0x1F5B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5B50u;
            // 0x1f5b54: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B74u;
            goto label_1f5b74;
        }
    }
    ctx->pc = 0x1F5B58u;
label_1f5b58:
    // 0x1f5b58: 0xc0801b4  jal         func_2006D0
label_1f5b5c:
    if (ctx->pc == 0x1F5B5Cu) {
        ctx->pc = 0x1F5B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B58u;
        // 0x1f5b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B60u;
        goto label_1f5b60;
    }
    ctx->pc = 0x1F5B58u;
    SET_GPR_U32(ctx, 31, 0x1F5B60u);
    ctx->pc = 0x1F5B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B58u;
    // 0x1f5b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2006D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006D0u, 0x1F5B58u, 0x1F5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B60u;
label_1f5b60:
    // 0x1f5b60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b64:
    // 0x1f5b64: 0x5600ffa0  bnel        $s0, $zero, . + 4 + (-0x60 << 2)
label_1f5b68:
    if (ctx->pc == 0x1F5B68u) {
        ctx->pc = 0x1F5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B64u;
        // 0x1f5b68: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B6Cu;
        goto label_1f5b6c;
    }
    ctx->pc = 0x1F5B64u;
    {
        const bool branch_taken_0x1f5b64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b64) {
            ctx->pc = 0x1F5B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5B64u;
            // 0x1f5b68: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F59E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f59e8;
        }
    }
    ctx->pc = 0x1F5B6Cu;
label_1f5b6c:
    // 0x1f5b6c: 0x8e660494  lw          $a2, 0x494($s3)
    ctx->pc = 0x1f5b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
label_1f5b70:
    // 0x1f5b70: 0x8e63049c  lw          $v1, 0x49C($s3)
    ctx->pc = 0x1f5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
label_1f5b74:
    // 0x1f5b74: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1f5b78:
    // 0x1f5b78: 0x8e6404a0  lw          $a0, 0x4A0($s3)
    ctx->pc = 0x1f5b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1184)));
label_1f5b7c:
    // 0x1f5b7c: 0x6100a  movz        $v0, $zero, $a2
    ctx->pc = 0x1f5b7cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1f5b80:
    // 0x1f5b80: 0x8e650498  lw          $a1, 0x498($s3)
    ctx->pc = 0x1f5b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1176)));
label_1f5b84:
    // 0x1f5b84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f5b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f5b88:
    // 0x1f5b88: 0xae63049c  sw          $v1, 0x49C($s3)
    ctx->pc = 0x1f5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 3));
label_1f5b8c:
    // 0x1f5b8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f5b90:
    // 0x1f5b90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f5b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5b94:
    // 0x1f5b94: 0xae6404a0  sw          $a0, 0x4A0($s3)
    ctx->pc = 0x1f5b94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1184), GPR_U32(ctx, 4));
label_1f5b98:
    // 0x1f5b98: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f5b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f5b9c:
    // 0x1f5b9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f5b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5ba0:
    // 0x1f5ba0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f5ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1f5ba4:
    // 0x1f5ba4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f5ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5ba8:
    // 0x1f5ba8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f5ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1f5bac:
    // 0x1f5bac: 0x3e00008  jr          $ra
label_1f5bb0:
    if (ctx->pc == 0x1F5BB0u) {
        ctx->pc = 0x1F5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BACu;
        // 0x1f5bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5BB4u;
        goto label_fallthrough_0x1f5bac;
    }
    ctx->pc = 0x1F5BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BACu;
        // 0x1f5bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5bac:
    ctx->pc = 0x1F5BB4u;
}
