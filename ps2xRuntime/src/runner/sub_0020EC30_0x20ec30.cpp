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

// Function: sub_0020EC30
// Address: 0x20ec30 - 0x20ed68
void sub_0020EC30_0x20ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EC30_0x20ec30");
#endif

    switch (ctx->pc) {
        case 0x20ec68u: goto label_20ec68;
        case 0x20ec98u: goto label_20ec98;
        case 0x20ecb8u: goto label_20ecb8;
        case 0x20ecd8u: goto label_20ecd8;
        case 0x20ecf4u: goto label_20ecf4;
        case 0x20ed08u: goto label_20ed08;
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed34u: goto label_20ed34;
        case 0x20ed48u: goto label_20ed48;
        default: break;
    }

    ctx->pc = 0x20ec30u;

    // 0x20ec30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20ec34: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20ec38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20ec38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec3c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20ec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20ec40: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x20ec40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x20ec44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20ec48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20ec48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec4c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x20ec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x20ec50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20ec50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20ec58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ec58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20ec5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec60: 0xc083b5a  jal         func_20ED68
    ctx->pc = 0x20EC60u;
    SET_GPR_U32(ctx, 31, 0x20EC68u);
    ctx->pc = 0x20EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC60u;
    // 0x20ec64: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ED68u, 0x20EC60u, 0x20EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC68u;
label_20ec68:
    // 0x20ec68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20ec6c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x20ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x20ec70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ec70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ec74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20ec78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec7c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x20ec7cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20ec80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ec80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec84: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20EC84u;
    {
        const bool branch_taken_0x20ec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec84) {
            ctx->pc = 0x20EC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EC84u;
            // 0x20ec88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EC8Cu;
            goto label_20ec8c;
        }
    }
    ctx->pc = 0x20EC8Cu;
label_20ec8c:
    // 0x20ec8c: 0x4010  mfhi        $t0
    ctx->pc = 0x20ec8cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x20ec90: 0xc083b6a  jal         func_20EDA8
    ctx->pc = 0x20EC90u;
    SET_GPR_U32(ctx, 31, 0x20EC98u);
    ctx->pc = 0x20EDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EDA8u, 0x20EC90u, 0x20EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC98u;
label_20ec98:
    // 0x20ec98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ec9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ec9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eca0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20eca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eca4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eca8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x20ECA8u;
    {
        const bool branch_taken_0x20eca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECA8u;
        // 0x20ecac: 0x24080800  addiu       $t0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eca8) {
            ctx->pc = 0x20ED4Cu;
            goto label_20ed4c;
        }
    }
    ctx->pc = 0x20ECB0u;
    // 0x20ecb0: 0xc083b6a  jal         func_20EDA8
    ctx->pc = 0x20ECB0u;
    SET_GPR_U32(ctx, 31, 0x20ECB8u);
    ctx->pc = 0x20EDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EDA8u, 0x20ECB0u, 0x20ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECB8u;
label_20ecb8:
    // 0x20ecb8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x20ECB8u;
    {
        const bool branch_taken_0x20ecb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ecb8) {
            ctx->pc = 0x20ECBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ECB8u;
            // 0x20ecbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ED50u;
            goto label_20ed50;
        }
    }
    ctx->pc = 0x20ECC0u;
    // 0x20ecc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ecc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ecc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ecc8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20ecc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20eccc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20ecccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ecd0: 0xc083b6a  jal         func_20EDA8
    ctx->pc = 0x20ECD0u;
    SET_GPR_U32(ctx, 31, 0x20ECD8u);
    ctx->pc = 0x20ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECD0u;
    // 0x20ecd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EDA8u, 0x20ECD0u, 0x20ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECD8u;
label_20ecd8:
    // 0x20ecd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20ecd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ecdc: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x20ecdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20ece0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20ece0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ece4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20ECE4u;
    {
        const bool branch_taken_0x20ece4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECE4u;
        // 0x20ece8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ece4) {
            ctx->pc = 0x20ED4Cu;
            goto label_20ed4c;
        }
    }
    ctx->pc = 0x20ECECu;
    // 0x20ecec: 0xc083bea  jal         func_20EFA8
    ctx->pc = 0x20ECECu;
    SET_GPR_U32(ctx, 31, 0x20ECF4u);
    ctx->pc = 0x20ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECECu;
    // 0x20ecf0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EFA8u, 0x20ECECu, 0x20ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECF4u;
label_20ecf4:
    // 0x20ecf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ecf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ecf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ecfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20ecfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed00: 0xc083c18  jal         func_20F060
    ctx->pc = 0x20ED00u;
    SET_GPR_U32(ctx, 31, 0x20ED08u);
    ctx->pc = 0x20ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED00u;
    // 0x20ed04: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F060u, 0x20ED00u, 0x20ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED08u;
label_20ed08:
    // 0x20ed08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20ed0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed10: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x20ed10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20ed14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20ed14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed18: 0xc083bea  jal         func_20EFA8
    ctx->pc = 0x20ED18u;
    SET_GPR_U32(ctx, 31, 0x20ED20u);
    ctx->pc = 0x20ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED18u;
    // 0x20ed1c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EFA8u, 0x20ED18u, 0x20ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED20u;
label_20ed20:
    // 0x20ed20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ed20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ed24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20ed28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed2c: 0xc083c18  jal         func_20F060
    ctx->pc = 0x20ED2Cu;
    SET_GPR_U32(ctx, 31, 0x20ED34u);
    ctx->pc = 0x20ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED2Cu;
    // 0x20ed30: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F060u, 0x20ED2Cu, 0x20ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED34u;
label_20ed34:
    // 0x20ed34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ed34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20ed3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed40: 0xc083c62  jal         func_20F188
    ctx->pc = 0x20ED40u;
    SET_GPR_U32(ctx, 31, 0x20ED48u);
    ctx->pc = 0x20ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED40u;
    // 0x20ed44: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F188u, 0x20ED40u, 0x20ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED48u;
label_20ed48:
    // 0x20ed48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ed48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ed4c:
    // 0x20ed4c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20ed4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20ed50:
    // 0x20ed50: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20ed50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20ed54: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20ed54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ed58: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x20ed58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ed5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20ed5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ed60: 0x3e00008  jr          $ra
    ctx->pc = 0x20ED60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED60u;
        // 0x20ed64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ED60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ED68u;
}
