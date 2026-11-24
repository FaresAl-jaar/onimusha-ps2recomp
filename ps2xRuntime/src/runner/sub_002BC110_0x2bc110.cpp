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

// Function: sub_002BC110
// Address: 0x2bc110 - 0x2bc220
void sub_002BC110_0x2bc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC110_0x2bc110");
#endif

    ctx->pc = 0x2bc110u;

    // 0x2bc110: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2bc110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2bc114: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC114u;
    {
        const bool branch_taken_0x2bc114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc114) {
            ctx->pc = 0x2BC130u;
            goto label_2bc130;
        }
    }
    ctx->pc = 0x2BC11Cu;
    // 0x2bc11c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bc120: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2bc120u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bc124: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2bc124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc128: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2BC128u;
    {
        const bool branch_taken_0x2bc128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc128) {
            ctx->pc = 0x2BC1F0u;
            goto label_2bc1f0;
        }
    }
    ctx->pc = 0x2BC130u;
label_2bc130:
    // 0x2bc130: 0x90830046  lbu         $v1, 0x46($a0)
    ctx->pc = 0x2bc130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x2bc134: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2bc134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bc138: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC138u;
    {
        const bool branch_taken_0x2bc138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc138) {
            ctx->pc = 0x2BC150u;
            goto label_2bc150;
        }
    }
    ctx->pc = 0x2BC140u;
    // 0x2bc140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bc140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bc144: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BC144u;
    {
        const bool branch_taken_0x2bc144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC144u;
        // 0x2bc148: 0xa0830046  sb          $v1, 0x46($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc144) {
            ctx->pc = 0x2BC170u;
            goto label_2bc170;
        }
    }
    ctx->pc = 0x2BC14Cu;
    // 0x2bc14c: 0x0  nop
    ctx->pc = 0x2bc14cu;
    // NOP
label_2bc150:
    // 0x2bc150: 0x8ca306ac  lw          $v1, 0x6AC($a1)
    ctx->pc = 0x2bc150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1708)));
    // 0x2bc154: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2bc154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2bc158: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BC158u;
    {
        const bool branch_taken_0x2bc158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc158) {
            ctx->pc = 0x2BC1F0u;
            goto label_2bc1f0;
        }
    }
    ctx->pc = 0x2BC160u;
    // 0x2bc160: 0x94830020  lhu         $v1, 0x20($a0)
    ctx->pc = 0x2bc160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bc164: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2bc164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2bc168: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2BC168u;
    {
        const bool branch_taken_0x2bc168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc168) {
            ctx->pc = 0x2BC1F0u;
            goto label_2bc1f0;
        }
    }
    ctx->pc = 0x2BC170u;
label_2bc170:
    // 0x2bc170: 0x84860086  lh          $a2, 0x86($a0)
    ctx->pc = 0x2bc170u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 134)));
    // 0x2bc174: 0x84a300c2  lh          $v1, 0xC2($a1)
    ctx->pc = 0x2bc174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 194)));
    // 0x2bc178: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2bc178u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2bc17c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC17Cu;
    {
        const bool branch_taken_0x2bc17c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2bc17c) {
            ctx->pc = 0x2BC188u;
            goto label_2bc188;
        }
    }
    ctx->pc = 0x2BC184u;
    // 0x2bc184: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2bc184u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2bc188:
    // 0x2bc188: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2bc188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2bc18c: 0x84830084  lh          $v1, 0x84($a0)
    ctx->pc = 0x2bc18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2bc190: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2bc190u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2bc194: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2bc194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bc198: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BC198u;
    {
        const bool branch_taken_0x2bc198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc198) {
            ctx->pc = 0x2BC1F0u;
            goto label_2bc1f0;
        }
    }
    ctx->pc = 0x2BC1A0u;
    // 0x2bc1a0: 0xa0a004ee  sb          $zero, 0x4EE($a1)
    ctx->pc = 0x2bc1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1262), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc1a4: 0x28c10401  slti        $at, $a2, 0x401
    ctx->pc = 0x2bc1a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2bc1a8: 0x84830086  lh          $v1, 0x86($a0)
    ctx->pc = 0x2bc1a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 134)));
    // 0x2bc1ac: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC1ACu;
    {
        const bool branch_taken_0x2bc1ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1ACu;
        // 0x2bc1b0: 0xa4a304ec  sh          $v1, 0x4EC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1ac) {
            ctx->pc = 0x2BC1D0u;
            goto label_2bc1d0;
        }
    }
    ctx->pc = 0x2BC1B4u;
    // 0x2bc1b4: 0xdca40500  ld          $a0, 0x500($a1)
    ctx->pc = 0x2bc1b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2bc1b8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2bc1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2bc1bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2bc1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2bc1c0: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2bc1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2bc1c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2bc1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2bc1c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC1C8u;
    {
        const bool branch_taken_0x2bc1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1C8u;
        // 0x2bc1cc: 0xfca30500  sd          $v1, 0x500($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1c8) {
            ctx->pc = 0x2BC1E8u;
            goto label_2bc1e8;
        }
    }
    ctx->pc = 0x2BC1D0u;
label_2bc1d0:
    // 0x2bc1d0: 0xdca40500  ld          $a0, 0x500($a1)
    ctx->pc = 0x2bc1d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2bc1d4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bc1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2bc1d8: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2bc1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2bc1dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2bc1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2bc1e0: 0xfca30500  sd          $v1, 0x500($a1)
    ctx->pc = 0x2bc1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 3));
    // 0x2bc1e4: 0x0  nop
    ctx->pc = 0x2bc1e4u;
    // NOP
label_2bc1e8:
    // 0x2bc1e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BC1E8u;
    {
        const bool branch_taken_0x2bc1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc1e8) {
            ctx->pc = 0x2BC218u;
            goto label_2bc218;
        }
    }
    ctx->pc = 0x2BC1F0u;
label_2bc1f0:
    // 0x2bc1f0: 0xdca30500  ld          $v1, 0x500($a1)
    ctx->pc = 0x2bc1f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2bc1f4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2bc1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2bc1f8: 0xfca30500  sd          $v1, 0x500($a1)
    ctx->pc = 0x2bc1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 3));
    // 0x2bc1fc: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2bc1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc200: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2bc200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc204: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2bc204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc208: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bc208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bc20c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bc20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bc210: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bc210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2bc214: 0x0  nop
    ctx->pc = 0x2bc214u;
    // NOP
label_2bc218:
    // 0x2bc218: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC220u;
}
