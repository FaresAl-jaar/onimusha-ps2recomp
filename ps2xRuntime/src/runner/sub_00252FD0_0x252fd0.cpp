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

// Function: sub_00252FD0
// Address: 0x252fd0 - 0x253078
void sub_00252FD0_0x252fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252FD0_0x252fd0");
#endif

    switch (ctx->pc) {
        case 0x252fd0u: goto label_252fd0;
        case 0x252fd4u: goto label_252fd4;
        case 0x252fd8u: goto label_252fd8;
        case 0x252fdcu: goto label_252fdc;
        case 0x252fe0u: goto label_252fe0;
        case 0x252fe4u: goto label_252fe4;
        case 0x252fe8u: goto label_252fe8;
        case 0x252fecu: goto label_252fec;
        case 0x252ff0u: goto label_252ff0;
        case 0x252ff4u: goto label_252ff4;
        case 0x252ff8u: goto label_252ff8;
        case 0x252ffcu: goto label_252ffc;
        case 0x253000u: goto label_253000;
        case 0x253004u: goto label_253004;
        case 0x253008u: goto label_253008;
        case 0x25300cu: goto label_25300c;
        case 0x253010u: goto label_253010;
        case 0x253014u: goto label_253014;
        case 0x253018u: goto label_253018;
        case 0x25301cu: goto label_25301c;
        case 0x253020u: goto label_253020;
        case 0x253024u: goto label_253024;
        case 0x253028u: goto label_253028;
        case 0x25302cu: goto label_25302c;
        case 0x253030u: goto label_253030;
        case 0x253034u: goto label_253034;
        case 0x253038u: goto label_253038;
        case 0x25303cu: goto label_25303c;
        case 0x253040u: goto label_253040;
        case 0x253044u: goto label_253044;
        case 0x253048u: goto label_253048;
        case 0x25304cu: goto label_25304c;
        case 0x253050u: goto label_253050;
        case 0x253054u: goto label_253054;
        case 0x253058u: goto label_253058;
        case 0x25305cu: goto label_25305c;
        case 0x253060u: goto label_253060;
        case 0x253064u: goto label_253064;
        case 0x253068u: goto label_253068;
        case 0x25306cu: goto label_25306c;
        case 0x253070u: goto label_253070;
        case 0x253074u: goto label_253074;
        default: break;
    }

    ctx->pc = 0x252fd0u;

label_252fd0:
    // 0x252fd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x252fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_252fd4:
    // 0x252fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_252fd8:
    // 0x252fd8: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x252fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
label_252fdc:
    // 0x252fdc: 0x26100758  addiu       $s0, $s0, 0x758
    ctx->pc = 0x252fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1880));
label_252fe0:
    // 0x252fe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x252fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_252fe4:
    // 0x252fe4: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x252fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
label_252fe8:
    // 0x252fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252fec:
    // 0x252fec: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x252fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
label_252ff0:
    // 0x252ff0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x252ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_252ff4:
    // 0x252ff4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_252ff8:
    // 0x252ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252ffc:
    // 0x252ffc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_253000:
    // 0x253000: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x253000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
label_253004:
    // 0x253004: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x253004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
label_253008:
    // 0x253008: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x253008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
label_25300c:
    // 0x25300c: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x25300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
label_253010:
    // 0x253010: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x253010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
label_253014:
    // 0x253014: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x253014u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_253018:
    // 0x253018: 0xe7ad002c  swc1        $f13, 0x2C($sp)
    ctx->pc = 0x253018u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_25301c:
    // 0x25301c: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x25301cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_253020:
    // 0x253020: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x253020u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_253024:
    // 0x253024: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x253024u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_253028:
    // 0x253028: 0xe7b1003c  swc1        $f17, 0x3C($sp)
    ctx->pc = 0x253028u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_25302c:
    // 0x25302c: 0xe7b20040  swc1        $f18, 0x40($sp)
    ctx->pc = 0x25302cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_253030:
    // 0x253030: 0xc049590  jal         func_125640
label_253034:
    if (ctx->pc == 0x253034u) {
        ctx->pc = 0x253034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253030u;
        // 0x253034: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253038u;
        goto label_253038;
    }
    ctx->pc = 0x253030u;
    SET_GPR_U32(ctx, 31, 0x253038u);
    ctx->pc = 0x253034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253030u;
    // 0x253034: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x253030u, 0x253038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253038u;
label_253038:
    // 0x253038: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x253038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_25303c:
    // 0x25303c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25303cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_253040:
    // 0x253040: 0xc04b012  jal         func_12C048
label_253044:
    if (ctx->pc == 0x253044u) {
        ctx->pc = 0x253044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253040u;
        // 0x253044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253048u;
        goto label_253048;
    }
    ctx->pc = 0x253040u;
    SET_GPR_U32(ctx, 31, 0x253048u);
    ctx->pc = 0x253044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253040u;
    // 0x253044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C048u, 0x253040u, 0x253048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253048u;
label_253048:
    // 0x253048: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x253048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_25304c:
    // 0x25304c: 0x24428970  addiu       $v0, $v0, -0x7690
    ctx->pc = 0x25304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936944));
label_253050:
    // 0x253050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_253054:
    // 0x253054: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_253058:
    if (ctx->pc == 0x253058u) {
        ctx->pc = 0x253058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253054u;
        // 0x253058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25305Cu;
        goto label_25305c;
    }
    ctx->pc = 0x253054u;
    {
        const bool branch_taken_0x253054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x253058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253054u;
        // 0x253058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253054) {
            ctx->pc = 0x253064u;
            goto label_253064;
        }
    }
    ctx->pc = 0x25305Cu;
label_25305c:
    // 0x25305c: 0x60f809  jalr        $v1
label_253060:
    if (ctx->pc == 0x253060u) {
        ctx->pc = 0x253060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25305Cu;
        // 0x253060: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253064u;
        goto label_253064;
    }
    ctx->pc = 0x25305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x253064u);
        ctx->pc = 0x253060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25305Cu;
        // 0x253060: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25305Cu, 0x253064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253064u;
label_253064:
    // 0x253064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253068:
    // 0x253068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_25306c:
    // 0x25306c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25306cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_253070:
    // 0x253070: 0x3e00008  jr          $ra
label_253074:
    if (ctx->pc == 0x253074u) {
        ctx->pc = 0x253074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253070u;
        // 0x253074: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253078u;
        goto label_fallthrough_0x253070;
    }
    ctx->pc = 0x253070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253070u;
        // 0x253074: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x253070:
    ctx->pc = 0x253078u;
}
