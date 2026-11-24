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

// Function: entry_121100
// Address: 0x121100 - 0x121178
void entry_121100_0x121178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_121100_0x121178");
#endif

    switch (ctx->pc) {
        case 0x121138u: goto label_121138;
        case 0x121148u: goto label_121148;
        default: break;
    }

    ctx->pc = 0x121100u;

    // 0x121100: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x121100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x121104: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x121104u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x121108: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x121108u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x12110c: 0xacf044c0  sw          $s0, 0x44C0($a3)
    ctx->pc = 0x12110cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 17600), GPR_U32(ctx, 16));
    // 0x121110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121114: 0x24e744c0  addiu       $a3, $a3, 0x44C0
    ctx->pc = 0x121114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17600));
    // 0x121118: 0x25295a00  addiu       $t1, $t1, 0x5A00
    ctx->pc = 0x121118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23040));
    // 0x12111c: 0x256b0dc8  addiu       $t3, $t3, 0xDC8
    ctx->pc = 0x12111cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3528));
    // 0x121120: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x121120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x121124: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x121124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x121128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12112c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x12112cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x121130: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x121130u;
    SET_GPR_U32(ctx, 31, 0x121138u);
    ctx->pc = 0x121134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121130u;
    // 0x121134: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x121130u, 0x121138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121138u;
label_121138:
    // 0x121138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121138u;
    {
        const bool branch_taken_0x121138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121138u;
        // 0x12113c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121138) {
            ctx->pc = 0x121150u;
            goto label_121150;
        }
    }
    ctx->pc = 0x121140u;
    // 0x121140: 0xc043800  jal         func_10E000
    ctx->pc = 0x121140u;
    SET_GPR_U32(ctx, 31, 0x121148u);
    ctx->pc = 0x121144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121140u;
    // 0x121144: 0x8e445d4c  lw          $a0, 0x5D4C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23884)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x121140u, 0x121148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121148u;
label_121148:
    // 0x121148: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x121148u;
    {
        const bool branch_taken_0x121148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121148u;
        // 0x12114c: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121148) {
            ctx->pc = 0x12115Cu;
            goto label_12115c;
        }
    }
    ctx->pc = 0x121150u;
label_121150:
    // 0x121150: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x121150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x121154: 0xac625d48  sw          $v0, 0x5D48($v1)
    ctx->pc = 0x121154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x405D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x405D48u, _value); } while (0);
    // 0x121158: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x121158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12115c:
    // 0x12115c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12115cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x121160: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x121160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121164: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x121164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121168: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x121168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12116c: 0x3e00008  jr          $ra
    ctx->pc = 0x12116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12116Cu;
        // 0x121170: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12116Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121174u;
    // 0x121174: 0x0  nop
    ctx->pc = 0x121174u;
    // NOP
    ctx->pc = 0x121178u;
}
