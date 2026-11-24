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

// Function: sub_0023DFD0
// Address: 0x23dfd0 - 0x23e050
void sub_0023DFD0_0x23dfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DFD0_0x23dfd0");
#endif

    switch (ctx->pc) {
        case 0x23dff4u: goto label_23dff4;
        case 0x23e024u: goto label_23e024;
        default: break;
    }

    ctx->pc = 0x23dfd0u;

    // 0x23dfd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23dfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23dfd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23dfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23dfd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23dfd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfdc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23dfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23dfe0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23dfe4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23DFE4u;
    {
        const bool branch_taken_0x23dfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFE4u;
        // 0x23dfe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfe4) {
            ctx->pc = 0x23E010u;
            goto label_23e010;
        }
    }
    ctx->pc = 0x23DFECu;
    // 0x23dfec: 0xc08dd84  jal         func_237610
    ctx->pc = 0x23DFECu;
    SET_GPR_U32(ctx, 31, 0x23DFF4u);
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x23DFECu, 0x23DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFF4u;
label_23dff4:
    // 0x23dff4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23dff8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DFF8u;
    {
        const bool branch_taken_0x23dff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23dff8) {
            ctx->pc = 0x23DFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DFF8u;
            // 0x23dffc: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E014u;
            goto label_23e014;
        }
    }
    ctx->pc = 0x23E000u;
    // 0x23e000: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e004: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23e004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e008: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x23e008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e00c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x23e00cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_23e010:
    // 0x23e010: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x23e010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_23e014:
    // 0x23e014: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x23E014u;
    {
        const bool branch_taken_0x23e014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e014) {
            ctx->pc = 0x23E018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E014u;
            // 0x23e018: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E044u;
            goto label_23e044;
        }
    }
    ctx->pc = 0x23E01Cu;
    // 0x23e01c: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x23E01Cu;
    SET_GPR_U32(ctx, 31, 0x23E024u);
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x23E01Cu, 0x23E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E024u;
label_23e024:
    // 0x23e024: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23e024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e028: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E028u;
    {
        const bool branch_taken_0x23e028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e028) {
            ctx->pc = 0x23E02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E028u;
            // 0x23e02c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E044u;
            goto label_23e044;
        }
    }
    ctx->pc = 0x23E030u;
    // 0x23e030: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23e034: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23e034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e038: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x23e038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e03c: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x23e03cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e044:
    // 0x23e044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23e044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e048: 0x3e00008  jr          $ra
    ctx->pc = 0x23E048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E048u;
        // 0x23e04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E050u;
}
