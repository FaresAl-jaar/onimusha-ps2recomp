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

// Function: sub_00351980
// Address: 0x351980 - 0x351a08
void sub_00351980_0x351980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351980_0x351980");
#endif

    switch (ctx->pc) {
        case 0x3519c0u: goto label_3519c0;
        case 0x3519dcu: goto label_3519dc;
        default: break;
    }

    ctx->pc = 0x351980u;

    // 0x351980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351984: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x351984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35198c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35198cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x351990: 0x90820011  lbu         $v0, 0x11($a0)
    ctx->pc = 0x351990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x351994: 0x1046000e  beq         $v0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x351994u;
    {
        const bool branch_taken_0x351994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x351998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351994u;
        // 0x351998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351994) {
            ctx->pc = 0x3519D0u;
            goto label_3519d0;
        }
    }
    ctx->pc = 0x35199Cu;
    // 0x35199c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35199Cu;
    {
        const bool branch_taken_0x35199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35199c) {
            ctx->pc = 0x3519B0u;
            goto label_3519b0;
        }
    }
    ctx->pc = 0x3519A4u;
    // 0x3519a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3519A4u;
    {
        const bool branch_taken_0x3519a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3519a4) {
            ctx->pc = 0x3519F0u;
            goto label_3519f0;
        }
    }
    ctx->pc = 0x3519ACu;
    // 0x3519ac: 0x0  nop
    ctx->pc = 0x3519acu;
    // NOP
label_3519b0:
    // 0x3519b0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x3519b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3519b4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3519b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3519b8: 0xc0d3a34  jal         func_34E8D0
    ctx->pc = 0x3519B8u;
    SET_GPR_U32(ctx, 31, 0x3519C0u);
    ctx->pc = 0x3519BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3519B8u;
    // 0x3519bc: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E8D0u, 0x3519B8u, 0x3519C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3519C0u;
label_3519c0:
    // 0x3519c0: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x3519c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3519c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3519c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3519c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3519C8u;
    {
        const bool branch_taken_0x3519c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3519CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519C8u;
        // 0x3519cc: 0xa2020011  sb          $v0, 0x11($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3519c8) {
            ctx->pc = 0x3519F0u;
            goto label_3519f0;
        }
    }
    ctx->pc = 0x3519D0u;
label_3519d0:
    // 0x3519d0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3519d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3519d4: 0xc0d3a60  jal         func_34E980
    ctx->pc = 0x3519D4u;
    SET_GPR_U32(ctx, 31, 0x3519DCu);
    ctx->pc = 0x3519D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3519D4u;
    // 0x3519d8: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E980u, 0x3519D4u, 0x3519DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3519DCu;
label_3519dc:
    // 0x3519dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3519DCu;
    {
        const bool branch_taken_0x3519dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3519dc) {
            ctx->pc = 0x3519F0u;
            goto label_3519f0;
        }
    }
    ctx->pc = 0x3519E4u;
    // 0x3519e4: 0xa2000011  sb          $zero, 0x11($s0)
    ctx->pc = 0x3519e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x3519e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3519E8u;
    {
        const bool branch_taken_0x3519e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3519ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519E8u;
        // 0x3519ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3519e8) {
            ctx->pc = 0x3519F8u;
            goto label_3519f8;
        }
    }
    ctx->pc = 0x3519F0u;
label_3519f0:
    // 0x3519f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3519f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3519f4: 0x0  nop
    ctx->pc = 0x3519f4u;
    // NOP
label_3519f8:
    // 0x3519f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3519f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3519fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3519fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351a00: 0x3e00008  jr          $ra
    ctx->pc = 0x351A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A00u;
        // 0x351a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351A08u;
}
