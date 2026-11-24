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

// Function: sub_003DA1A0
// Address: 0x3da1a0 - 0x3da240
void sub_003DA1A0_0x3da1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA1A0_0x3da1a0");
#endif

    switch (ctx->pc) {
        case 0x3da1f4u: goto label_3da1f4;
        case 0x3da210u: goto label_3da210;
        default: break;
    }

    ctx->pc = 0x3da1a0u;

    // 0x3da1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3da1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3da1a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3da1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3da1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da1b0: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3da1b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3da1b4: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DA1B4u;
    {
        const bool branch_taken_0x3da1b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1B4u;
        // 0x3da1b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1b4) {
            ctx->pc = 0x3DA208u;
            goto label_3da208;
        }
    }
    ctx->pc = 0x3DA1BCu;
    // 0x3da1bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA1BCu;
    {
        const bool branch_taken_0x3da1bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da1bc) {
            ctx->pc = 0x3DA1D0u;
            goto label_3da1d0;
        }
    }
    ctx->pc = 0x3DA1C4u;
    // 0x3da1c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3DA1C4u;
    {
        const bool branch_taken_0x3da1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da1c4) {
            ctx->pc = 0x3DA230u;
            goto label_3da230;
        }
    }
    ctx->pc = 0x3DA1CCu;
    // 0x3da1cc: 0x0  nop
    ctx->pc = 0x3da1ccu;
    // NOP
label_3da1d0:
    // 0x3da1d0: 0x92072be5  lbu         $a3, 0x2BE5($s0)
    ctx->pc = 0x3da1d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11237)));
    // 0x3da1d4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3da1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3da1d8: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x3da1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x3da1dc: 0x34460040  ori         $a2, $v0, 0x40
    ctx->pc = 0x3da1dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3da1e0: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3da1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3da1e4: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x3da1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3da1e8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3da1e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3da1ec: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3DA1ECu;
    SET_GPR_U32(ctx, 31, 0x3DA1F4u);
    ctx->pc = 0x3DA1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA1ECu;
    // 0x3da1f0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3DA1ECu, 0x3DA1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA1F4u;
label_3da1f4:
    // 0x3da1f4: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da1f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da1fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DA1FCu;
    {
        const bool branch_taken_0x3da1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1FCu;
        // 0x3da200: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1fc) {
            ctx->pc = 0x3DA230u;
            goto label_3da230;
        }
    }
    ctx->pc = 0x3DA204u;
    // 0x3da204: 0x0  nop
    ctx->pc = 0x3da204u;
    // NOP
label_3da208:
    // 0x3da208: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3DA208u;
    SET_GPR_U32(ctx, 31, 0x3DA210u);
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3DA208u, 0x3DA210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA210u;
label_3da210:
    // 0x3da210: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA210u;
    {
        const bool branch_taken_0x3da210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA210u;
        // 0x3da214: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da210) {
            ctx->pc = 0x3DA230u;
            goto label_3da230;
        }
    }
    ctx->pc = 0x3DA218u;
    // 0x3da218: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3da218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da21c: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3da21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da220: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da228: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da22c: 0x0  nop
    ctx->pc = 0x3da22cu;
    // NOP
label_3da230:
    // 0x3da230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da238: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA238u;
        // 0x3da23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA240u;
}
