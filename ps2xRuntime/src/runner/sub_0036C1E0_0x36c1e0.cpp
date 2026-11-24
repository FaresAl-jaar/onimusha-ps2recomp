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

// Function: sub_0036C1E0
// Address: 0x36c1e0 - 0x36c270
void sub_0036C1E0_0x36c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C1E0_0x36c1e0");
#endif

    switch (ctx->pc) {
        case 0x36c224u: goto label_36c224;
        case 0x36c260u: goto label_36c260;
        default: break;
    }

    ctx->pc = 0x36c1e0u;

    // 0x36c1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c1e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x36c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x36c1e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c1ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c1f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c1f4: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c1f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36c1fc: 0x84631eee  lh          $v1, 0x1EEE($v1)
    ctx->pc = 0x36c1fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 7918)));
    // 0x36c200: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C200u;
    {
        const bool branch_taken_0x36c200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C200u;
        // 0x36c204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c200) {
            ctx->pc = 0x36C228u;
            goto label_36c228;
        }
    }
    ctx->pc = 0x36C208u;
    // 0x36c208: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c20c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x36c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36c210: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x36c210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c214: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x36c214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36c218: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x36c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x36c21c: 0xc0d6c98  jal         func_35B260
    ctx->pc = 0x36C21Cu;
    SET_GPR_U32(ctx, 31, 0x36C224u);
    ctx->pc = 0x36C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C21Cu;
    // 0x36c220: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B260u, 0x36C21Cu, 0x36C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C224u;
label_36c224:
    // 0x36c224: 0x0  nop
    ctx->pc = 0x36c224u;
    // NOP
label_36c228:
    // 0x36c228: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c22c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x36c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36c230: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c234: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36c234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36c238: 0xac401c18  sw          $zero, 0x1C18($v0)
    ctx->pc = 0x36c238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7192), GPR_U32(ctx, 0));
    // 0x36c23c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c240: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36c244: 0xac431d20  sw          $v1, 0x1D20($v0)
    ctx->pc = 0x36c244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7456), GPR_U32(ctx, 3));
    // 0x36c248: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c24c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x36c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x36c250: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36c250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c254: 0x90451eac  lbu         $a1, 0x1EAC($v0)
    ctx->pc = 0x36c254u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x36c258: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C258u;
    SET_GPR_U32(ctx, 31, 0x36C260u);
    ctx->pc = 0x36C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C258u;
    // 0x36c25c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C258u, 0x36C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C260u;
label_36c260:
    // 0x36c260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c268: 0x3e00008  jr          $ra
    ctx->pc = 0x36C268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C268u;
        // 0x36c26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C270u;
}
