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

// Function: sub_0024C020
// Address: 0x24c020 - 0x24c0ac
void sub_0024C020_0x24c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C020_0x24c020");
#endif

    switch (ctx->pc) {
        case 0x24c020u: goto label_24c020;
        case 0x24c024u: goto label_24c024;
        case 0x24c028u: goto label_24c028;
        case 0x24c02cu: goto label_24c02c;
        case 0x24c030u: goto label_24c030;
        case 0x24c034u: goto label_24c034;
        case 0x24c038u: goto label_24c038;
        case 0x24c03cu: goto label_24c03c;
        case 0x24c040u: goto label_24c040;
        case 0x24c044u: goto label_24c044;
        case 0x24c048u: goto label_24c048;
        case 0x24c04cu: goto label_24c04c;
        case 0x24c050u: goto label_24c050;
        case 0x24c054u: goto label_24c054;
        case 0x24c058u: goto label_24c058;
        case 0x24c05cu: goto label_24c05c;
        case 0x24c060u: goto label_24c060;
        case 0x24c064u: goto label_24c064;
        case 0x24c068u: goto label_24c068;
        case 0x24c06cu: goto label_24c06c;
        case 0x24c070u: goto label_24c070;
        case 0x24c074u: goto label_24c074;
        case 0x24c078u: goto label_24c078;
        case 0x24c07cu: goto label_24c07c;
        case 0x24c080u: goto label_24c080;
        case 0x24c084u: goto label_24c084;
        case 0x24c088u: goto label_24c088;
        case 0x24c08cu: goto label_24c08c;
        case 0x24c090u: goto label_24c090;
        case 0x24c094u: goto label_24c094;
        case 0x24c098u: goto label_24c098;
        case 0x24c09cu: goto label_24c09c;
        case 0x24c0a0u: goto label_24c0a0;
        case 0x24c0a4u: goto label_24c0a4;
        case 0x24c0a8u: goto label_24c0a8;
        default: break;
    }

    ctx->pc = 0x24c020u;

label_24c020:
    // 0x24c020: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_24c024:
    // 0x24c024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24c028:
    // 0x24c028: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x24c028u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
label_24c02c:
    // 0x24c02c: 0x26101260  addiu       $s0, $s0, 0x1260
    ctx->pc = 0x24c02cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4704));
label_24c030:
    // 0x24c030: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x24c030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
label_24c034:
    // 0x24c034: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x24c034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_24c038:
    // 0x24c038: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x24c038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_24c03c:
    // 0x24c03c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24c03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c040:
    // 0x24c040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c044:
    // 0x24c044: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24c048:
    // 0x24c048: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x24c048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
label_24c04c:
    // 0x24c04c: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x24c04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
label_24c050:
    // 0x24c050: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x24c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
label_24c054:
    // 0x24c054: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x24c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
label_24c058:
    // 0x24c058: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x24c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
label_24c05c:
    // 0x24c05c: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x24c05cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_24c060:
    // 0x24c060: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x24c060u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_24c064:
    // 0x24c064: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x24c064u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_24c068:
    // 0x24c068: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x24c068u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_24c06c:
    // 0x24c06c: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x24c06cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_24c070:
    // 0x24c070: 0xe7b1002c  swc1        $f17, 0x2C($sp)
    ctx->pc = 0x24c070u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_24c074:
    // 0x24c074: 0xe7b20030  swc1        $f18, 0x30($sp)
    ctx->pc = 0x24c074u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_24c078:
    // 0x24c078: 0xc04b012  jal         func_12C048
label_24c07c:
    if (ctx->pc == 0x24C07Cu) {
        ctx->pc = 0x24C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C078u;
        // 0x24c07c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C080u;
        goto label_24c080;
    }
    ctx->pc = 0x24C078u;
    SET_GPR_U32(ctx, 31, 0x24C080u);
    ctx->pc = 0x24C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C078u;
    // 0x24c07c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C048u, 0x24C078u, 0x24C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C080u;
label_24c080:
    // 0x24c080: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24c080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
label_24c084:
    // 0x24c084: 0x8c631258  lw          $v1, 0x1258($v1)
    ctx->pc = 0x24c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4696)));
label_24c088:
    // 0x24c088: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_24c08c:
    if (ctx->pc == 0x24C08Cu) {
        ctx->pc = 0x24C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C088u;
        // 0x24c08c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C090u;
        goto label_24c090;
    }
    ctx->pc = 0x24C088u;
    {
        const bool branch_taken_0x24c088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C088u;
        // 0x24c08c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c088) {
            ctx->pc = 0x24C09Cu;
            goto label_24c09c;
        }
    }
    ctx->pc = 0x24C090u;
label_24c090:
    // 0x24c090: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24c090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24c094:
    // 0x24c094: 0x60f809  jalr        $v1
label_24c098:
    if (ctx->pc == 0x24C098u) {
        ctx->pc = 0x24C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C094u;
        // 0x24c098: 0x8c44125c  lw          $a0, 0x125C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C09Cu;
        goto label_24c09c;
    }
    ctx->pc = 0x24C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24C09Cu);
        ctx->pc = 0x24C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C094u;
        // 0x24c098: 0x8c44125c  lw          $a0, 0x125C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4700)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C094u, 0x24C09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C09Cu;
label_24c09c:
    // 0x24c09c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c0a0:
    // 0x24c0a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24c0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24c0a4:
    // 0x24c0a4: 0x3e00008  jr          $ra
label_24c0a8:
    if (ctx->pc == 0x24C0A8u) {
        ctx->pc = 0x24C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0A4u;
        // 0x24c0a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C0ACu;
        goto label_fallthrough_0x24c0a4;
    }
    ctx->pc = 0x24C0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0A4u;
        // 0x24c0a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24c0a4:
    ctx->pc = 0x24C0ACu;
}
