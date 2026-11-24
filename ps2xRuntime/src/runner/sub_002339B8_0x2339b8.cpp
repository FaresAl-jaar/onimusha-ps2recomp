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

// Function: sub_002339B8
// Address: 0x2339b8 - 0x233a8c
void sub_002339B8_0x2339b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002339B8_0x2339b8");
#endif

    switch (ctx->pc) {
        case 0x233a10u: goto label_233a10;
        case 0x233a24u: goto label_233a24;
        case 0x233a40u: goto label_233a40;
        case 0x233a50u: goto label_233a50;
        default: break;
    }

    ctx->pc = 0x2339b8u;

    // 0x2339b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2339b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2339bc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2339bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2339c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2339c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2339c4: 0x2445fd18  addiu       $a1, $v0, -0x2E8
    ctx->pc = 0x2339c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966552));
    // 0x2339c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2339c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2339cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2339ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2339d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2339d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2339d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2339d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2339d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2339d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2339dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2339dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2339e0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2339e0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4BFD18u));
    // 0x2339e4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2339E4u;
    {
        const bool branch_taken_0x2339e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2339E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339E4u;
        // 0x2339e8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339e4) {
            ctx->pc = 0x233A5Cu;
            goto label_233a5c;
        }
    }
    ctx->pc = 0x2339ECu;
    // 0x2339ec: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2339f0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2339f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2339f4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2339f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2339f8: 0x2454fc98  addiu       $s4, $v0, -0x368
    ctx->pc = 0x2339f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966424));
    // 0x2339fc: 0x2473fc68  addiu       $s3, $v1, -0x398
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966376));
    // 0x233a00: 0x2492fc54  addiu       $s2, $a0, -0x3AC
    ctx->pc = 0x233a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966356));
    // 0x233a04: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x233a04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a08: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x233a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233a0c: 0x0  nop
    ctx->pc = 0x233a0cu;
    // NOP
label_233a10:
    // 0x233a10: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x233a10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x233a14: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x233a14u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x233a18: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x233a18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x233a1c: 0xc094e6e  jal         func_2539B8
    ctx->pc = 0x233A1Cu;
    SET_GPR_U32(ctx, 31, 0x233A24u);
    ctx->pc = 0x233A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A1Cu;
    // 0x233a20: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539B8u, 0x233A1Cu, 0x233A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A24u;
label_233a24:
    // 0x233a24: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x233a24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x233a28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x233a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x233a30: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x233A30u;
    {
        const bool branch_taken_0x233a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x233a30) {
            ctx->pc = 0x233A40u;
            goto label_233a40;
        }
    }
    ctx->pc = 0x233A38u;
    // 0x233a38: 0xc08cecc  jal         func_233B30
    ctx->pc = 0x233A38u;
    SET_GPR_U32(ctx, 31, 0x233A40u);
    ctx->pc = 0x233A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A38u;
    // 0x233a3c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B30u, 0x233A38u, 0x233A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A40u;
label_233a40:
    // 0x233a40: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233A40u;
    {
        const bool branch_taken_0x233a40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x233a40) {
            ctx->pc = 0x233A50u;
            goto label_233a50;
        }
    }
    ctx->pc = 0x233A48u;
    // 0x233a48: 0xc08cecc  jal         func_233B30
    ctx->pc = 0x233A48u;
    SET_GPR_U32(ctx, 31, 0x233A50u);
    ctx->pc = 0x233B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B30u, 0x233A48u, 0x233A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A50u;
label_233a50:
    // 0x233a50: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x233a50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x233a54: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x233A54u;
    {
        const bool branch_taken_0x233a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A54u;
        // 0x233a58: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a54) {
            ctx->pc = 0x233A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233a10;
        }
    }
    ctx->pc = 0x233A5Cu;
label_233a5c:
    // 0x233a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233a6c: 0x2442fd20  addiu       $v0, $v0, -0x2E0
    ctx->pc = 0x233a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x233a70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233a74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233a78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233a78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x233a7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x233a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233a80: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x233a80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x233a84: 0x8043788  j           func_10DE20
    ctx->pc = 0x233A84u;
    ctx->pc = 0x233A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A84u;
    // 0x233a88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE20u;
    sub_0010DE20_0x10de20(rdram, ctx, runtime); return;
    ctx->pc = 0x233A8Cu;
}
