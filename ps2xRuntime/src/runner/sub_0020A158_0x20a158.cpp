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

// Function: sub_0020A158
// Address: 0x20a158 - 0x20a22c
void sub_0020A158_0x20a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A158_0x20a158");
#endif

    switch (ctx->pc) {
        case 0x20a178u: goto label_20a178;
        case 0x20a1d8u: goto label_20a1d8;
        case 0x20a1e0u: goto label_20a1e0;
        case 0x20a1ecu: goto label_20a1ec;
        case 0x20a1f8u: goto label_20a1f8;
        case 0x20a200u: goto label_20a200;
        default: break;
    }

    ctx->pc = 0x20a158u;

    // 0x20a158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a15c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a164: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a16c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20a170: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A170u;
    SET_GPR_U32(ctx, 31, 0x20A178u);
    ctx->pc = 0x20A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A170u;
    // 0x20a174: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A170u, 0x20A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A178u;
label_20a178:
    // 0x20a178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20a178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a180: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a184: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A184u;
    {
        const bool branch_taken_0x20a184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A184u;
        // 0x20a188: 0x248482c8  addiu       $a0, $a0, -0x7D38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a184) {
            ctx->pc = 0x20A1A8u;
            goto label_20a1a8;
        }
    }
    ctx->pc = 0x20A18Cu;
    // 0x20a18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a198: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20a198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a19c: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A19Cu;
    ctx->pc = 0x20A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A19Cu;
    // 0x20a1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A1A4u;
    // 0x20a1a4: 0x0  nop
    ctx->pc = 0x20a1a4u;
    // NOP
label_20a1a8:
    // 0x20a1a8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A1A8u;
    {
        const bool branch_taken_0x20a1a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1A8u;
        // 0x20a1ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1a8) {
            ctx->pc = 0x20A1D0u;
            goto label_20a1d0;
        }
    }
    ctx->pc = 0x20A1B0u;
    // 0x20a1b0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a1b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a1b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a1bc: 0x248482f8  addiu       $a0, $a0, -0x7D08
    ctx->pc = 0x20a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935288));
    // 0x20a1c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a1c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a1c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20a1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a1c8: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A1C8u;
    ctx->pc = 0x20A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1C8u;
    // 0x20a1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A1D0u;
label_20a1d0:
    // 0x20a1d0: 0xc081a0a  jal         func_206828
    ctx->pc = 0x20A1D0u;
    SET_GPR_U32(ctx, 31, 0x20A1D8u);
    ctx->pc = 0x20A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1D0u;
    // 0x20a1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206828u, 0x20A1D0u, 0x20A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1D8u;
label_20a1d8:
    // 0x20a1d8: 0xc092dee  jal         func_24B7B8
    ctx->pc = 0x20A1D8u;
    SET_GPR_U32(ctx, 31, 0x20A1E0u);
    ctx->pc = 0x20A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1D8u;
    // 0x20a1dc: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7B8u, 0x20A1D8u, 0x20A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1E0u;
label_20a1e0:
    // 0x20a1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1e4: 0xc0827e6  jal         func_209F98
    ctx->pc = 0x20A1E4u;
    SET_GPR_U32(ctx, 31, 0x20A1ECu);
    ctx->pc = 0x20A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1E4u;
    // 0x20a1e8: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F98u, 0x20A1E4u, 0x20A1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1ECu;
label_20a1ec:
    // 0x20a1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1f0: 0xc08283e  jal         func_20A0F8
    ctx->pc = 0x20A1F0u;
    SET_GPR_U32(ctx, 31, 0x20A1F8u);
    ctx->pc = 0x20A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1F0u;
    // 0x20a1f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A0F8u, 0x20A1F0u, 0x20A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1F8u;
label_20a1f8:
    // 0x20a1f8: 0xc082816  jal         func_20A058
    ctx->pc = 0x20A1F8u;
    SET_GPR_U32(ctx, 31, 0x20A200u);
    ctx->pc = 0x20A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1F8u;
    // 0x20a1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A058u, 0x20A1F8u, 0x20A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A200u;
label_20a200:
    // 0x20a200: 0xae1102e4  sw          $s1, 0x2E4($s0)
    ctx->pc = 0x20a200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 17));
    // 0x20a204: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x20a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x20a208: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A208u;
    {
        const bool branch_taken_0x20a208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A208u;
        // 0x20a20c: 0xae1102dc  sw          $s1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a208) {
            ctx->pc = 0x20A214u;
            goto label_20a214;
        }
    }
    ctx->pc = 0x20A210u;
    // 0x20a210: 0xae1102e8  sw          $s1, 0x2E8($s0)
    ctx->pc = 0x20a210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
label_20a214:
    // 0x20a214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a21c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a21cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a220: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20a220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a224: 0x3e00008  jr          $ra
    ctx->pc = 0x20A224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A224u;
        // 0x20a228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A22Cu;
}
