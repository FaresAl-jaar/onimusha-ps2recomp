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

// Function: sub_002C2130
// Address: 0x2c2130 - 0x2c21ec
void sub_002C2130_0x2c2130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2130_0x2c2130");
#endif

    switch (ctx->pc) {
        case 0x2c21b8u: goto label_2c21b8;
        default: break;
    }

    ctx->pc = 0x2c2130u;

    // 0x2c2130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2138: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x2c2138u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2c213c: 0x93838a94  lbu         $v1, -0x756C($gp)
    ctx->pc = 0x2c213cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937236)));
    // 0x2c2140: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2c2140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c2144: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x2c2144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x2c2148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2148u;
    {
        const bool branch_taken_0x2c2148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2148u;
        // 0x2c214c: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2148) {
            ctx->pc = 0x2C2160u;
            goto label_2c2160;
        }
    }
    ctx->pc = 0x2C2150u;
    // 0x2c2150: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c2150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c2154: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c2154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c2158: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c2158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c215c: 0x0  nop
    ctx->pc = 0x2c215cu;
    // NOP
label_2c2160:
    // 0x2c2160: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C2160u;
    {
        const bool branch_taken_0x2c2160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2160) {
            ctx->pc = 0x2C21D8u;
            goto label_2c21d8;
        }
    }
    ctx->pc = 0x2C2168u;
    // 0x2c2168: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c2168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c216c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C216Cu;
    {
        const bool branch_taken_0x2c216c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C216Cu;
        // 0x2c2170: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c216c) {
            ctx->pc = 0x2C21C0u;
            goto label_2c21c0;
        }
    }
    ctx->pc = 0x2C2174u;
    // 0x2c2174: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2174u;
    {
        const bool branch_taken_0x2c2174 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2174u;
        // 0x2c2178: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2174) {
            ctx->pc = 0x2C21B0u;
            goto label_2c21b0;
        }
    }
    ctx->pc = 0x2C217Cu;
    // 0x2c217c: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c217cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c2180: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c2180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c2184: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c218c: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c218cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c2190: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c2190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2194: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c2194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2198: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c2198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c219c: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c219cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c21a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c21a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c21a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C21A8u;
    {
        const bool branch_taken_0x2c21a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21A8u;
        // 0x2c21ac: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21a8) {
            ctx->pc = 0x2C21D0u;
            goto label_2c21d0;
        }
    }
    ctx->pc = 0x2C21B0u;
label_2c21b0:
    // 0x2c21b0: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C21B0u;
    SET_GPR_U32(ctx, 31, 0x2C21B8u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C21B0u, 0x2C21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C21B8u;
label_2c21b8:
    // 0x2c21b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C21B8u;
    {
        const bool branch_taken_0x2c21b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c21b8) {
            ctx->pc = 0x2C21C8u;
            goto label_2c21c8;
        }
    }
    ctx->pc = 0x2C21C0u;
label_2c21c0:
    // 0x2c21c0: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c21c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c21c4: 0x0  nop
    ctx->pc = 0x2c21c4u;
    // NOP
label_2c21c8:
    // 0x2c21c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c21c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c21cc: 0x0  nop
    ctx->pc = 0x2c21ccu;
    // NOP
label_2c21d0:
    // 0x2c21d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C21D0u;
    {
        const bool branch_taken_0x2c21d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c21d0) {
            ctx->pc = 0x2C21E0u;
            goto label_2c21e0;
        }
    }
    ctx->pc = 0x2C21D8u;
label_2c21d8:
    // 0x2c21d8: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c21dc: 0x0  nop
    ctx->pc = 0x2c21dcu;
    // NOP
label_2c21e0:
    // 0x2c21e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c21e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c21e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C21E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21E4u;
        // 0x2c21e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C21E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C21ECu;
}
