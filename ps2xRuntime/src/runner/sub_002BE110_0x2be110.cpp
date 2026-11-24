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

// Function: sub_002BE110
// Address: 0x2be110 - 0x2be1d0
void sub_002BE110_0x2be110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE110_0x2be110");
#endif

    switch (ctx->pc) {
        case 0x2be138u: goto label_2be138;
        default: break;
    }

    ctx->pc = 0x2be110u;

    // 0x2be110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2be110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2be114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2be114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2be118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2be118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2be11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2be120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2be124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be128: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x2be128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2be12c: 0x90d20001  lbu         $s2, 0x1($a2)
    ctx->pc = 0x2be12cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2be130: 0xc06039c  jal         func_180E70
    ctx->pc = 0x2BE130u;
    SET_GPR_U32(ctx, 31, 0x2BE138u);
    ctx->pc = 0x2BE134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE130u;
    // 0x2be134: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x2BE130u, 0x2BE138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE138u;
label_2be138:
    // 0x2be138: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x2be138u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2be13c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2be13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be140: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE140u;
    {
        const bool branch_taken_0x2be140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be140) {
            ctx->pc = 0x2BE150u;
            goto label_2be150;
        }
    }
    ctx->pc = 0x2BE148u;
    // 0x2be148: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE148u;
    {
        const bool branch_taken_0x2be148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE148u;
        // 0x2be14c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be148) {
            ctx->pc = 0x2BE158u;
            goto label_2be158;
        }
    }
    ctx->pc = 0x2BE150u;
label_2be150:
    // 0x2be150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2be150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be154: 0x0  nop
    ctx->pc = 0x2be154u;
    // NOP
label_2be158:
    // 0x2be158: 0x2429026  xor         $s2, $s2, $v0
    ctx->pc = 0x2be158u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x2be15c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE15Cu;
    {
        const bool branch_taken_0x2be15c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be15c) {
            ctx->pc = 0x2BE178u;
            goto label_2be178;
        }
    }
    ctx->pc = 0x2BE164u;
    // 0x2be164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2be164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be168: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2be168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2be16c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE16Cu;
    {
        const bool branch_taken_0x2be16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE16Cu;
        // 0x2be170: 0xa38389d4  sb          $v1, -0x762C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937044), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be16c) {
            ctx->pc = 0x2BE1B8u;
            goto label_2be1b8;
        }
    }
    ctx->pc = 0x2BE174u;
    // 0x2be174: 0x0  nop
    ctx->pc = 0x2be174u;
    // NOP
label_2be178:
    // 0x2be178: 0xa6230086  sh          $v1, 0x86($s1)
    ctx->pc = 0x2be178u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 134), (uint16_t)GPR_U32(ctx, 3));
    // 0x2be17c: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x2be17cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2be180: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2be180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x2be184: 0x24845098  addiu       $a0, $a0, 0x5098
    ctx->pc = 0x2be184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20632));
    // 0x2be188: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2be188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2be18c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2be18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be190: 0xa225005e  sb          $a1, 0x5E($s1)
    ctx->pc = 0x2be190u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 94), (uint8_t)GPR_U32(ctx, 5));
    // 0x2be194: 0xa6200022  sh          $zero, 0x22($s1)
    ctx->pc = 0x2be194u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x2be198: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2be198u;
    { uint32_t bits = FAST_READ32(0x4E5098u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be19c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2be19cu;
    { uint32_t bits = FAST_READ32(0x4E509Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be1a0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2be1a0u;
    { uint32_t bits = FAST_READ32(0x4E50A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be1a4: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2be1a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2be1a8: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2be1a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2be1ac: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2be1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2be1b0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2be1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2be1b4: 0x0  nop
    ctx->pc = 0x2be1b4u;
    // NOP
label_2be1b8:
    // 0x2be1b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2be1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be1bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2be1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be1c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1C8u;
        // 0x2be1cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE1D0u;
}
