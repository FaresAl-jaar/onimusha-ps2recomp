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

// Function: sub_00256100
// Address: 0x256100 - 0x256784
void sub_00256100_0x256100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256100_0x256100");
#endif

    switch (ctx->pc) {
        case 0x25613cu: goto label_25613c;
        case 0x256708u: goto label_256708;
        case 0x256714u: goto label_256714;
        case 0x256730u: goto label_256730;
        case 0x25673cu: goto label_25673c;
        case 0x256754u: goto label_256754;
        default: break;
    }

    ctx->pc = 0x256100u;

    // 0x256100: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x256100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x256104: 0x240201ec  addiu       $v0, $zero, 0x1EC
    ctx->pc = 0x256104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
    // 0x256108: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x256108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25610c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x25610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x256110: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x256110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x256114: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x256114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x256118: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x256118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25611c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x256120: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x256120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x256124: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x256124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x256128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25612c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25612cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256134: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x256134u;
    {
        const bool branch_taken_0x256134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256134u;
        // 0x256138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256134) {
            ctx->pc = 0x256158u;
            goto label_256158;
        }
    }
    ctx->pc = 0x25613Cu;
label_25613c:
    // 0x25613c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x25613cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x256140: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x256144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x256148: 0x0  nop
    ctx->pc = 0x256148u;
    // NOP
    // 0x25614c: 0x0  nop
    ctx->pc = 0x25614cu;
    // NOP
    // 0x256150: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x256150u;
    {
        const bool branch_taken_0x256150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256150) {
            ctx->pc = 0x25613Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25613c;
        }
    }
    ctx->pc = 0x256158u;
label_256158:
    // 0x256158: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x256158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x25615c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x25615cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x256160: 0x244209f0  addiu       $v0, $v0, 0x9F0
    ctx->pc = 0x256160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2544));
    // 0x256164: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x256164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x256168: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x256168u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x4E09F0u));
    // 0x25616c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25616cu;
    { uint32_t bits = FAST_READ32(0x4E09F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256170: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x256170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x256174: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x256174u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x256178: 0x3c14004e  lui         $s4, 0x4E
    ctx->pc = 0x256178u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)78 << 16));
    // 0x25617c: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x25617cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x256180: 0x3c12004e  lui         $s2, 0x4E
    ctx->pc = 0x256180u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)78 << 16));
    // 0x256184: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x256184u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x256188: 0x3c19004e  lui         $t9, 0x4E
    ctx->pc = 0x256188u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)78 << 16));
    // 0x25618c: 0x3c18004e  lui         $t8, 0x4E
    ctx->pc = 0x25618cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)78 << 16));
    // 0x256190: 0x3c0f004e  lui         $t7, 0x4E
    ctx->pc = 0x256190u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)78 << 16));
    // 0x256194: 0x3c0e004e  lui         $t6, 0x4E
    ctx->pc = 0x256194u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)78 << 16));
    // 0x256198: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x256198u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x25619c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x25619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2561a0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x2561a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2561a4: 0x24c60a00  addiu       $a2, $a2, 0xA00
    ctx->pc = 0x2561a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2560));
    // 0x2561a8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2561a8u;
    { uint32_t bits = FAST_READ32(0x4E0A00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2561ac: 0x3c0d004e  lui         $t5, 0x4E
    ctx->pc = 0x2561acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)78 << 16));
    // 0x2561b0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2561b0u;
    { uint32_t bits = FAST_READ32(0x4E0A04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2561b4: 0x3c0c004e  lui         $t4, 0x4E
    ctx->pc = 0x2561b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)78 << 16));
    // 0x2561b8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2561b8u;
    { uint32_t bits = FAST_READ32(0x4E0A08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2561bc: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x2561bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2561c0: 0x3c0b004e  lui         $t3, 0x4E
    ctx->pc = 0x2561c0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)78 << 16));
    // 0x2561c4: 0x3c0a004e  lui         $t2, 0x4E
    ctx->pc = 0x2561c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)78 << 16));
    // 0x2561c8: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x2561c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
    // 0x2561cc: 0x3c08004e  lui         $t0, 0x4E
    ctx->pc = 0x2561ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)78 << 16));
    // 0x2561d0: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2561d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2561d4: 0x24840a10  addiu       $a0, $a0, 0xA10
    ctx->pc = 0x2561d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2576));
    // 0x2561d8: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x2561d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2561dc: 0x24420a20  addiu       $v0, $v0, 0xA20
    ctx->pc = 0x2561dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2592));
    // 0x2561e0: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x2561e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2561e4: 0x26d6c250  addiu       $s6, $s6, -0x3DB0
    ctx->pc = 0x2561e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951504));
    // 0x2561e8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2561e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2561ec: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x2561ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x2561f0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2561f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2561f4: 0x27b50290  addiu       $s5, $sp, 0x290
    ctx->pc = 0x2561f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2561f8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2561f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2561fc: 0x26940a30  addiu       $s4, $s4, 0xA30
    ctx->pc = 0x2561fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2608));
    // 0x256200: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x256200u;
    { uint32_t bits = FAST_READ32(0x4E0A10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256204: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x256204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x256208: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x256208u;
    { uint32_t bits = FAST_READ32(0x4E0A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25620c: 0x26730a40  addiu       $s3, $s3, 0xA40
    ctx->pc = 0x25620cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2624));
    // 0x256210: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x256210u;
    { uint32_t bits = FAST_READ32(0x4E0A18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256214: 0x26520a50  addiu       $s2, $s2, 0xA50
    ctx->pc = 0x256214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
    // 0x256218: 0x26310a60  addiu       $s1, $s1, 0xA60
    ctx->pc = 0x256218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2656));
    // 0x25621c: 0x27390a70  addiu       $t9, $t9, 0xA70
    ctx->pc = 0x25621cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2672));
    // 0x256220: 0x27180a80  addiu       $t8, $t8, 0xA80
    ctx->pc = 0x256220u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2688));
    // 0x256224: 0x25ef0a90  addiu       $t7, $t7, 0xA90
    ctx->pc = 0x256224u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2704));
    // 0x256228: 0x25ce0aa0  addiu       $t6, $t6, 0xAA0
    ctx->pc = 0x256228u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2720));
    // 0x25622c: 0x25ad0ab0  addiu       $t5, $t5, 0xAB0
    ctx->pc = 0x25622cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2736));
    // 0x256230: 0x258c0ac0  addiu       $t4, $t4, 0xAC0
    ctx->pc = 0x256230u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2752));
    // 0x256234: 0x256b0ad0  addiu       $t3, $t3, 0xAD0
    ctx->pc = 0x256234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2768));
    // 0x256238: 0x254a0ae0  addiu       $t2, $t2, 0xAE0
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2784));
    // 0x25623c: 0x25290af0  addiu       $t1, $t1, 0xAF0
    ctx->pc = 0x25623cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2800));
    // 0x256240: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x256240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x256244: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x256244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x256248: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x256248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25624c: 0x25080b00  addiu       $t0, $t0, 0xB00
    ctx->pc = 0x25624cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2816));
    // 0x256250: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x256250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x256254: 0x24e70b10  addiu       $a3, $a3, 0xB10
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2832));
    // 0x256258: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x256258u;
    { uint32_t bits = FAST_READ32(0x4E0A20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25625c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x25625cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x256260: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x256260u;
    { uint32_t bits = FAST_READ32(0x4E0A24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256264: 0x24c60b20  addiu       $a2, $a2, 0xB20
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2848));
    // 0x256268: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x256268u;
    { uint32_t bits = FAST_READ32(0x4E0A28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25626c: 0x24a50b30  addiu       $a1, $a1, 0xB30
    ctx->pc = 0x25626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2864));
    // 0x256270: 0x24840b40  addiu       $a0, $a0, 0xB40
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2880));
    // 0x256274: 0x24630b50  addiu       $v1, $v1, 0xB50
    ctx->pc = 0x256274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2896));
    // 0x256278: 0x27be0274  addiu       $fp, $sp, 0x274
    ctx->pc = 0x256278u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
    // 0x25627c: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x25627cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x256280: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x256280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x256284: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x256284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x256288: 0x24420b60  addiu       $v0, $v0, 0xB60
    ctx->pc = 0x256288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2912));
    // 0x25628c: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x25628cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x256290: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x256290u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256294: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x256294u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x256298: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x256298u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25629c: 0x26f70b70  addiu       $s7, $s7, 0xB70
    ctx->pc = 0x25629cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2928));
    // 0x2562a0: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2562a0u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2562a4: 0xe6a20000  swc1        $f2, 0x0($s5)
    ctx->pc = 0x2562a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2562a8: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x2562a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2562ac: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2562acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2562b0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2562b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x2562b4: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2562b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2562b8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2562b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2562bc: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2562bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2562c0: 0xe6c20000  swc1        $f2, 0x0($s6)
    ctx->pc = 0x2562c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2562c4: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2562c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2562c8: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x2562c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x2562cc: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x2562ccu;
    { uint32_t bits = FAST_READ32(0x4E0A30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2562d0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2562d0u;
    { uint32_t bits = FAST_READ32(0x4E0A34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2562d4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x2562d4u;
    { uint32_t bits = FAST_READ32(0x4E0A38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2562d8: 0x27b400dc  addiu       $s4, $sp, 0xDC
    ctx->pc = 0x2562d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2562dc: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x2562dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2562e0: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2562e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2562e4: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2562e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2562e8: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2562e8u;
    { uint32_t bits = FAST_READ32(0x4E0A40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2562ec: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2562ecu;
    { uint32_t bits = FAST_READ32(0x4E0A44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2562f0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2562f0u;
    { uint32_t bits = FAST_READ32(0x4E0A48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2562f4: 0x27b300e8  addiu       $s3, $sp, 0xE8
    ctx->pc = 0x2562f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2562f8: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x2562f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2562fc: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x2562fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x256300: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x256300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x256304: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x256304u;
    { uint32_t bits = FAST_READ32(0x4E0A50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256308: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x256308u;
    { uint32_t bits = FAST_READ32(0x4E0A54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25630c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x25630cu;
    { uint32_t bits = FAST_READ32(0x4E0A58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256310: 0x27b200f4  addiu       $s2, $sp, 0xF4
    ctx->pc = 0x256310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x256314: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x256314u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x256318: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x256318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x25631c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x25631cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x256320: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x256320u;
    { uint32_t bits = FAST_READ32(0x4E0A60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256324: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x256324u;
    { uint32_t bits = FAST_READ32(0x4E0A64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256328: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x256328u;
    { uint32_t bits = FAST_READ32(0x4E0A68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25632c: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x25632cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x256330: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x256330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x256334: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x256334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x256338: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x256338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25633c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x25633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256340: 0x27b1010c  addiu       $s1, $sp, 0x10C
    ctx->pc = 0x256340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x256344: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x256344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256348: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x256348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25634c: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x25634cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x256350: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x256350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x256354: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x256354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x256358: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x256358u;
    { uint32_t bits = FAST_READ32(0x4E0A70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25635c: 0x27b10118  addiu       $s1, $sp, 0x118
    ctx->pc = 0x25635cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x256360: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x256360u;
    { uint32_t bits = FAST_READ32(0x4E0A74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256364: 0xc7200008  lwc1        $f0, 0x8($t9)
    ctx->pc = 0x256364u;
    { uint32_t bits = FAST_READ32(0x4E0A78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256368: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x256368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25636c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x25636cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x256370: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x256370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x256374: 0xc7020000  lwc1        $f2, 0x0($t8)
    ctx->pc = 0x256374u;
    { uint32_t bits = FAST_READ32(0x4E0A80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256378: 0x27b10124  addiu       $s1, $sp, 0x124
    ctx->pc = 0x256378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x25637c: 0xc7010004  lwc1        $f1, 0x4($t8)
    ctx->pc = 0x25637cu;
    { uint32_t bits = FAST_READ32(0x4E0A84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256380: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x256380u;
    { uint32_t bits = FAST_READ32(0x4E0A88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256384: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x256384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x256388: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x256388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25638c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x25638cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x256390: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x256390u;
    { uint32_t bits = FAST_READ32(0x4E0A90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256394: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x256394u;
    { uint32_t bits = FAST_READ32(0x4E0A94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256398: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x256398u;
    { uint32_t bits = FAST_READ32(0x4E0A98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25639c: 0x27af0130  addiu       $t7, $sp, 0x130
    ctx->pc = 0x25639cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2563a0: 0xe5e20000  swc1        $f2, 0x0($t7)
    ctx->pc = 0x2563a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x2563a4: 0xe5e10004  swc1        $f1, 0x4($t7)
    ctx->pc = 0x2563a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x2563a8: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x2563a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x2563ac: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x2563acu;
    { uint32_t bits = FAST_READ32(0x4E0AA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2563b0: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x2563b0u;
    { uint32_t bits = FAST_READ32(0x4E0AA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2563b4: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x2563b4u;
    { uint32_t bits = FAST_READ32(0x4E0AA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2563b8: 0x27ae013c  addiu       $t6, $sp, 0x13C
    ctx->pc = 0x2563b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x2563bc: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x2563bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x2563c0: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x2563c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2563c4: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x2563c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2563c8: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2563c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2563cc: 0x27ae0148  addiu       $t6, $sp, 0x148
    ctx->pc = 0x2563ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x2563d0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2563d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2563d4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2563d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2563d8: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x2563d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x2563dc: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x2563dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2563e0: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x2563e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2563e4: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2563e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2563e8: 0x27ae0154  addiu       $t6, $sp, 0x154
    ctx->pc = 0x2563e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x2563ec: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2563ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2563f0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2563f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2563f4: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x2563f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x2563f8: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x2563f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2563fc: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x2563fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x256400: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x256400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256404: 0x27ae0160  addiu       $t6, $sp, 0x160
    ctx->pc = 0x256404u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x256408: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x256408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25640c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x25640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256410: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x256410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x256414: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x256414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x256418: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x256418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x25641c: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x25641cu;
    { uint32_t bits = FAST_READ32(0x4E0AB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256420: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x256420u;
    { uint32_t bits = FAST_READ32(0x4E0AB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256424: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x256424u;
    { uint32_t bits = FAST_READ32(0x4E0AB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256428: 0x27ad016c  addiu       $t5, $sp, 0x16C
    ctx->pc = 0x256428u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x25642c: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x25642cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x256430: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x256430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x256434: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x256434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x256438: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x256438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25643c: 0x27ad0178  addiu       $t5, $sp, 0x178
    ctx->pc = 0x25643cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x256440: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x256440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256444: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x256444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256448: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x256448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x25644c: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x25644cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x256450: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x256450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x256454: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x256454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256458: 0x27ad0184  addiu       $t5, $sp, 0x184
    ctx->pc = 0x256458u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x25645c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x25645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256460: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x256460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256464: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x256464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x256468: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x256468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x25646c: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x25646cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x256470: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x256470u;
    { uint32_t bits = FAST_READ32(0x4E0AC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256474: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x256474u;
    { uint32_t bits = FAST_READ32(0x4E0AC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256478: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x256478u;
    { uint32_t bits = FAST_READ32(0x4E0AC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25647c: 0x27ac0190  addiu       $t4, $sp, 0x190
    ctx->pc = 0x25647cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x256480: 0xe5820000  swc1        $f2, 0x0($t4)
    ctx->pc = 0x256480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x256484: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x256484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x256488: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x256488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x25648c: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x25648cu;
    { uint32_t bits = FAST_READ32(0x4E0AD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256490: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x256490u;
    { uint32_t bits = FAST_READ32(0x4E0AD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256494: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x256494u;
    { uint32_t bits = FAST_READ32(0x4E0AD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256498: 0x27ab019c  addiu       $t3, $sp, 0x19C
    ctx->pc = 0x256498u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x25649c: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x25649cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2564a0: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x2564a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x2564a4: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x2564a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x2564a8: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x2564a8u;
    { uint32_t bits = FAST_READ32(0x4E0AE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2564ac: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x2564acu;
    { uint32_t bits = FAST_READ32(0x4E0AE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2564b0: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x2564b0u;
    { uint32_t bits = FAST_READ32(0x4E0AE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2564b4: 0x27aa01a8  addiu       $t2, $sp, 0x1A8
    ctx->pc = 0x2564b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x2564b8: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x2564b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2564bc: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x2564bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2564c0: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x2564c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2564c4: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2564c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2564c8: 0x27aa01b4  addiu       $t2, $sp, 0x1B4
    ctx->pc = 0x2564c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x2564cc: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2564ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2564d0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2564d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2564d4: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x2564d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2564d8: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x2564d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2564dc: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x2564dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2564e0: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2564e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2564e4: 0x27aa01c0  addiu       $t2, $sp, 0x1C0
    ctx->pc = 0x2564e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2564e8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2564e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2564ec: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2564ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2564f0: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x2564f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2564f4: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x2564f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2564f8: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x2564f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2564fc: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x2564fcu;
    { uint32_t bits = FAST_READ32(0x4E0AF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256500: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x256500u;
    { uint32_t bits = FAST_READ32(0x4E0AF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256504: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x256504u;
    { uint32_t bits = FAST_READ32(0x4E0AF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256508: 0x27a901cc  addiu       $t1, $sp, 0x1CC
    ctx->pc = 0x256508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x25650c: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x25650cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x256510: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x256510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x256514: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x256514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x256518: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x256518u;
    { uint32_t bits = FAST_READ32(0x4E0B00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25651c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x25651cu;
    { uint32_t bits = FAST_READ32(0x4E0B04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256520: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x256520u;
    { uint32_t bits = FAST_READ32(0x4E0B08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256524: 0x27a801d8  addiu       $t0, $sp, 0x1D8
    ctx->pc = 0x256524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x256528: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x256528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x25652c: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x25652cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x256530: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x256530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x256534: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x256534u;
    { uint32_t bits = FAST_READ32(0x4E0B10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256538: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x256538u;
    { uint32_t bits = FAST_READ32(0x4E0B14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25653c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x25653cu;
    { uint32_t bits = FAST_READ32(0x4E0B18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256540: 0x27a701e4  addiu       $a3, $sp, 0x1E4
    ctx->pc = 0x256540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x256544: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x256544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x256548: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x256548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x25654c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x25654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x256550: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x256550u;
    { uint32_t bits = FAST_READ32(0x4E0B20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256554: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x256554u;
    { uint32_t bits = FAST_READ32(0x4E0B24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256558: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x256558u;
    { uint32_t bits = FAST_READ32(0x4E0B28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25655c: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x25655cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x256560: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x256560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x256564: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x256564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x256568: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x256568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x25656c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x25656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256570: 0x27a601fc  addiu       $a2, $sp, 0x1FC
    ctx->pc = 0x256570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
    // 0x256574: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x256574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256578: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x256578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25657c: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x25657cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x256580: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x256580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x256584: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x256584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x256588: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x256588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25658c: 0x27a60208  addiu       $a2, $sp, 0x208
    ctx->pc = 0x25658cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x256590: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x256590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256594: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x256594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256598: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x256598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x25659c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x25659cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2565a0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2565a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2565a4: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2565a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2565a8: 0x27a60214  addiu       $a2, $sp, 0x214
    ctx->pc = 0x2565a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
    // 0x2565ac: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2565acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2565b0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2565b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2565b4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x2565b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2565b8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2565b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2565bc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2565bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2565c0: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2565c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2565c4: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x2565c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2565c8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2565c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2565cc: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2565ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2565d0: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x2565d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2565d4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2565d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2565d8: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2565d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2565dc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2565dcu;
    { uint32_t bits = FAST_READ32(0x4E0B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2565e0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2565e0u;
    { uint32_t bits = FAST_READ32(0x4E0B34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2565e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2565e4u;
    { uint32_t bits = FAST_READ32(0x4E0B38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2565e8: 0x27a5022c  addiu       $a1, $sp, 0x22C
    ctx->pc = 0x2565e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x2565ec: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2565ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2565f0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2565f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2565f4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2565f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2565f8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2565f8u;
    { uint32_t bits = FAST_READ32(0x4E0B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2565fc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2565fcu;
    { uint32_t bits = FAST_READ32(0x4E0B44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256600: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x256600u;
    { uint32_t bits = FAST_READ32(0x4E0B48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256604: 0x27a40238  addiu       $a0, $sp, 0x238
    ctx->pc = 0x256604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x256608: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x256608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25660c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x25660cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x256610: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x256610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x256614: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x256614u;
    { uint32_t bits = FAST_READ32(0x4E0B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256618: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x256618u;
    { uint32_t bits = FAST_READ32(0x4E0B54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25661c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25661cu;
    { uint32_t bits = FAST_READ32(0x4E0B58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256620: 0x27a30244  addiu       $v1, $sp, 0x244
    ctx->pc = 0x256620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
    // 0x256624: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x256624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x256628: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x256628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25662c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25662cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x256630: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x256630u;
    { uint32_t bits = FAST_READ32(0x4E0B60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256634: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x256634u;
    { uint32_t bits = FAST_READ32(0x4E0B64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256638: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x256638u;
    { uint32_t bits = FAST_READ32(0x4E0B68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25663c: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x25663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x256640: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x256640u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x256644: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x256644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x256648: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x256648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25664c: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x25664cu;
    { uint32_t bits = FAST_READ32(0x4E0B70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256650: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x256650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x256654: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x256654u;
    { uint32_t bits = FAST_READ32(0x4E0B74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256658: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x256658u;
    { uint32_t bits = FAST_READ32(0x4E0B78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25665c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25665cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x256660: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x256660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x256664: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x256664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x256668: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x256668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25666c: 0x27a20268  addiu       $v0, $sp, 0x268
    ctx->pc = 0x25666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x256670: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x256670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256674: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x256674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256678: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x256678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25667c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25667cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x256680: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x256680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x256684: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x256684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256688: 0x27a20280  addiu       $v0, $sp, 0x280
    ctx->pc = 0x256688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x25668c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x25668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256690: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x256690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256694: 0xe7c20000  swc1        $f2, 0x0($fp)
    ctx->pc = 0x256694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x256698: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x256698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x25669c: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x25669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x2566a0: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2566a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2566a4: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2566a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2566a8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2566a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2566ac: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2566acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2566b0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2566b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2566b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2566b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2566b8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2566b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2566bc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2566bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2566c0: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2566c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2566c4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2566C4u;
    {
        const bool branch_taken_0x2566c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2566c4) {
            ctx->pc = 0x256708u;
            goto label_256708;
        }
    }
    ctx->pc = 0x2566CCu;
    // 0x2566cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2566ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2566d0: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x2566d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2566d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2566D4u;
    {
        const bool branch_taken_0x2566d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2566D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566D4u;
        // 0x2566d8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566d4) {
            ctx->pc = 0x2566F0u;
            goto label_2566f0;
        }
    }
    ctx->pc = 0x2566DCu;
    // 0x2566dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2566DCu;
    {
        const bool branch_taken_0x2566dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2566dc) {
            ctx->pc = 0x256708u;
            goto label_256708;
        }
    }
    ctx->pc = 0x2566E4u;
    // 0x2566e4: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x2566e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2566e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2566E8u;
    {
        const bool branch_taken_0x2566e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2566e8) {
            ctx->pc = 0x256708u;
            goto label_256708;
        }
    }
    ctx->pc = 0x2566F0u;
label_2566f0:
    // 0x2566f0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2566f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2566f4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2566f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2566f8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2566f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2566fc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2566fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256700: 0xc0b7854  jal         func_2DE150
    ctx->pc = 0x256700u;
    SET_GPR_U32(ctx, 31, 0x256708u);
    ctx->pc = 0x256704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256700u;
    // 0x256704: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE150u, 0x256700u, 0x256708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256708u;
label_256708:
    // 0x256708: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25670c: 0xc097934  jal         func_25E4D0
    ctx->pc = 0x25670Cu;
    SET_GPR_U32(ctx, 31, 0x256714u);
    ctx->pc = 0x256710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25670Cu;
    // 0x256710: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E4D0u, 0x25670Cu, 0x256714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256714u;
label_256714:
    // 0x256714: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x256714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x256718: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x256718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25671c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25671cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256720: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x256720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x256724: 0x245100a0  addiu       $s1, $v0, 0xA0
    ctx->pc = 0x256724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x256728: 0xc040274  jal         func_1009D0
    ctx->pc = 0x256728u;
    SET_GPR_U32(ctx, 31, 0x256730u);
    ctx->pc = 0x25672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256728u;
    // 0x25672c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x256728u, 0x256730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256730u;
label_256730:
    // 0x256730: 0x220c82d  daddu       $t9, $s1, $zero
    ctx->pc = 0x256730u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256734: 0xc040250  jal         func_100940
    ctx->pc = 0x256734u;
    SET_GPR_U32(ctx, 31, 0x25673Cu);
    ctx->pc = 0x256738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256734u;
    // 0x256738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x256734u, 0x25673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25673Cu;
label_25673c:
    // 0x25673c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256740: 0x1043fff1  beq         $v0, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x256740u;
    {
        const bool branch_taken_0x256740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x256740) {
            ctx->pc = 0x256708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256708;
        }
    }
    ctx->pc = 0x256748u;
    // 0x256748: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25674c: 0xc0b7858  jal         func_2DE160
    ctx->pc = 0x25674Cu;
    SET_GPR_U32(ctx, 31, 0x256754u);
    ctx->pc = 0x256750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25674Cu;
    // 0x256750: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE160u, 0x25674Cu, 0x256754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256754u;
label_256754:
    // 0x256754: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x256754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x256758: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x256758u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25675c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25675cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256760: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x256760u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256764: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x256764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256768: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25676c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25676cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25677c: 0x3e00008  jr          $ra
    ctx->pc = 0x25677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25677Cu;
        // 0x256780: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25677Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256784u;
}
