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

// Function: sub_002BB0F0
// Address: 0x2bb0f0 - 0x2bb238
void sub_002BB0F0_0x2bb0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB0F0_0x2bb0f0");
#endif

    switch (ctx->pc) {
        case 0x2bb150u: goto label_2bb150;
        case 0x2bb168u: goto label_2bb168;
        case 0x2bb184u: goto label_2bb184;
        case 0x2bb198u: goto label_2bb198;
        case 0x2bb200u: goto label_2bb200;
        default: break;
    }

    ctx->pc = 0x2bb0f0u;

    // 0x2bb0f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bb0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bb0f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bb0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bb0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bb0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bb0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bb100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb104: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bb104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb108: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2bb108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2bb10c: 0x9085005e  lbu         $a1, 0x5E($a0)
    ctx->pc = 0x2bb10cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 94)));
    // 0x2bb110: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BB110u;
    {
        const bool branch_taken_0x2bb110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB110u;
        // 0x2bb114: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb110) {
            ctx->pc = 0x2BB140u;
            goto label_2bb140;
        }
    }
    ctx->pc = 0x2BB118u;
    // 0x2bb118: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bb118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bb11c: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x2bb11cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bb120: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2bb120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bb124: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB124u;
    {
        const bool branch_taken_0x2bb124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb124) {
            ctx->pc = 0x2BB140u;
            goto label_2bb140;
        }
    }
    ctx->pc = 0x2BB12Cu;
    // 0x2bb12c: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x2bb12cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2bb130: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2bb130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2bb134: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2BB134u;
    {
        const bool branch_taken_0x2bb134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB134u;
        // 0x2bb138: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb134) {
            ctx->pc = 0x2BB1A8u;
            goto label_2bb1a8;
        }
    }
    ctx->pc = 0x2BB13Cu;
    // 0x2bb13c: 0x0  nop
    ctx->pc = 0x2bb13cu;
    // NOP
label_2bb140:
    // 0x2bb140: 0x82260082  lb          $a2, 0x82($s1)
    ctx->pc = 0x2bb140u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
    // 0x2bb144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb148: 0xc0b22ac  jal         func_2C8AB0
    ctx->pc = 0x2BB148u;
    SET_GPR_U32(ctx, 31, 0x2BB150u);
    ctx->pc = 0x2BB14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB148u;
    // 0x2bb14c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8AB0u, 0x2BB148u, 0x2BB150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB150u;
label_2bb150:
    // 0x2bb150: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bb150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb154: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BB154u;
    {
        const bool branch_taken_0x2bb154 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB154u;
        // 0x2bb158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb154) {
            ctx->pc = 0x2BB1A0u;
            goto label_2bb1a0;
        }
    }
    ctx->pc = 0x2BB15Cu;
    // 0x2bb15c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb160: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2BB160u;
    SET_GPR_U32(ctx, 31, 0x2BB168u);
    ctx->pc = 0x2BB164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB160u;
    // 0x2bb164: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2BB160u, 0x2BB168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB168u;
label_2bb168:
    // 0x2bb168: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x2bb168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb16c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bb16cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb170: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2BB170u;
    {
        const bool branch_taken_0x2bb170 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB170u;
        // 0x2bb174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb170) {
            ctx->pc = 0x2BB1A0u;
            goto label_2bb1a0;
        }
    }
    ctx->pc = 0x2BB178u;
    // 0x2bb178: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bb178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb17c: 0xc0b2288  jal         func_2C8A20
    ctx->pc = 0x2BB17Cu;
    SET_GPR_U32(ctx, 31, 0x2BB184u);
    ctx->pc = 0x2BB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB17Cu;
    // 0x2bb180: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A20u, 0x2BB17Cu, 0x2BB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB184u;
label_2bb184:
    // 0x2bb184: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2bb184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bb188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bb188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb190: 0xc0b25e8  jal         func_2C97A0
    ctx->pc = 0x2BB190u;
    SET_GPR_U32(ctx, 31, 0x2BB198u);
    ctx->pc = 0x2BB194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB190u;
    // 0x2bb194: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C97A0u, 0x2BB190u, 0x2BB198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB198u;
label_2bb198:
    // 0x2bb198: 0xa62200e4  sh          $v0, 0xE4($s1)
    ctx->pc = 0x2bb198u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bb19c: 0x0  nop
    ctx->pc = 0x2bb19cu;
    // NOP
label_2bb1a0:
    // 0x2bb1a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2BB1A0u;
    {
        const bool branch_taken_0x2bb1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb1a0) {
            ctx->pc = 0x2BB220u;
            goto label_2bb220;
        }
    }
    ctx->pc = 0x2BB1A8u;
label_2bb1a8:
    // 0x2bb1a8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BB1A8u;
    {
        const bool branch_taken_0x2bb1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb1a8) {
            ctx->pc = 0x2BB208u;
            goto label_2bb208;
        }
    }
    ctx->pc = 0x2BB1B0u;
    // 0x2bb1b0: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x2bb1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb1b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bb1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb1bc: 0x0  nop
    ctx->pc = 0x2bb1bcu;
    // NOP
    // 0x2bb1c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bb1c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb1c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB1C4u;
    {
        const bool branch_taken_0x2bb1c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb1c4) {
            ctx->pc = 0x2BB1DCu;
            goto label_2bb1dc;
        }
    }
    ctx->pc = 0x2BB1CCu;
    // 0x2bb1cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bb1ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bb1d0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2bb1d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2bb1d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB1D4u;
    {
        const bool branch_taken_0x2bb1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1D4u;
        // 0x2bb1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1d4) {
            ctx->pc = 0x2BB1F8u;
            goto label_2bb1f8;
        }
    }
    ctx->pc = 0x2BB1DCu;
label_2bb1dc:
    // 0x2bb1dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bb1dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bb1e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bb1e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bb1e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bb1e8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2bb1e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2bb1ec: 0x0  nop
    ctx->pc = 0x2bb1ecu;
    // NOP
    // 0x2bb1f0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2bb1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2bb1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1f8:
    // 0x2bb1f8: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2BB1F8u;
    SET_GPR_U32(ctx, 31, 0x2BB200u);
    ctx->pc = 0x2BB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB1F8u;
    // 0x2bb1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2BB1F8u, 0x2BB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB200u;
label_2bb200:
    // 0x2bb200: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB200u;
    {
        const bool branch_taken_0x2bb200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb200) {
            ctx->pc = 0x2BB220u;
            goto label_2bb220;
        }
    }
    ctx->pc = 0x2BB208u;
label_2bb208:
    // 0x2bb208: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2bb208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb20c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2bb20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb210: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2bb210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb214: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2bb214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2bb218: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2bb218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2bb21c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2bb21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2bb220:
    // 0x2bb220: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bb220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb22c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb230: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB230u;
        // 0x2bb234: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB238u;
}
