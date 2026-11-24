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

// Function: sub_00230698
// Address: 0x230698 - 0x230708
void sub_00230698_0x230698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230698_0x230698");
#endif

    switch (ctx->pc) {
        case 0x230698u: goto label_230698;
        case 0x23069cu: goto label_23069c;
        case 0x2306a0u: goto label_2306a0;
        case 0x2306a4u: goto label_2306a4;
        case 0x2306a8u: goto label_2306a8;
        case 0x2306acu: goto label_2306ac;
        case 0x2306b0u: goto label_2306b0;
        case 0x2306b4u: goto label_2306b4;
        case 0x2306b8u: goto label_2306b8;
        case 0x2306bcu: goto label_2306bc;
        case 0x2306c0u: goto label_2306c0;
        case 0x2306c4u: goto label_2306c4;
        case 0x2306c8u: goto label_2306c8;
        case 0x2306ccu: goto label_2306cc;
        case 0x2306d0u: goto label_2306d0;
        case 0x2306d4u: goto label_2306d4;
        case 0x2306d8u: goto label_2306d8;
        case 0x2306dcu: goto label_2306dc;
        case 0x2306e0u: goto label_2306e0;
        case 0x2306e4u: goto label_2306e4;
        case 0x2306e8u: goto label_2306e8;
        case 0x2306ecu: goto label_2306ec;
        case 0x2306f0u: goto label_2306f0;
        case 0x2306f4u: goto label_2306f4;
        case 0x2306f8u: goto label_2306f8;
        case 0x2306fcu: goto label_2306fc;
        case 0x230700u: goto label_230700;
        case 0x230704u: goto label_230704;
        default: break;
    }

    ctx->pc = 0x230698u;

label_230698:
    // 0x230698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23069c:
    // 0x23069c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2306a0:
    // 0x2306a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2306a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2306a4:
    // 0x2306a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2306a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2306a8:
    // 0x2306a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2306a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2306ac:
    // 0x2306ac: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
label_2306b0:
    if (ctx->pc == 0x2306B0u) {
        ctx->pc = 0x2306B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306ACu;
        // 0x2306b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306B4u;
        goto label_2306b4;
    }
    ctx->pc = 0x2306ACu;
    {
        const bool branch_taken_0x2306ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2306ac) {
            ctx->pc = 0x2306B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2306ACu;
            // 0x2306b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2306FCu;
            goto label_2306fc;
        }
    }
    ctx->pc = 0x2306B4u;
label_2306b4:
    // 0x2306b4: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x2306b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2306b8:
    // 0x2306b8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2306bc:
    if (ctx->pc == 0x2306BCu) {
        ctx->pc = 0x2306BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306B8u;
        // 0x2306bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306C0u;
        goto label_2306c0;
    }
    ctx->pc = 0x2306B8u;
    {
        const bool branch_taken_0x2306b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2306b8) {
            ctx->pc = 0x2306BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2306B8u;
            // 0x2306bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2306FCu;
            goto label_2306fc;
        }
    }
    ctx->pc = 0x2306C0u;
label_2306c0:
    // 0x2306c0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2306c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2306c4:
    // 0x2306c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2306c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2306c8:
    // 0x2306c8: 0x8c43ccb8  lw          $v1, -0x3348($v0)
    ctx->pc = 0x2306c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954168)));
label_2306cc:
    // 0x2306cc: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_2306d0:
    if (ctx->pc == 0x2306D0u) {
        ctx->pc = 0x2306D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306CCu;
        // 0x2306d0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306D4u;
        goto label_2306d4;
    }
    ctx->pc = 0x2306CCu;
    {
        const bool branch_taken_0x2306cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2306cc) {
            ctx->pc = 0x2306D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2306CCu;
            // 0x2306d0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2306E8u;
            goto label_2306e8;
        }
    }
    ctx->pc = 0x2306D4u;
label_2306d4:
    // 0x2306d4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x2306d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2306d8:
    // 0x2306d8: 0xc08bb4c  jal         func_22ED30
label_2306dc:
    if (ctx->pc == 0x2306DCu) {
        ctx->pc = 0x2306DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306D8u;
        // 0x2306dc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306E0u;
        goto label_2306e0;
    }
    ctx->pc = 0x2306D8u;
    SET_GPR_U32(ctx, 31, 0x2306E0u);
    ctx->pc = 0x2306DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306D8u;
    // 0x2306dc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED30u, 0x2306D8u, 0x2306E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306E0u;
label_2306e0:
    // 0x2306e0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2306e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2306e4:
    // 0x2306e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2306e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2306e8:
    // 0x2306e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2306e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2306ec:
    // 0x2306ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2306ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2306f0:
    // 0x2306f0: 0x40f809  jalr        $v0
label_2306f4:
    if (ctx->pc == 0x2306F4u) {
        ctx->pc = 0x2306F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306F0u;
        // 0x2306f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306F8u;
        goto label_2306f8;
    }
    ctx->pc = 0x2306F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2306F8u);
        ctx->pc = 0x2306F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306F0u;
        // 0x2306f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2306F0u, 0x2306F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2306F8u;
label_2306f8:
    // 0x2306f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2306f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2306fc:
    // 0x2306fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2306fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_230700:
    // 0x230700: 0x3e00008  jr          $ra
label_230704:
    if (ctx->pc == 0x230704u) {
        ctx->pc = 0x230704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230700u;
        // 0x230704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230708u;
        goto label_fallthrough_0x230700;
    }
    ctx->pc = 0x230700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230700u;
        // 0x230704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x230700:
    ctx->pc = 0x230708u;
}
