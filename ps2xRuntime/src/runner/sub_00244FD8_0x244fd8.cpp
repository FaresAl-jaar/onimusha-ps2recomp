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

// Function: sub_00244FD8
// Address: 0x244fd8 - 0x24503c
void sub_00244FD8_0x244fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244FD8_0x244fd8");
#endif

    switch (ctx->pc) {
        case 0x244fd8u: goto label_244fd8;
        case 0x244fdcu: goto label_244fdc;
        case 0x244fe0u: goto label_244fe0;
        case 0x244fe4u: goto label_244fe4;
        case 0x244fe8u: goto label_244fe8;
        case 0x244fecu: goto label_244fec;
        case 0x244ff0u: goto label_244ff0;
        case 0x244ff4u: goto label_244ff4;
        case 0x244ff8u: goto label_244ff8;
        case 0x244ffcu: goto label_244ffc;
        case 0x245000u: goto label_245000;
        case 0x245004u: goto label_245004;
        case 0x245008u: goto label_245008;
        case 0x24500cu: goto label_24500c;
        case 0x245010u: goto label_245010;
        case 0x245014u: goto label_245014;
        case 0x245018u: goto label_245018;
        case 0x24501cu: goto label_24501c;
        case 0x245020u: goto label_245020;
        case 0x245024u: goto label_245024;
        case 0x245028u: goto label_245028;
        case 0x24502cu: goto label_24502c;
        case 0x245030u: goto label_245030;
        case 0x245034u: goto label_245034;
        case 0x245038u: goto label_245038;
        default: break;
    }

    ctx->pc = 0x244fd8u;

label_244fd8:
    // 0x244fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_244fdc:
    // 0x244fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_244fe0:
    // 0x244fe0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x244fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244fe4:
    // 0x244fe4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_244fe8:
    if (ctx->pc == 0x244FE8u) {
        ctx->pc = 0x244FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FE4u;
        // 0x244fe8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FECu;
        goto label_244fec;
    }
    ctx->pc = 0x244FE4u;
    {
        const bool branch_taken_0x244fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FE4u;
        // 0x244fe8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fe4) {
            ctx->pc = 0x245000u;
            goto label_245000;
        }
    }
    ctx->pc = 0x244FECu;
label_244fec:
    // 0x244fec: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244ff0:
    // 0x244ff0: 0xc090d8a  jal         func_243628
label_244ff4:
    if (ctx->pc == 0x244FF4u) {
        ctx->pc = 0x244FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FF0u;
        // 0x244ff4: 0x2484c4a0  addiu       $a0, $a0, -0x3B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244FF8u;
        goto label_244ff8;
    }
    ctx->pc = 0x244FF0u;
    SET_GPR_U32(ctx, 31, 0x244FF8u);
    ctx->pc = 0x244FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FF0u;
    // 0x244ff4: 0x2484c4a0  addiu       $a0, $a0, -0x3B60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244FF0u, 0x244FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FF8u;
label_244ff8:
    // 0x244ff8: 0x1000000c  b           . + 4 + (0xC << 2)
label_244ffc:
    if (ctx->pc == 0x244FFCu) {
        ctx->pc = 0x244FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FF8u;
        // 0x244ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245000u;
        goto label_245000;
    }
    ctx->pc = 0x244FF8u;
    {
        const bool branch_taken_0x244ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FF8u;
        // 0x244ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ff8) {
            ctx->pc = 0x24502Cu;
            goto label_24502c;
        }
    }
    ctx->pc = 0x245000u;
label_245000:
    // 0x245000: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x245000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245004:
    // 0x245004: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x245004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_245008:
    // 0x245008: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_24500c:
    if (ctx->pc == 0x24500Cu) {
        ctx->pc = 0x24500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245008u;
        // 0x24500c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245010u;
        goto label_245010;
    }
    ctx->pc = 0x245008u;
    {
        const bool branch_taken_0x245008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245008) {
            ctx->pc = 0x24500Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245008u;
            // 0x24500c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245020u;
            goto label_245020;
        }
    }
    ctx->pc = 0x245010u;
label_245010:
    // 0x245010: 0x40f809  jalr        $v0
label_245014:
    if (ctx->pc == 0x245014u) {
        ctx->pc = 0x245014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245010u;
        // 0x245014: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245018u;
        goto label_245018;
    }
    ctx->pc = 0x245010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245018u);
        ctx->pc = 0x245014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245010u;
        // 0x245014: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245010u, 0x245018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245018u;
label_245018:
    // 0x245018: 0x10000003  b           . + 4 + (0x3 << 2)
label_24501c:
    if (ctx->pc == 0x24501Cu) {
        ctx->pc = 0x24501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245018u;
        // 0x24501c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245020u;
        goto label_245020;
    }
    ctx->pc = 0x245018u;
    {
        const bool branch_taken_0x245018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245018u;
        // 0x24501c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245018) {
            ctx->pc = 0x245028u;
            goto label_245028;
        }
    }
    ctx->pc = 0x245020u;
label_245020:
    // 0x245020: 0xc090d8a  jal         func_243628
label_245024:
    if (ctx->pc == 0x245024u) {
        ctx->pc = 0x245024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245020u;
        // 0x245024: 0x2484c4c0  addiu       $a0, $a0, -0x3B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245028u;
        goto label_245028;
    }
    ctx->pc = 0x245020u;
    SET_GPR_U32(ctx, 31, 0x245028u);
    ctx->pc = 0x245024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245020u;
    // 0x245024: 0x2484c4c0  addiu       $a0, $a0, -0x3B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x245020u, 0x245028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245028u;
label_245028:
    // 0x245028: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24502c:
    // 0x24502c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24502cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245030:
    // 0x245030: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x245030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_245034:
    // 0x245034: 0x3e00008  jr          $ra
label_245038:
    if (ctx->pc == 0x245038u) {
        ctx->pc = 0x245038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245034u;
        // 0x245038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24503Cu;
        goto label_fallthrough_0x245034;
    }
    ctx->pc = 0x245034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245034u;
        // 0x245038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245034:
    ctx->pc = 0x24503Cu;
}
