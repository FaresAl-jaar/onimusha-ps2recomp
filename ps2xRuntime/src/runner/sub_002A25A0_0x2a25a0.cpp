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

// Function: sub_002A25A0
// Address: 0x2a25a0 - 0x2a29a0
void sub_002A25A0_0x2a25a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A25A0_0x2a25a0");
#endif

    switch (ctx->pc) {
        case 0x2a2608u: goto label_2a2608;
        case 0x2a26e8u: goto label_2a26e8;
        case 0x2a2730u: goto label_2a2730;
        case 0x2a2748u: goto label_2a2748;
        case 0x2a2764u: goto label_2a2764;
        case 0x2a27b8u: goto label_2a27b8;
        case 0x2a27d8u: goto label_2a27d8;
        case 0x2a2808u: goto label_2a2808;
        case 0x2a2820u: goto label_2a2820;
        case 0x2a2858u: goto label_2a2858;
        case 0x2a2870u: goto label_2a2870;
        case 0x2a2884u: goto label_2a2884;
        case 0x2a28b8u: goto label_2a28b8;
        case 0x2a28e4u: goto label_2a28e4;
        case 0x2a28f8u: goto label_2a28f8;
        case 0x2a290cu: goto label_2a290c;
        default: break;
    }

    ctx->pc = 0x2a25a0u;

    // 0x2a25a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a25a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a25a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a25a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a25a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a25a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a25ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a25acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a25b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a25b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a25b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a25b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a25b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a25bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2a25bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a25c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a25c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a25c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a25c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a25c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a25cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a25ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a25d0: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x2a25d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a25d4: 0x8c850078  lw          $a1, 0x78($a0)
    ctx->pc = 0x2a25d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a25d8: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2a25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a25dc: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2a25dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a25e0: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2a25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2a25e4: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2a25e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a25e8: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x2a25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a25ec: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2a25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2a25f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a25f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a25f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a25f8: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a25fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2a25fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a2600: 0x24930010  addiu       $s3, $a0, 0x10
    ctx->pc = 0x2a2600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2a2604: 0x0  nop
    ctx->pc = 0x2a2604u;
    // NOP
label_2a2608:
    // 0x2a2608: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2a2608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2a260c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A260Cu;
    {
        const bool branch_taken_0x2a260c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A260Cu;
        // 0x2a2610: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a260c) {
            ctx->pc = 0x2A2628u;
            goto label_2a2628;
        }
    }
    ctx->pc = 0x2A2614u;
    // 0x2a2614: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a2614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a2618: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x2a2618u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
    // 0x2a261c: 0x34424040  ori         $v0, $v0, 0x4040
    ctx->pc = 0x2a261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x2a2620: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2A2620u;
    {
        const bool branch_taken_0x2a2620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2620u;
        // 0x2a2624: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2620) {
            ctx->pc = 0x2A2680u;
            goto label_2a2680;
        }
    }
    ctx->pc = 0x2A2628u;
label_2a2628:
    // 0x2a2628: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x2a2628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2a262c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A262Cu;
    {
        const bool branch_taken_0x2a262c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2A2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A262Cu;
        // 0x2a2630: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a262c) {
            ctx->pc = 0x2A2640u;
            goto label_2a2640;
        }
    }
    ctx->pc = 0x2A2634u;
    // 0x2a2634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2638: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2638u;
    {
        const bool branch_taken_0x2a2638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2638u;
        // 0x2a263c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2638) {
            ctx->pc = 0x2A2658u;
            goto label_2a2658;
        }
    }
    ctx->pc = 0x2A2640u;
label_2a2640:
    // 0x2a2640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a2644: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a2644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a2648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a264c: 0x0  nop
    ctx->pc = 0x2a264cu;
    // NOP
    // 0x2a2650: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a2650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a2654: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a2654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a2658:
    // 0x2a2658: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2a2658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2a265c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a265cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2660: 0x0  nop
    ctx->pc = 0x2a2660u;
    // NOP
    // 0x2a2664: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a2664u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a2668: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x2a2668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x2a266c: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2a266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2a2670: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x2a2670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x2a2674: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x2a2674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x2a2678: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x2a2678u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x2a267c: 0x0  nop
    ctx->pc = 0x2a267cu;
    // NOP
label_2a2680:
    // 0x2a2680: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x2a2680u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x2a2684: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2a2684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2a2688: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2a2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a268c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A268Cu;
    {
        const bool branch_taken_0x2a268c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a268c) {
            ctx->pc = 0x2A26B0u;
            goto label_2a26b0;
        }
    }
    ctx->pc = 0x2A2694u;
    // 0x2a2694: 0x8c42fff8  lw          $v0, -0x8($v0)
    ctx->pc = 0x2a2694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x2a2698: 0xa68200dc  sh          $v0, 0xDC($s4)
    ctx->pc = 0x2a2698u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 220), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a269c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2a269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2a26a0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2a26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a26a4: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x2a26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2a26a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A26A8u;
    {
        const bool branch_taken_0x2a26a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26A8u;
        // 0x2a26ac: 0xae8200e0  sw          $v0, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26a8) {
            ctx->pc = 0x2A26B8u;
            goto label_2a26b8;
        }
    }
    ctx->pc = 0x2A26B0u;
label_2a26b0:
    // 0x2a26b0: 0xa68000dc  sh          $zero, 0xDC($s4)
    ctx->pc = 0x2a26b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a26b4: 0xae8000e0  sw          $zero, 0xE0($s4)
    ctx->pc = 0x2a26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
label_2a26b8:
    // 0x2a26b8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2a26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a26bc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2a26bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2a26c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A26C0u;
    {
        const bool branch_taken_0x2a26c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a26c0) {
            ctx->pc = 0x2A26E8u;
            goto label_2a26e8;
        }
    }
    ctx->pc = 0x2A26C8u;
    // 0x2a26c8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2a26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a26cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a26ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a26d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26d4: 0x3406ffdf  ori         $a2, $zero, 0xFFDF
    ctx->pc = 0x2a26d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x2a26d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a26d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26dc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2a26dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2a26e0: 0xc0a8714  jal         func_2A1C50
    ctx->pc = 0x2A26E0u;
    SET_GPR_U32(ctx, 31, 0x2A26E8u);
    ctx->pc = 0x2A26E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26E0u;
    // 0x2a26e4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1C50u, 0x2A26E0u, 0x2A26E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26E8u;
label_2a26e8:
    // 0x2a26e8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x2a26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a26ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2a26ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a26f0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A26F0u;
    {
        const bool branch_taken_0x2a26f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26F0u;
        // 0x2a26f4: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26f0) {
            ctx->pc = 0x2A2748u;
            goto label_2a2748;
        }
    }
    ctx->pc = 0x2A26F8u;
    // 0x2a26f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A26F8u;
    {
        const bool branch_taken_0x2a26f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a26f8) {
            ctx->pc = 0x2A2738u;
            goto label_2a2738;
        }
    }
    ctx->pc = 0x2A2700u;
    // 0x2a2700: 0x96620026  lhu         $v0, 0x26($s3)
    ctx->pc = 0x2a2700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x2a2704: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a2704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2708: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a2708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a270c: 0x3043ff00  andi        $v1, $v0, 0xFF00
    ctx->pc = 0x2a270cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2a2710: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a2710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2714: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a2714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a2718: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a2718u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a271c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2720: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a2720u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a2724: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a2724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a2728: 0xc0a85cc  jal         func_2A1730
    ctx->pc = 0x2A2728u;
    SET_GPR_U32(ctx, 31, 0x2A2730u);
    ctx->pc = 0x2A272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2728u;
    // 0x2a272c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1730u, 0x2A2728u, 0x2A2730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2730u;
label_2a2730:
    // 0x2a2730: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2730u;
    {
        const bool branch_taken_0x2a2730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2730) {
            ctx->pc = 0x2A2748u;
            goto label_2a2748;
        }
    }
    ctx->pc = 0x2A2738u;
label_2a2738:
    // 0x2a2738: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a2738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a273c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a273cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2740: 0xc0a85cc  jal         func_2A1730
    ctx->pc = 0x2A2740u;
    SET_GPR_U32(ctx, 31, 0x2A2748u);
    ctx->pc = 0x2A2744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2740u;
    // 0x2a2744: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1730u, 0x2A2740u, 0x2A2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2748u;
label_2a2748:
    // 0x2a2748: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2a2748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a274c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a2750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2750u;
    {
        const bool branch_taken_0x2a2750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2750u;
        // 0x2a2754: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2750) {
            ctx->pc = 0x2A2768u;
            goto label_2a2768;
        }
    }
    ctx->pc = 0x2A2758u;
    // 0x2a2758: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a2758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a275c: 0xc0a86e0  jal         func_2A1B80
    ctx->pc = 0x2A275Cu;
    SET_GPR_U32(ctx, 31, 0x2A2764u);
    ctx->pc = 0x2A2760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A275Cu;
    // 0x2a2760: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1B80u, 0x2A275Cu, 0x2A2764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2764u;
label_2a2764:
    // 0x2a2764: 0x0  nop
    ctx->pc = 0x2a2764u;
    // NOP
label_2a2768:
    // 0x2a2768: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2a2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a276c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2a276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2a2770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2770u;
    {
        const bool branch_taken_0x2a2770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2770) {
            ctx->pc = 0x2A2788u;
            goto label_2a2788;
        }
    }
    ctx->pc = 0x2A2778u;
    // 0x2a2778: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2a2778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a277c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2a277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2a2780: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2a2780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2a2784: 0x0  nop
    ctx->pc = 0x2a2784u;
    // NOP
label_2a2788:
    // 0x2a2788: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2a2788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a278c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2a278cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2a2790: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2790u;
    {
        const bool branch_taken_0x2a2790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2790) {
            ctx->pc = 0x2A27B8u;
            goto label_2a27b8;
        }
    }
    ctx->pc = 0x2A2798u;
    // 0x2a2798: 0x92660028  lbu         $a2, 0x28($s3)
    ctx->pc = 0x2a2798u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2a279c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2a279cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2a27a0: 0x92670029  lbu         $a3, 0x29($s3)
    ctx->pc = 0x2a27a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x2a27a4: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x2a27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x2a27a8: 0x9668002a  lhu         $t0, 0x2A($s3)
    ctx->pc = 0x2a27a8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
    // 0x2a27ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a27acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27b0: 0xc04c18c  jal         func_130630
    ctx->pc = 0x2A27B0u;
    SET_GPR_U32(ctx, 31, 0x2A27B8u);
    ctx->pc = 0x2A27B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27B0u;
    // 0x2a27b4: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130630u, 0x2A27B0u, 0x2A27B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27B8u;
label_2a27b8:
    // 0x2a27b8: 0x92660036  lbu         $a2, 0x36($s3)
    ctx->pc = 0x2a27b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x2a27bc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A27BCu;
    {
        const bool branch_taken_0x2a27bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a27bc) {
            ctx->pc = 0x2A27D8u;
            goto label_2a27d8;
        }
    }
    ctx->pc = 0x2A27C4u;
    // 0x2a27c4: 0x92670037  lbu         $a3, 0x37($s3)
    ctx->pc = 0x2a27c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2a27c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a27c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27cc: 0x92680038  lbu         $t0, 0x38($s3)
    ctx->pc = 0x2a27ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2a27d0: 0xc0a87d4  jal         func_2A1F50
    ctx->pc = 0x2A27D0u;
    SET_GPR_U32(ctx, 31, 0x2A27D8u);
    ctx->pc = 0x2A27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27D0u;
    // 0x2a27d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F50u, 0x2A27D0u, 0x2A27D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27D8u;
label_2a27d8:
    // 0x2a27d8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2a27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2a27dc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2a27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a27e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A27E0u;
    {
        const bool branch_taken_0x2a27e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a27e0) {
            ctx->pc = 0x2A2828u;
            goto label_2a2828;
        }
    }
    ctx->pc = 0x2A27E8u;
    // 0x2a27e8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2a27e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a27ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a27f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a27f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a27f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A27F4u;
    {
        const bool branch_taken_0x2a27f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27F4u;
        // 0x2a27f8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27f4) {
            ctx->pc = 0x2A2810u;
            goto label_2a2810;
        }
    }
    ctx->pc = 0x2A27FCu;
    // 0x2a27fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a27fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2800: 0xc0a892c  jal         func_2A24B0
    ctx->pc = 0x2A2800u;
    SET_GPR_U32(ctx, 31, 0x2A2808u);
    ctx->pc = 0x2A2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2800u;
    // 0x2a2804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A24B0u, 0x2A2800u, 0x2A2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2808u;
label_2a2808:
    // 0x2a2808: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a2808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a280c: 0x0  nop
    ctx->pc = 0x2a280cu;
    // NOP
label_2a2810:
    // 0x2a2810: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a2810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2814: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a2814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2818: 0xc0a87f0  jal         func_2A1FC0
    ctx->pc = 0x2A2818u;
    SET_GPR_U32(ctx, 31, 0x2A2820u);
    ctx->pc = 0x2A281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2818u;
    // 0x2a281c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1FC0u, 0x2A2818u, 0x2A2820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2820u;
label_2a2820:
    // 0x2a2820: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a2820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2824: 0x0  nop
    ctx->pc = 0x2a2824u;
    // NOP
label_2a2828:
    // 0x2a2828: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2a2828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a282c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2a282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2a2830: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2A2830u;
    {
        const bool branch_taken_0x2a2830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2830) {
            ctx->pc = 0x2A28B8u;
            goto label_2a28b8;
        }
    }
    ctx->pc = 0x2A2838u;
    // 0x2a2838: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2a2838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a283c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a283cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a2840: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2844: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2844u;
    {
        const bool branch_taken_0x2a2844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2844u;
        // 0x2a2848: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2844) {
            ctx->pc = 0x2A2860u;
            goto label_2a2860;
        }
    }
    ctx->pc = 0x2A284Cu;
    // 0x2a284c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2850: 0xc0a892c  jal         func_2A24B0
    ctx->pc = 0x2A2850u;
    SET_GPR_U32(ctx, 31, 0x2A2858u);
    ctx->pc = 0x2A2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2850u;
    // 0x2a2854: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A24B0u, 0x2A2850u, 0x2A2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2858u;
label_2a2858:
    // 0x2a2858: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a2858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a285c: 0x0  nop
    ctx->pc = 0x2a285cu;
    // NOP
label_2a2860:
    // 0x2a2860: 0x92970001  lbu         $s7, 0x1($s4)
    ctx->pc = 0x2a2860u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x2a2864: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a2864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2868: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a2868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a286c: 0x0  nop
    ctx->pc = 0x2a286cu;
    // NOP
label_2a2870:
    // 0x2a2870: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2a2870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2a2874: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a2874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2878: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a2878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a287c: 0xc0a8a68  jal         func_2A29A0
    ctx->pc = 0x2A287Cu;
    SET_GPR_U32(ctx, 31, 0x2A2884u);
    ctx->pc = 0x2A2880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A287Cu;
    // 0x2a2880: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A29A0u, 0x2A287Cu, 0x2A2884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2884u;
label_2a2884:
    // 0x2a2884: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a2884u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a288c: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x2a288cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2a2890: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A2890u;
    {
        const bool branch_taken_0x2a2890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2890u;
        // 0x2a2894: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2890) {
            ctx->pc = 0x2A2870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2870;
        }
    }
    ctx->pc = 0x2A2898u;
    // 0x2a2898: 0x92660035  lbu         $a2, 0x35($s3)
    ctx->pc = 0x2a2898u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 53)));
    // 0x2a289c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2a289cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2a28a0: 0x92670034  lbu         $a3, 0x34($s3)
    ctx->pc = 0x2a28a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2a28a4: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x2a28a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x2a28a8: 0x8e680030  lw          $t0, 0x30($s3)
    ctx->pc = 0x2a28a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2a28ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a28acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28b0: 0xc04c214  jal         func_130850
    ctx->pc = 0x2A28B0u;
    SET_GPR_U32(ctx, 31, 0x2A28B8u);
    ctx->pc = 0x2A28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28B0u;
    // 0x2a28b4: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130850u, 0x2A28B0u, 0x2A28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28B8u;
label_2a28b8:
    // 0x2a28b8: 0x92620039  lbu         $v0, 0x39($s3)
    ctx->pc = 0x2a28b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
    // 0x2a28bc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A28BCu;
    {
        const bool branch_taken_0x2a28bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a28bc) {
            ctx->pc = 0x2A2920u;
            goto label_2a2920;
        }
    }
    ctx->pc = 0x2A28C4u;
    // 0x2a28c4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2a28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a28c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a28cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a28ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a28d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A28D0u;
    {
        const bool branch_taken_0x2a28d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28D0u;
        // 0x2a28d4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28d0) {
            ctx->pc = 0x2A28E8u;
            goto label_2a28e8;
        }
    }
    ctx->pc = 0x2A28D8u;
    // 0x2a28d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a28d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28dc: 0xc0a892c  jal         func_2A24B0
    ctx->pc = 0x2A28DCu;
    SET_GPR_U32(ctx, 31, 0x2A28E4u);
    ctx->pc = 0x2A28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28DCu;
    // 0x2a28e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A24B0u, 0x2A28DCu, 0x2A28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28E4u;
label_2a28e4:
    // 0x2a28e4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a28e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a28e8:
    // 0x2a28e8: 0x92970001  lbu         $s7, 0x1($s4)
    ctx->pc = 0x2a28e8u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x2a28ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a28ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a28f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28f4: 0x0  nop
    ctx->pc = 0x2a28f4u;
    // NOP
label_2a28f8:
    // 0x2a28f8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2a28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2a28fc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a28fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2900: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2904: 0xc0a8a90  jal         func_2A2A40
    ctx->pc = 0x2A2904u;
    SET_GPR_U32(ctx, 31, 0x2A290Cu);
    ctx->pc = 0x2A2908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2904u;
    // 0x2a2908: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2A40u, 0x2A2904u, 0x2A290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A290Cu;
label_2a290c:
    // 0x2a290c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a290cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2910: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a2910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a2914: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x2a2914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2a2918: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A2918u;
    {
        const bool branch_taken_0x2a2918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2918u;
        // 0x2a291c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2918) {
            ctx->pc = 0x2A28F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a28f8;
        }
    }
    ctx->pc = 0x2A2920u;
label_2a2920:
    // 0x2a2920: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2a2920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a2924: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2a2924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2a2928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2928u;
    {
        const bool branch_taken_0x2a2928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2928) {
            ctx->pc = 0x2A2940u;
            goto label_2a2940;
        }
    }
    ctx->pc = 0x2A2930u;
    // 0x2a2930: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2a2930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a2934: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2a2934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2a2938: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2a2938u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2a293c: 0x0  nop
    ctx->pc = 0x2a293cu;
    // NOP
label_2a2940:
    // 0x2a2940: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2a2940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a2944: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2a2944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2a2948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2948u;
    {
        const bool branch_taken_0x2a2948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2948) {
            ctx->pc = 0x2A2960u;
            goto label_2a2960;
        }
    }
    ctx->pc = 0x2A2950u;
    // 0x2a2950: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2a2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a2954: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2a2954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2a2958: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2a2958u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2a295c: 0x0  nop
    ctx->pc = 0x2a295cu;
    // NOP
label_2a2960:
    // 0x2a2960: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2a2960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2a2964: 0x2673ffb0  addiu       $s3, $s3, -0x50
    ctx->pc = 0x2a2964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967216));
    // 0x2a2968: 0x641ff27  bgez        $s2, . + 4 + (-0xD9 << 2)
    ctx->pc = 0x2A2968u;
    {
        const bool branch_taken_0x2a2968 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2A296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2968u;
        // 0x2a296c: 0x2694fe10  addiu       $s4, $s4, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2968) {
            ctx->pc = 0x2A2608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2608;
        }
    }
    ctx->pc = 0x2A2970u;
    // 0x2a2970: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2a2970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2974: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a2974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a2978: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a2978u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a297c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a297cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2980: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a2980u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2984: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a2984u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2988: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a2988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a298c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a298cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2998: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2998u;
        // 0x2a299c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A29A0u;
}
