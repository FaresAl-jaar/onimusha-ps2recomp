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

// Function: sub_00239DE0
// Address: 0x239de0 - 0x239ea8
void sub_00239DE0_0x239de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239DE0_0x239de0");
#endif

    switch (ctx->pc) {
        case 0x239e20u: goto label_239e20;
        case 0x239e3cu: goto label_239e3c;
        case 0x239e48u: goto label_239e48;
        case 0x239e54u: goto label_239e54;
        default: break;
    }

    ctx->pc = 0x239de0u;

    // 0x239de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239dec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239df0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239df4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239df8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x239df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239dfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x239dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x239e00: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x239e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x239e04: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x239e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x239e08: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x239e0c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x239e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x239e10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239E10u;
    {
        const bool branch_taken_0x239e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E10u;
        // 0x239e14: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e10) {
            ctx->pc = 0x239E28u;
            goto label_239e28;
        }
    }
    ctx->pc = 0x239E18u;
    // 0x239e18: 0xc08d55e  jal         func_235578
    ctx->pc = 0x239E18u;
    SET_GPR_U32(ctx, 31, 0x239E20u);
    ctx->pc = 0x239E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E18u;
    // 0x239e1c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235578u, 0x239E18u, 0x239E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E20u;
label_239e20:
    // 0x239e20: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x239E20u;
    {
        const bool branch_taken_0x239e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E20u;
        // 0x239e24: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e20) {
            ctx->pc = 0x239E84u;
            goto label_239e84;
        }
    }
    ctx->pc = 0x239E28u;
label_239e28:
    // 0x239e28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x239e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x239e2c: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x239E2Cu;
    {
        const bool branch_taken_0x239e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239e2c) {
            ctx->pc = 0x239E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239E2Cu;
            // 0x239e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239E78u;
            goto label_239e78;
        }
    }
    ctx->pc = 0x239E34u;
    // 0x239e34: 0xc08db20  jal         func_236C80
    ctx->pc = 0x239E34u;
    SET_GPR_U32(ctx, 31, 0x239E3Cu);
    ctx->pc = 0x239E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E34u;
    // 0x239e38: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C80u, 0x239E34u, 0x239E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E3Cu;
label_239e3c:
    // 0x239e3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x239e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239e40: 0xc08db02  jal         func_236C08
    ctx->pc = 0x239E40u;
    SET_GPR_U32(ctx, 31, 0x239E48u);
    ctx->pc = 0x239E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E40u;
    // 0x239e44: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C08u, 0x239E40u, 0x239E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E48u;
label_239e48:
    // 0x239e48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x239e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239e4c: 0xc08db0e  jal         func_236C38
    ctx->pc = 0x239E4Cu;
    SET_GPR_U32(ctx, 31, 0x239E54u);
    ctx->pc = 0x239E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E4Cu;
    // 0x239e50: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C38u, 0x239E4Cu, 0x239E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E54u;
label_239e54:
    // 0x239e54: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x239e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x239e58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x239e58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x239e5c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239E5Cu;
    {
        const bool branch_taken_0x239e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239e5c) {
            ctx->pc = 0x239E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239E5Cu;
            // 0x239e60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x239E64u;
            goto label_239e64;
        }
    }
    ctx->pc = 0x239E64u;
label_239e64:
    // 0x239e64: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x239e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x239e68: 0x1812  mflo        $v1
    ctx->pc = 0x239e68u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x239e6c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x239e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x239e70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239E70u;
    {
        const bool branch_taken_0x239e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E70u;
        // 0x239e74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e70) {
            ctx->pc = 0x239E80u;
            goto label_239e80;
        }
    }
    ctx->pc = 0x239E78u;
label_239e78:
    // 0x239e78: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x239e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x239e7c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x239e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_239e80:
    // 0x239e80: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x239e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_239e84:
    // 0x239e84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x239e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x239e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x239e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239e90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239e94: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x239e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x239e98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x239e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239e9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239e9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x239EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EA0u;
        // 0x239ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239EA8u;
}
