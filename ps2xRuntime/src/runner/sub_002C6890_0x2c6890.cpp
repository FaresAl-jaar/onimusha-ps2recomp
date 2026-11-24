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

// Function: sub_002C6890
// Address: 0x2c6890 - 0x2c8328
void sub_002C6890_0x2c6890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6890_0x2c6890");
#endif

    switch (ctx->pc) {
        case 0x2c68f0u: goto label_2c68f0;
        case 0x2c82e8u: goto label_2c82e8;
        default: break;
    }

    ctx->pc = 0x2c6890u;

    // 0x2c6890: 0x27bdf450  addiu       $sp, $sp, -0xBB0
    ctx->pc = 0x2c6890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964304));
    // 0x2c6894: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c6894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c6898: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c689c: 0x24635210  addiu       $v1, $v1, 0x5210
    ctx->pc = 0x2c689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21008));
    // 0x2c68a0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c68a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c68a4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c68a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c68a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c68a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c68ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c68acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c68b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c68b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c68b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c68b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c68b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c68b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c68bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c68bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c68c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c68c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c68c4: 0xafa50ba8  sw          $a1, 0xBA8($sp)
    ctx->pc = 0x2c68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2984), GPR_U32(ctx, 5));
    // 0x2c68c8: 0xafa40bac  sw          $a0, 0xBAC($sp)
    ctx->pc = 0x2c68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2988), GPR_U32(ctx, 4));
    // 0x2c68cc: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x2c68ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2c68d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c68d0u;
    { uint32_t bits = FAST_READ32(0x4E5210u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c68d4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c68d4u;
    { uint32_t bits = FAST_READ32(0x4E5214u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c68d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c68d8u;
    { uint32_t bits = FAST_READ32(0x4E5218u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68dc: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x2c68dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2c68e0: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2c68e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2c68e4: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2c68e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2c68e8: 0x10c00683  beqz        $a2, . + 4 + (0x683 << 2)
    ctx->pc = 0x2C68E8u;
    {
        const bool branch_taken_0x2c68e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68E8u;
        // 0x2c68ec: 0xa38089d4  sb          $zero, -0x762C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937044), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68e8) {
            ctx->pc = 0x2C82F8u;
            goto label_2c82f8;
        }
    }
    ctx->pc = 0x2C68F0u;
label_2c68f0:
    // 0x2c68f0: 0x838289f4  lb          $v0, -0x760C($gp)
    ctx->pc = 0x2c68f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x2c68f4: 0x14400672  bnez        $v0, . + 4 + (0x672 << 2)
    ctx->pc = 0x2C68F4u;
    {
        const bool branch_taken_0x2c68f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68F4u;
        // 0x2c68f8: 0x3c05004e  lui         $a1, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68f4) {
            ctx->pc = 0x2C82C0u;
            goto label_2c82c0;
        }
    }
    ctx->pc = 0x2C68FCu;
    // 0x2c68fc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c68fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c6900: 0x24a55220  addiu       $a1, $a1, 0x5220
    ctx->pc = 0x2c6900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21024));
    // 0x2c6904: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2c6904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2c6908: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2c6908u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c690c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6910: 0x24845f00  addiu       $a0, $a0, 0x5F00
    ctx->pc = 0x2c6910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24320));
    // 0x2c6914: 0x3c15008d  lui         $s5, 0x8D
    ctx->pc = 0x2c6914u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)141 << 16));
    // 0x2c6918: 0x3c14008d  lui         $s4, 0x8D
    ctx->pc = 0x2c6918u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)141 << 16));
    // 0x2c691c: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c691cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c6920: 0x3c12008d  lui         $s2, 0x8D
    ctx->pc = 0x2c6920u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)141 << 16));
    // 0x2c6924: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x2c6924u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x2c6928: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6928u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c692c: 0x3c19004e  lui         $t9, 0x4E
    ctx->pc = 0x2c692cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)78 << 16));
    // 0x2c6930: 0x3c18008d  lui         $t8, 0x8D
    ctx->pc = 0x2c6930u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)141 << 16));
    // 0x2c6934: 0x3c0f004e  lui         $t7, 0x4E
    ctx->pc = 0x2c6934u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)78 << 16));
    // 0x2c6938: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2c6938u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D5F00u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x8D5F00u, _value); } while (0);
    // 0x2c693c: 0x3c0e008d  lui         $t6, 0x8D
    ctx->pc = 0x2c693cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)141 << 16));
    // 0x2c6940: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2c6940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F08u, _value); } while (0); }
    // 0x2c6944: 0x24425230  addiu       $v0, $v0, 0x5230
    ctx->pc = 0x2c6944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21040));
    // 0x2c6948: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c6948u;
    { uint32_t bits = FAST_READ32(0x4E5230u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c694c: 0x3c0d004e  lui         $t5, 0x4E
    ctx->pc = 0x2c694cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)78 << 16));
    // 0x2c6950: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c6950u;
    { uint32_t bits = FAST_READ32(0x4E5234u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6954: 0x3c0c008d  lui         $t4, 0x8D
    ctx->pc = 0x2c6954u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)141 << 16));
    // 0x2c6958: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c6958u;
    { uint32_t bits = FAST_READ32(0x4E5238u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c695c: 0x26b55f90  addiu       $s5, $s5, 0x5F90
    ctx->pc = 0x2c695cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24464));
    // 0x2c6960: 0x3c0b004e  lui         $t3, 0x4E
    ctx->pc = 0x2c6960u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)78 << 16));
    // 0x2c6964: 0x3c0a008d  lui         $t2, 0x8D
    ctx->pc = 0x2c6964u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)141 << 16));
    // 0x2c6968: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x2c6968u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
    // 0x2c696c: 0x3c08008d  lui         $t0, 0x8D
    ctx->pc = 0x2c696cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)141 << 16));
    // 0x2c6970: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2c6970u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2c6974: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x2c6974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x2c6978: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2c6978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x2c697c: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2c697cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2c6980: 0x3c16008d  lui         $s6, 0x8D
    ctx->pc = 0x2c6980u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)141 << 16));
    // 0x2c6984: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c6984u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c6988: 0x7fb50b90  sq          $s5, 0xB90($sp)
    ctx->pc = 0x2c6988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2960), GPR_VEC(ctx, 21));
    // 0x2c698c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2c698cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2c6990: 0x3c15004e  lui         $s5, 0x4E
    ctx->pc = 0x2c6990u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
    // 0x2c6994: 0x3c1e008d  lui         $fp, 0x8D
    ctx->pc = 0x2c6994u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)141 << 16));
    // 0x2c6998: 0x26b552f0  addiu       $s5, $s5, 0x52F0
    ctx->pc = 0x2c6998u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 21232));
    // 0x2c699c: 0x26945f0c  addiu       $s4, $s4, 0x5F0C
    ctx->pc = 0x2c699cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24332));
    // 0x2c69a0: 0x7fb50b80  sq          $s5, 0xB80($sp)
    ctx->pc = 0x2c69a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2944), GPR_VEC(ctx, 21));
    // 0x2c69a4: 0x26735240  addiu       $s3, $s3, 0x5240
    ctx->pc = 0x2c69a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 21056));
    // 0x2c69a8: 0x3c15008d  lui         $s5, 0x8D
    ctx->pc = 0x2c69a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)141 << 16));
    // 0x2c69ac: 0x26525f18  addiu       $s2, $s2, 0x5F18
    ctx->pc = 0x2c69acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24344));
    // 0x2c69b0: 0x26b55f9c  addiu       $s5, $s5, 0x5F9C
    ctx->pc = 0x2c69b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24476));
    // 0x2c69b4: 0x26315250  addiu       $s1, $s1, 0x5250
    ctx->pc = 0x2c69b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21072));
    // 0x2c69b8: 0x7fb50b70  sq          $s5, 0xB70($sp)
    ctx->pc = 0x2c69b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2928), GPR_VEC(ctx, 21));
    // 0x2c69bc: 0x26105f24  addiu       $s0, $s0, 0x5F24
    ctx->pc = 0x2c69bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24356));
    // 0x2c69c0: 0x3c15004e  lui         $s5, 0x4E
    ctx->pc = 0x2c69c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
    // 0x2c69c4: 0x27395260  addiu       $t9, $t9, 0x5260
    ctx->pc = 0x2c69c4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 21088));
    // 0x2c69c8: 0x26b55300  addiu       $s5, $s5, 0x5300
    ctx->pc = 0x2c69c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 21248));
    // 0x2c69cc: 0x27185f30  addiu       $t8, $t8, 0x5F30
    ctx->pc = 0x2c69ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 24368));
    // 0x2c69d0: 0x7fb50b60  sq          $s5, 0xB60($sp)
    ctx->pc = 0x2c69d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2912), GPR_VEC(ctx, 21));
    // 0x2c69d4: 0x25ef5270  addiu       $t7, $t7, 0x5270
    ctx->pc = 0x2c69d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21104));
    // 0x2c69d8: 0x3c15008d  lui         $s5, 0x8D
    ctx->pc = 0x2c69d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)141 << 16));
    // 0x2c69dc: 0x25ce5f3c  addiu       $t6, $t6, 0x5F3C
    ctx->pc = 0x2c69dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24380));
    // 0x2c69e0: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x2c69e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F0Cu, _value); } while (0); }
    // 0x2c69e4: 0x26b55fa8  addiu       $s5, $s5, 0x5FA8
    ctx->pc = 0x2c69e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24488));
    // 0x2c69e8: 0x7fb50b50  sq          $s5, 0xB50($sp)
    ctx->pc = 0x2c69e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2896), GPR_VEC(ctx, 21));
    // 0x2c69ec: 0x25ad5280  addiu       $t5, $t5, 0x5280
    ctx->pc = 0x2c69ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 21120));
    // 0x2c69f0: 0x3c15004e  lui         $s5, 0x4E
    ctx->pc = 0x2c69f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
    // 0x2c69f4: 0x258c5f48  addiu       $t4, $t4, 0x5F48
    ctx->pc = 0x2c69f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24392));
    // 0x2c69f8: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2c69f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F10u, _value); } while (0); }
    // 0x2c69fc: 0x26b55310  addiu       $s5, $s5, 0x5310
    ctx->pc = 0x2c69fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 21264));
    // 0x2c6a00: 0x7fb50b40  sq          $s5, 0xB40($sp)
    ctx->pc = 0x2c6a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2880), GPR_VEC(ctx, 21));
    // 0x2c6a04: 0x256b5290  addiu       $t3, $t3, 0x5290
    ctx->pc = 0x2c6a04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 21136));
    // 0x2c6a08: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2c6a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F14u, _value); } while (0); }
    // 0x2c6a0c: 0x3c15004e  lui         $s5, 0x4E
    ctx->pc = 0x2c6a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
    // 0x2c6a10: 0x3c14008d  lui         $s4, 0x8D
    ctx->pc = 0x2c6a10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)141 << 16));
    // 0x2c6a14: 0x254a5f54  addiu       $t2, $t2, 0x5F54
    ctx->pc = 0x2c6a14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24404));
    // 0x2c6a18: 0x26945fb4  addiu       $s4, $s4, 0x5FB4
    ctx->pc = 0x2c6a18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24500));
    // 0x2c6a1c: 0x252952a0  addiu       $t1, $t1, 0x52A0
    ctx->pc = 0x2c6a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21152));
    // 0x2c6a20: 0x7fb40b30  sq          $s4, 0xB30($sp)
    ctx->pc = 0x2c6a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2864), GPR_VEC(ctx, 20));
    // 0x2c6a24: 0x25085f60  addiu       $t0, $t0, 0x5F60
    ctx->pc = 0x2c6a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24416));
    // 0x2c6a28: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2c6a28u;
    { uint32_t bits = FAST_READ32(0x4E5240u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6a2c: 0x3c14004e  lui         $s4, 0x4E
    ctx->pc = 0x2c6a2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)78 << 16));
    // 0x2c6a30: 0x26945320  addiu       $s4, $s4, 0x5320
    ctx->pc = 0x2c6a30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 21280));
    // 0x2c6a34: 0x24e752b0  addiu       $a3, $a3, 0x52B0
    ctx->pc = 0x2c6a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21168));
    // 0x2c6a38: 0x24a55f6c  addiu       $a1, $a1, 0x5F6C
    ctx->pc = 0x2c6a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24428));
    // 0x2c6a3c: 0x248452c0  addiu       $a0, $a0, 0x52C0
    ctx->pc = 0x2c6a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21184));
    // 0x2c6a40: 0x24635f78  addiu       $v1, $v1, 0x5F78
    ctx->pc = 0x2c6a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24440));
    // 0x2c6a44: 0x244252d0  addiu       $v0, $v0, 0x52D0
    ctx->pc = 0x2c6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21200));
    // 0x2c6a48: 0x26d65f84  addiu       $s6, $s6, 0x5F84
    ctx->pc = 0x2c6a48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24452));
    // 0x2c6a4c: 0x26f752e0  addiu       $s7, $s7, 0x52E0
    ctx->pc = 0x2c6a4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 21216));
    // 0x2c6a50: 0x27de6308  addiu       $fp, $fp, 0x6308
    ctx->pc = 0x2c6a50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 25352));
    // 0x2c6a54: 0x26b55830  addiu       $s5, $s5, 0x5830
    ctx->pc = 0x2c6a54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 22576));
    // 0x2c6a58: 0x7fb40b20  sq          $s4, 0xB20($sp)
    ctx->pc = 0x2c6a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2848), GPR_VEC(ctx, 20));
    // 0x2c6a5c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2c6a5cu;
    { uint32_t bits = FAST_READ32(0x4E5244u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6a60: 0x3c14008d  lui         $s4, 0x8D
    ctx->pc = 0x2c6a60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)141 << 16));
    // 0x2c6a64: 0x26945fc0  addiu       $s4, $s4, 0x5FC0
    ctx->pc = 0x2c6a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24512));
    // 0x2c6a68: 0x7fb40b10  sq          $s4, 0xB10($sp)
    ctx->pc = 0x2c6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2832), GPR_VEC(ctx, 20));
    // 0x2c6a6c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2c6a6cu;
    { uint32_t bits = FAST_READ32(0x4E5248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6a70: 0x3c14008d  lui         $s4, 0x8D
    ctx->pc = 0x2c6a70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)141 << 16));
    // 0x2c6a74: 0x2694638c  addiu       $s4, $s4, 0x638C
    ctx->pc = 0x2c6a74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 25484));
    // 0x2c6a78: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c6a78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c6a7c: 0x26735330  addiu       $s3, $s3, 0x5330
    ctx->pc = 0x2c6a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 21296));
    // 0x2c6a80: 0x7fb30b00  sq          $s3, 0xB00($sp)
    ctx->pc = 0x2c6a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2816), GPR_VEC(ctx, 19));
    // 0x2c6a84: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c6a84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c6a88: 0x26735fcc  addiu       $s3, $s3, 0x5FCC
    ctx->pc = 0x2c6a88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24524));
    // 0x2c6a8c: 0x7fb30af0  sq          $s3, 0xAF0($sp)
    ctx->pc = 0x2c6a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2800), GPR_VEC(ctx, 19));
    // 0x2c6a90: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c6a90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c6a94: 0x26735340  addiu       $s3, $s3, 0x5340
    ctx->pc = 0x2c6a94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 21312));
    // 0x2c6a98: 0x7fb30ae0  sq          $s3, 0xAE0($sp)
    ctx->pc = 0x2c6a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2784), GPR_VEC(ctx, 19));
    // 0x2c6a9c: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c6a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c6aa0: 0x26735fd8  addiu       $s3, $s3, 0x5FD8
    ctx->pc = 0x2c6aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24536));
    // 0x2c6aa4: 0x7fb30ad0  sq          $s3, 0xAD0($sp)
    ctx->pc = 0x2c6aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2768), GPR_VEC(ctx, 19));
    // 0x2c6aa8: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c6aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c6aac: 0x26735350  addiu       $s3, $s3, 0x5350
    ctx->pc = 0x2c6aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 21328));
    // 0x2c6ab0: 0x7fb30ac0  sq          $s3, 0xAC0($sp)
    ctx->pc = 0x2c6ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2752), GPR_VEC(ctx, 19));
    // 0x2c6ab4: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c6ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ab8: 0x26735fe4  addiu       $s3, $s3, 0x5FE4
    ctx->pc = 0x2c6ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24548));
    // 0x2c6abc: 0x7fb30ab0  sq          $s3, 0xAB0($sp)
    ctx->pc = 0x2c6abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2736), GPR_VEC(ctx, 19));
    // 0x2c6ac0: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c6ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c6ac4: 0x26735360  addiu       $s3, $s3, 0x5360
    ctx->pc = 0x2c6ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 21344));
    // 0x2c6ac8: 0x7fb30aa0  sq          $s3, 0xAA0($sp)
    ctx->pc = 0x2c6ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2720), GPR_VEC(ctx, 19));
    // 0x2c6acc: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c6accu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ad0: 0x26735ff0  addiu       $s3, $s3, 0x5FF0
    ctx->pc = 0x2c6ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24560));
    // 0x2c6ad4: 0x7fb30a90  sq          $s3, 0xA90($sp)
    ctx->pc = 0x2c6ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2704), GPR_VEC(ctx, 19));
    // 0x2c6ad8: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c6ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c6adc: 0x26735370  addiu       $s3, $s3, 0x5370
    ctx->pc = 0x2c6adcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 21360));
    // 0x2c6ae0: 0x7fb30a80  sq          $s3, 0xA80($sp)
    ctx->pc = 0x2c6ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2688), GPR_VEC(ctx, 19));
    // 0x2c6ae4: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c6ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ae8: 0x26735ffc  addiu       $s3, $s3, 0x5FFC
    ctx->pc = 0x2c6ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24572));
    // 0x2c6aec: 0x7fb30a70  sq          $s3, 0xA70($sp)
    ctx->pc = 0x2c6aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2672), GPR_VEC(ctx, 19));
    // 0x2c6af0: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c6af0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c6af4: 0x26735380  addiu       $s3, $s3, 0x5380
    ctx->pc = 0x2c6af4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 21376));
    // 0x2c6af8: 0x7fb30a60  sq          $s3, 0xA60($sp)
    ctx->pc = 0x2c6af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2656), GPR_VEC(ctx, 19));
    // 0x2c6afc: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c6afcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c6b00: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2c6b00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F18u, _value); } while (0); }
    // 0x2c6b04: 0x26736008  addiu       $s3, $s3, 0x6008
    ctx->pc = 0x2c6b04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24584));
    // 0x2c6b08: 0x7fb30a50  sq          $s3, 0xA50($sp)
    ctx->pc = 0x2c6b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2640), GPR_VEC(ctx, 19));
    // 0x2c6b0c: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c6b0cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c6b10: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2c6b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F1Cu, _value); } while (0); }
    // 0x2c6b14: 0x26735390  addiu       $s3, $s3, 0x5390
    ctx->pc = 0x2c6b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 21392));
    // 0x2c6b18: 0x7fb30a40  sq          $s3, 0xA40($sp)
    ctx->pc = 0x2c6b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2624), GPR_VEC(ctx, 19));
    // 0x2c6b1c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2c6b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F20u, _value); } while (0); }
    // 0x2c6b20: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c6b20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c6b24: 0x3c12008d  lui         $s2, 0x8D
    ctx->pc = 0x2c6b24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)141 << 16));
    // 0x2c6b28: 0x267357d0  addiu       $s3, $s3, 0x57D0
    ctx->pc = 0x2c6b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22480));
    // 0x2c6b2c: 0x26526014  addiu       $s2, $s2, 0x6014
    ctx->pc = 0x2c6b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24596));
    // 0x2c6b30: 0x7fb20a30  sq          $s2, 0xA30($sp)
    ctx->pc = 0x2c6b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2608), GPR_VEC(ctx, 18));
    // 0x2c6b34: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2c6b34u;
    { uint32_t bits = FAST_READ32(0x4E5250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6b38: 0x3c12004e  lui         $s2, 0x4E
    ctx->pc = 0x2c6b38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)78 << 16));
    // 0x2c6b3c: 0x265253a0  addiu       $s2, $s2, 0x53A0
    ctx->pc = 0x2c6b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 21408));
    // 0x2c6b40: 0x7fb20a20  sq          $s2, 0xA20($sp)
    ctx->pc = 0x2c6b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2592), GPR_VEC(ctx, 18));
    // 0x2c6b44: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2c6b44u;
    { uint32_t bits = FAST_READ32(0x4E5254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b48: 0x3c12008d  lui         $s2, 0x8D
    ctx->pc = 0x2c6b48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)141 << 16));
    // 0x2c6b4c: 0x26526020  addiu       $s2, $s2, 0x6020
    ctx->pc = 0x2c6b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24608));
    // 0x2c6b50: 0x7fb20a10  sq          $s2, 0xA10($sp)
    ctx->pc = 0x2c6b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2576), GPR_VEC(ctx, 18));
    // 0x2c6b54: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2c6b54u;
    { uint32_t bits = FAST_READ32(0x4E5258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b58: 0x3c12004e  lui         $s2, 0x4E
    ctx->pc = 0x2c6b58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)78 << 16));
    // 0x2c6b5c: 0x26525730  addiu       $s2, $s2, 0x5730
    ctx->pc = 0x2c6b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 22320));
    // 0x2c6b60: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x2c6b60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x2c6b64: 0x263153b0  addiu       $s1, $s1, 0x53B0
    ctx->pc = 0x2c6b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21424));
    // 0x2c6b68: 0x7fb10a00  sq          $s1, 0xA00($sp)
    ctx->pc = 0x2c6b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2560), GPR_VEC(ctx, 17));
    // 0x2c6b6c: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2c6b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2c6b70: 0x2631602c  addiu       $s1, $s1, 0x602C
    ctx->pc = 0x2c6b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24620));
    // 0x2c6b74: 0x7fb109f0  sq          $s1, 0x9F0($sp)
    ctx->pc = 0x2c6b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2544), GPR_VEC(ctx, 17));
    // 0x2c6b78: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x2c6b78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x2c6b7c: 0x263153c0  addiu       $s1, $s1, 0x53C0
    ctx->pc = 0x2c6b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21440));
    // 0x2c6b80: 0x7fb109e0  sq          $s1, 0x9E0($sp)
    ctx->pc = 0x2c6b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2528), GPR_VEC(ctx, 17));
    // 0x2c6b84: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2c6b84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2c6b88: 0x26316038  addiu       $s1, $s1, 0x6038
    ctx->pc = 0x2c6b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24632));
    // 0x2c6b8c: 0x7fb109d0  sq          $s1, 0x9D0($sp)
    ctx->pc = 0x2c6b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2512), GPR_VEC(ctx, 17));
    // 0x2c6b90: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x2c6b90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x2c6b94: 0x263153d0  addiu       $s1, $s1, 0x53D0
    ctx->pc = 0x2c6b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21456));
    // 0x2c6b98: 0x7fb109c0  sq          $s1, 0x9C0($sp)
    ctx->pc = 0x2c6b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2496), GPR_VEC(ctx, 17));
    // 0x2c6b9c: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2c6b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ba0: 0x26316044  addiu       $s1, $s1, 0x6044
    ctx->pc = 0x2c6ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24644));
    // 0x2c6ba4: 0x7fb109b0  sq          $s1, 0x9B0($sp)
    ctx->pc = 0x2c6ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2480), GPR_VEC(ctx, 17));
    // 0x2c6ba8: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x2c6ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x2c6bac: 0x263153e0  addiu       $s1, $s1, 0x53E0
    ctx->pc = 0x2c6bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21472));
    // 0x2c6bb0: 0x7fb109a0  sq          $s1, 0x9A0($sp)
    ctx->pc = 0x2c6bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2464), GPR_VEC(ctx, 17));
    // 0x2c6bb4: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2c6bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2c6bb8: 0x26316050  addiu       $s1, $s1, 0x6050
    ctx->pc = 0x2c6bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24656));
    // 0x2c6bbc: 0x7fb10990  sq          $s1, 0x990($sp)
    ctx->pc = 0x2c6bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2448), GPR_VEC(ctx, 17));
    // 0x2c6bc0: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x2c6bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x2c6bc4: 0x263153f0  addiu       $s1, $s1, 0x53F0
    ctx->pc = 0x2c6bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21488));
    // 0x2c6bc8: 0x7fb10980  sq          $s1, 0x980($sp)
    ctx->pc = 0x2c6bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2432), GPR_VEC(ctx, 17));
    // 0x2c6bcc: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2c6bccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2c6bd0: 0x2631605c  addiu       $s1, $s1, 0x605C
    ctx->pc = 0x2c6bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24668));
    // 0x2c6bd4: 0x7fb10970  sq          $s1, 0x970($sp)
    ctx->pc = 0x2c6bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2416), GPR_VEC(ctx, 17));
    // 0x2c6bd8: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x2c6bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x2c6bdc: 0x26315400  addiu       $s1, $s1, 0x5400
    ctx->pc = 0x2c6bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21504));
    // 0x2c6be0: 0x7fb10960  sq          $s1, 0x960($sp)
    ctx->pc = 0x2c6be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 17));
    // 0x2c6be4: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2c6be4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2c6be8: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2c6be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F24u, _value); } while (0); }
    // 0x2c6bec: 0x26316068  addiu       $s1, $s1, 0x6068
    ctx->pc = 0x2c6becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24680));
    // 0x2c6bf0: 0x7fb10950  sq          $s1, 0x950($sp)
    ctx->pc = 0x2c6bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 17));
    // 0x2c6bf4: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x2c6bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x2c6bf8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2c6bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F28u, _value); } while (0); }
    // 0x2c6bfc: 0x26315410  addiu       $s1, $s1, 0x5410
    ctx->pc = 0x2c6bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21520));
    // 0x2c6c00: 0x7fb10940  sq          $s1, 0x940($sp)
    ctx->pc = 0x2c6c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 17));
    // 0x2c6c04: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2c6c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F2Cu, _value); } while (0); }
    // 0x2c6c08: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2c6c08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2c6c0c: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6c10: 0x263162cc  addiu       $s1, $s1, 0x62CC
    ctx->pc = 0x2c6c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25292));
    // 0x2c6c14: 0x26106074  addiu       $s0, $s0, 0x6074
    ctx->pc = 0x2c6c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24692));
    // 0x2c6c18: 0x7fb00930  sq          $s0, 0x930($sp)
    ctx->pc = 0x2c6c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 16));
    // 0x2c6c1c: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x2c6c1cu;
    { uint32_t bits = FAST_READ32(0x4E5260u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6c20: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6c20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6c24: 0x26105420  addiu       $s0, $s0, 0x5420
    ctx->pc = 0x2c6c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21536));
    // 0x2c6c28: 0x7fb00920  sq          $s0, 0x920($sp)
    ctx->pc = 0x2c6c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 16));
    // 0x2c6c2c: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x2c6c2cu;
    { uint32_t bits = FAST_READ32(0x4E5264u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c30: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6c30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6c34: 0x26106080  addiu       $s0, $s0, 0x6080
    ctx->pc = 0x2c6c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24704));
    // 0x2c6c38: 0x7fb00910  sq          $s0, 0x910($sp)
    ctx->pc = 0x2c6c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 16));
    // 0x2c6c3c: 0xc7200008  lwc1        $f0, 0x8($t9)
    ctx->pc = 0x2c6c3cu;
    { uint32_t bits = FAST_READ32(0x4E5268u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c40: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6c40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6c44: 0x26105430  addiu       $s0, $s0, 0x5430
    ctx->pc = 0x2c6c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21552));
    // 0x2c6c48: 0x7fb00900  sq          $s0, 0x900($sp)
    ctx->pc = 0x2c6c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 16));
    // 0x2c6c4c: 0x3c19004e  lui         $t9, 0x4E
    ctx->pc = 0x2c6c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)78 << 16));
    // 0x2c6c50: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6c50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6c54: 0x27395780  addiu       $t9, $t9, 0x5780
    ctx->pc = 0x2c6c54u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 22400));
    // 0x2c6c58: 0x2610608c  addiu       $s0, $s0, 0x608C
    ctx->pc = 0x2c6c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24716));
    // 0x2c6c5c: 0x7fb008f0  sq          $s0, 0x8F0($sp)
    ctx->pc = 0x2c6c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 16));
    // 0x2c6c60: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6c60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6c64: 0x26105440  addiu       $s0, $s0, 0x5440
    ctx->pc = 0x2c6c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21568));
    // 0x2c6c68: 0x7fb008e0  sq          $s0, 0x8E0($sp)
    ctx->pc = 0x2c6c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 16));
    // 0x2c6c6c: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6c70: 0x26106098  addiu       $s0, $s0, 0x6098
    ctx->pc = 0x2c6c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24728));
    // 0x2c6c74: 0x7fb008d0  sq          $s0, 0x8D0($sp)
    ctx->pc = 0x2c6c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 16));
    // 0x2c6c78: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6c78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6c7c: 0x26105450  addiu       $s0, $s0, 0x5450
    ctx->pc = 0x2c6c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21584));
    // 0x2c6c80: 0x7fb008c0  sq          $s0, 0x8C0($sp)
    ctx->pc = 0x2c6c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 16));
    // 0x2c6c84: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6c84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6c88: 0x261060a4  addiu       $s0, $s0, 0x60A4
    ctx->pc = 0x2c6c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24740));
    // 0x2c6c8c: 0x7fb008b0  sq          $s0, 0x8B0($sp)
    ctx->pc = 0x2c6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 16));
    // 0x2c6c90: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6c90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6c94: 0x26105460  addiu       $s0, $s0, 0x5460
    ctx->pc = 0x2c6c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21600));
    // 0x2c6c98: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x2c6c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
    // 0x2c6c9c: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ca0: 0x261060b0  addiu       $s0, $s0, 0x60B0
    ctx->pc = 0x2c6ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24752));
    // 0x2c6ca4: 0x7fb00890  sq          $s0, 0x890($sp)
    ctx->pc = 0x2c6ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 16));
    // 0x2c6ca8: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6cac: 0x26105470  addiu       $s0, $s0, 0x5470
    ctx->pc = 0x2c6cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21616));
    // 0x2c6cb0: 0x7fb00880  sq          $s0, 0x880($sp)
    ctx->pc = 0x2c6cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 16));
    // 0x2c6cb4: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6cb8: 0x261060bc  addiu       $s0, $s0, 0x60BC
    ctx->pc = 0x2c6cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24764));
    // 0x2c6cbc: 0x7fb00870  sq          $s0, 0x870($sp)
    ctx->pc = 0x2c6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 16));
    // 0x2c6cc0: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6cc4: 0x26105480  addiu       $s0, $s0, 0x5480
    ctx->pc = 0x2c6cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21632));
    // 0x2c6cc8: 0x7fb00860  sq          $s0, 0x860($sp)
    ctx->pc = 0x2c6cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 16));
    // 0x2c6ccc: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6cccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6cd0: 0xe7020000  swc1        $f2, 0x0($t8)
    ctx->pc = 0x2c6cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F30u, _value); } while (0); }
    // 0x2c6cd4: 0x261060c8  addiu       $s0, $s0, 0x60C8
    ctx->pc = 0x2c6cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24776));
    // 0x2c6cd8: 0x7fb00850  sq          $s0, 0x850($sp)
    ctx->pc = 0x2c6cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 16));
    // 0x2c6cdc: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6ce0: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x2c6ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F34u, _value); } while (0); }
    // 0x2c6ce4: 0x26105490  addiu       $s0, $s0, 0x5490
    ctx->pc = 0x2c6ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21648));
    // 0x2c6ce8: 0x7fb00840  sq          $s0, 0x840($sp)
    ctx->pc = 0x2c6ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 16));
    // 0x2c6cec: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6cecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6cf0: 0xe7000008  swc1        $f0, 0x8($t8)
    ctx->pc = 0x2c6cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F38u, _value); } while (0); }
    // 0x2c6cf4: 0x261060d4  addiu       $s0, $s0, 0x60D4
    ctx->pc = 0x2c6cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24788));
    // 0x2c6cf8: 0x7fb00830  sq          $s0, 0x830($sp)
    ctx->pc = 0x2c6cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 16));
    // 0x2c6cfc: 0x3c18008d  lui         $t8, 0x8D
    ctx->pc = 0x2c6cfcu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)141 << 16));
    // 0x2c6d00: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x2c6d00u;
    { uint32_t bits = FAST_READ32(0x4E5270u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6d04: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6d04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6d08: 0x261054a0  addiu       $s0, $s0, 0x54A0
    ctx->pc = 0x2c6d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21664));
    // 0x2c6d0c: 0x271862fc  addiu       $t8, $t8, 0x62FC
    ctx->pc = 0x2c6d0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 25340));
    // 0x2c6d10: 0x7fb00820  sq          $s0, 0x820($sp)
    ctx->pc = 0x2c6d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 16));
    // 0x2c6d14: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x2c6d14u;
    { uint32_t bits = FAST_READ32(0x4E5274u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6d18: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2c6d18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2c6d1c: 0x261060e0  addiu       $s0, $s0, 0x60E0
    ctx->pc = 0x2c6d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24800));
    // 0x2c6d20: 0x7fb00810  sq          $s0, 0x810($sp)
    ctx->pc = 0x2c6d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), GPR_VEC(ctx, 16));
    // 0x2c6d24: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x2c6d24u;
    { uint32_t bits = FAST_READ32(0x4E5278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d28: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2c6d28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x2c6d2c: 0x26105740  addiu       $s0, $s0, 0x5740
    ctx->pc = 0x2c6d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22336));
    // 0x2c6d30: 0x3c0f004e  lui         $t7, 0x4E
    ctx->pc = 0x2c6d30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)78 << 16));
    // 0x2c6d34: 0x25ef54b0  addiu       $t7, $t7, 0x54B0
    ctx->pc = 0x2c6d34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21680));
    // 0x2c6d38: 0x7faf0800  sq          $t7, 0x800($sp)
    ctx->pc = 0x2c6d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), GPR_VEC(ctx, 15));
    // 0x2c6d3c: 0x3c0f008d  lui         $t7, 0x8D
    ctx->pc = 0x2c6d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)141 << 16));
    // 0x2c6d40: 0x25ef60ec  addiu       $t7, $t7, 0x60EC
    ctx->pc = 0x2c6d40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 24812));
    // 0x2c6d44: 0x7faf07f0  sq          $t7, 0x7F0($sp)
    ctx->pc = 0x2c6d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2032), GPR_VEC(ctx, 15));
    // 0x2c6d48: 0x3c0f004e  lui         $t7, 0x4E
    ctx->pc = 0x2c6d48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)78 << 16));
    // 0x2c6d4c: 0x25ef54c0  addiu       $t7, $t7, 0x54C0
    ctx->pc = 0x2c6d4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21696));
    // 0x2c6d50: 0x7faf07e0  sq          $t7, 0x7E0($sp)
    ctx->pc = 0x2c6d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2016), GPR_VEC(ctx, 15));
    // 0x2c6d54: 0x3c0f008d  lui         $t7, 0x8D
    ctx->pc = 0x2c6d54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)141 << 16));
    // 0x2c6d58: 0x25ef60f8  addiu       $t7, $t7, 0x60F8
    ctx->pc = 0x2c6d58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 24824));
    // 0x2c6d5c: 0x7faf07d0  sq          $t7, 0x7D0($sp)
    ctx->pc = 0x2c6d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2000), GPR_VEC(ctx, 15));
    // 0x2c6d60: 0x3c0f004e  lui         $t7, 0x4E
    ctx->pc = 0x2c6d60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)78 << 16));
    // 0x2c6d64: 0x25ef54d0  addiu       $t7, $t7, 0x54D0
    ctx->pc = 0x2c6d64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21712));
    // 0x2c6d68: 0x7faf07c0  sq          $t7, 0x7C0($sp)
    ctx->pc = 0x2c6d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1984), GPR_VEC(ctx, 15));
    // 0x2c6d6c: 0x3c0f008d  lui         $t7, 0x8D
    ctx->pc = 0x2c6d6cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)141 << 16));
    // 0x2c6d70: 0x25ef6104  addiu       $t7, $t7, 0x6104
    ctx->pc = 0x2c6d70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 24836));
    // 0x2c6d74: 0x7faf07b0  sq          $t7, 0x7B0($sp)
    ctx->pc = 0x2c6d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1968), GPR_VEC(ctx, 15));
    // 0x2c6d78: 0x3c0f004e  lui         $t7, 0x4E
    ctx->pc = 0x2c6d78u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)78 << 16));
    // 0x2c6d7c: 0x25ef54e0  addiu       $t7, $t7, 0x54E0
    ctx->pc = 0x2c6d7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21728));
    // 0x2c6d80: 0x7faf07a0  sq          $t7, 0x7A0($sp)
    ctx->pc = 0x2c6d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1952), GPR_VEC(ctx, 15));
    // 0x2c6d84: 0x3c0f008d  lui         $t7, 0x8D
    ctx->pc = 0x2c6d84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)141 << 16));
    // 0x2c6d88: 0x25ef6110  addiu       $t7, $t7, 0x6110
    ctx->pc = 0x2c6d88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 24848));
    // 0x2c6d8c: 0x7faf0790  sq          $t7, 0x790($sp)
    ctx->pc = 0x2c6d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1936), GPR_VEC(ctx, 15));
    // 0x2c6d90: 0x3c0f004e  lui         $t7, 0x4E
    ctx->pc = 0x2c6d90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)78 << 16));
    // 0x2c6d94: 0x25ef54f0  addiu       $t7, $t7, 0x54F0
    ctx->pc = 0x2c6d94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21744));
    // 0x2c6d98: 0x7faf0780  sq          $t7, 0x780($sp)
    ctx->pc = 0x2c6d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1920), GPR_VEC(ctx, 15));
    // 0x2c6d9c: 0x3c0f008d  lui         $t7, 0x8D
    ctx->pc = 0x2c6d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)141 << 16));
    // 0x2c6da0: 0x25ef611c  addiu       $t7, $t7, 0x611C
    ctx->pc = 0x2c6da0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 24860));
    // 0x2c6da4: 0x7faf0770  sq          $t7, 0x770($sp)
    ctx->pc = 0x2c6da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1904), GPR_VEC(ctx, 15));
    // 0x2c6da8: 0x3c0f004e  lui         $t7, 0x4E
    ctx->pc = 0x2c6da8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)78 << 16));
    // 0x2c6dac: 0x25ef5500  addiu       $t7, $t7, 0x5500
    ctx->pc = 0x2c6dacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21760));
    // 0x2c6db0: 0x7faf0760  sq          $t7, 0x760($sp)
    ctx->pc = 0x2c6db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1888), GPR_VEC(ctx, 15));
    // 0x2c6db4: 0x3c0f008d  lui         $t7, 0x8D
    ctx->pc = 0x2c6db4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)141 << 16));
    // 0x2c6db8: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x2c6db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F3Cu, _value); } while (0); }
    // 0x2c6dbc: 0x25ef6128  addiu       $t7, $t7, 0x6128
    ctx->pc = 0x2c6dbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 24872));
    // 0x2c6dc0: 0x7faf0750  sq          $t7, 0x750($sp)
    ctx->pc = 0x2c6dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1872), GPR_VEC(ctx, 15));
    // 0x2c6dc4: 0x3c0f004e  lui         $t7, 0x4E
    ctx->pc = 0x2c6dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)78 << 16));
    // 0x2c6dc8: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x2c6dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F40u, _value); } while (0); }
    // 0x2c6dcc: 0x25ef5510  addiu       $t7, $t7, 0x5510
    ctx->pc = 0x2c6dccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 21776));
    // 0x2c6dd0: 0x7faf0740  sq          $t7, 0x740($sp)
    ctx->pc = 0x2c6dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1856), GPR_VEC(ctx, 15));
    // 0x2c6dd4: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x2c6dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F44u, _value); } while (0); }
    // 0x2c6dd8: 0x3c0f008d  lui         $t7, 0x8D
    ctx->pc = 0x2c6dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ddc: 0x3c0e008d  lui         $t6, 0x8D
    ctx->pc = 0x2c6ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)141 << 16));
    // 0x2c6de0: 0x25ef62d8  addiu       $t7, $t7, 0x62D8
    ctx->pc = 0x2c6de0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 25304));
    // 0x2c6de4: 0x25ce6134  addiu       $t6, $t6, 0x6134
    ctx->pc = 0x2c6de4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24884));
    // 0x2c6de8: 0x7fae0730  sq          $t6, 0x730($sp)
    ctx->pc = 0x2c6de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), GPR_VEC(ctx, 14));
    // 0x2c6dec: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x2c6decu;
    { uint32_t bits = FAST_READ32(0x4E5280u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6df0: 0x3c0e004e  lui         $t6, 0x4E
    ctx->pc = 0x2c6df0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)78 << 16));
    // 0x2c6df4: 0x25ce5520  addiu       $t6, $t6, 0x5520
    ctx->pc = 0x2c6df4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 21792));
    // 0x2c6df8: 0x7fae0720  sq          $t6, 0x720($sp)
    ctx->pc = 0x2c6df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1824), GPR_VEC(ctx, 14));
    // 0x2c6dfc: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x2c6dfcu;
    { uint32_t bits = FAST_READ32(0x4E5284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6e00: 0x3c0e008d  lui         $t6, 0x8D
    ctx->pc = 0x2c6e00u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)141 << 16));
    // 0x2c6e04: 0x25ce6140  addiu       $t6, $t6, 0x6140
    ctx->pc = 0x2c6e04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24896));
    // 0x2c6e08: 0x7fae0710  sq          $t6, 0x710($sp)
    ctx->pc = 0x2c6e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1808), GPR_VEC(ctx, 14));
    // 0x2c6e0c: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x2c6e0cu;
    { uint32_t bits = FAST_READ32(0x4E5288u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6e10: 0x3c0e004e  lui         $t6, 0x4E
    ctx->pc = 0x2c6e10u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)78 << 16));
    // 0x2c6e14: 0x25ce5750  addiu       $t6, $t6, 0x5750
    ctx->pc = 0x2c6e14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 22352));
    // 0x2c6e18: 0x3c0d004e  lui         $t5, 0x4E
    ctx->pc = 0x2c6e18u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)78 << 16));
    // 0x2c6e1c: 0x25ad5530  addiu       $t5, $t5, 0x5530
    ctx->pc = 0x2c6e1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 21808));
    // 0x2c6e20: 0x7fad0700  sq          $t5, 0x700($sp)
    ctx->pc = 0x2c6e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), GPR_VEC(ctx, 13));
    // 0x2c6e24: 0x3c0d008d  lui         $t5, 0x8D
    ctx->pc = 0x2c6e24u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)141 << 16));
    // 0x2c6e28: 0x25ad614c  addiu       $t5, $t5, 0x614C
    ctx->pc = 0x2c6e28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24908));
    // 0x2c6e2c: 0x7fad06f0  sq          $t5, 0x6F0($sp)
    ctx->pc = 0x2c6e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), GPR_VEC(ctx, 13));
    // 0x2c6e30: 0x3c0d004e  lui         $t5, 0x4E
    ctx->pc = 0x2c6e30u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)78 << 16));
    // 0x2c6e34: 0x25ad5540  addiu       $t5, $t5, 0x5540
    ctx->pc = 0x2c6e34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 21824));
    // 0x2c6e38: 0x7fad06e0  sq          $t5, 0x6E0($sp)
    ctx->pc = 0x2c6e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), GPR_VEC(ctx, 13));
    // 0x2c6e3c: 0x3c0d008d  lui         $t5, 0x8D
    ctx->pc = 0x2c6e3cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)141 << 16));
    // 0x2c6e40: 0x25ad6158  addiu       $t5, $t5, 0x6158
    ctx->pc = 0x2c6e40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24920));
    // 0x2c6e44: 0x7fad06d0  sq          $t5, 0x6D0($sp)
    ctx->pc = 0x2c6e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 13));
    // 0x2c6e48: 0x3c0d004e  lui         $t5, 0x4E
    ctx->pc = 0x2c6e48u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)78 << 16));
    // 0x2c6e4c: 0x25ad5550  addiu       $t5, $t5, 0x5550
    ctx->pc = 0x2c6e4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 21840));
    // 0x2c6e50: 0x7fad06c0  sq          $t5, 0x6C0($sp)
    ctx->pc = 0x2c6e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 13));
    // 0x2c6e54: 0x3c0d008d  lui         $t5, 0x8D
    ctx->pc = 0x2c6e54u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)141 << 16));
    // 0x2c6e58: 0x25ad6164  addiu       $t5, $t5, 0x6164
    ctx->pc = 0x2c6e58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24932));
    // 0x2c6e5c: 0x7fad06b0  sq          $t5, 0x6B0($sp)
    ctx->pc = 0x2c6e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 13));
    // 0x2c6e60: 0x3c0d004e  lui         $t5, 0x4E
    ctx->pc = 0x2c6e60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)78 << 16));
    // 0x2c6e64: 0x25ad5560  addiu       $t5, $t5, 0x5560
    ctx->pc = 0x2c6e64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 21856));
    // 0x2c6e68: 0x7fad06a0  sq          $t5, 0x6A0($sp)
    ctx->pc = 0x2c6e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), GPR_VEC(ctx, 13));
    // 0x2c6e6c: 0x3c0d008d  lui         $t5, 0x8D
    ctx->pc = 0x2c6e6cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)141 << 16));
    // 0x2c6e70: 0x25ad6170  addiu       $t5, $t5, 0x6170
    ctx->pc = 0x2c6e70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24944));
    // 0x2c6e74: 0x7fad0690  sq          $t5, 0x690($sp)
    ctx->pc = 0x2c6e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 13));
    // 0x2c6e78: 0x3c0d004e  lui         $t5, 0x4E
    ctx->pc = 0x2c6e78u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)78 << 16));
    // 0x2c6e7c: 0x25ad5570  addiu       $t5, $t5, 0x5570
    ctx->pc = 0x2c6e7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 21872));
    // 0x2c6e80: 0x7fad0680  sq          $t5, 0x680($sp)
    ctx->pc = 0x2c6e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 13));
    // 0x2c6e84: 0x3c0d008d  lui         $t5, 0x8D
    ctx->pc = 0x2c6e84u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)141 << 16));
    // 0x2c6e88: 0x25ad617c  addiu       $t5, $t5, 0x617C
    ctx->pc = 0x2c6e88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24956));
    // 0x2c6e8c: 0x7fad0670  sq          $t5, 0x670($sp)
    ctx->pc = 0x2c6e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 13));
    // 0x2c6e90: 0x3c0d004e  lui         $t5, 0x4E
    ctx->pc = 0x2c6e90u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)78 << 16));
    // 0x2c6e94: 0x25ad5580  addiu       $t5, $t5, 0x5580
    ctx->pc = 0x2c6e94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 21888));
    // 0x2c6e98: 0x7fad0660  sq          $t5, 0x660($sp)
    ctx->pc = 0x2c6e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 13));
    // 0x2c6e9c: 0x3c0d008d  lui         $t5, 0x8D
    ctx->pc = 0x2c6e9cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ea0: 0xe5820000  swc1        $f2, 0x0($t4)
    ctx->pc = 0x2c6ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F48u, _value); } while (0); }
    // 0x2c6ea4: 0x25ad6188  addiu       $t5, $t5, 0x6188
    ctx->pc = 0x2c6ea4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24968));
    // 0x2c6ea8: 0x7fad0650  sq          $t5, 0x650($sp)
    ctx->pc = 0x2c6ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 13));
    // 0x2c6eac: 0x3c0d004e  lui         $t5, 0x4E
    ctx->pc = 0x2c6eacu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)78 << 16));
    // 0x2c6eb0: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x2c6eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F4Cu, _value); } while (0); }
    // 0x2c6eb4: 0x25ad5590  addiu       $t5, $t5, 0x5590
    ctx->pc = 0x2c6eb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 21904));
    // 0x2c6eb8: 0x7fad0640  sq          $t5, 0x640($sp)
    ctx->pc = 0x2c6eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1600), GPR_VEC(ctx, 13));
    // 0x2c6ebc: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x2c6ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F50u, _value); } while (0); }
    // 0x2c6ec0: 0x3c0d008d  lui         $t5, 0x8D
    ctx->pc = 0x2c6ec0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ec4: 0x3c0c008d  lui         $t4, 0x8D
    ctx->pc = 0x2c6ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ec8: 0x25ad62e4  addiu       $t5, $t5, 0x62E4
    ctx->pc = 0x2c6ec8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 25316));
    // 0x2c6ecc: 0x258c6194  addiu       $t4, $t4, 0x6194
    ctx->pc = 0x2c6eccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24980));
    // 0x2c6ed0: 0x7fac0630  sq          $t4, 0x630($sp)
    ctx->pc = 0x2c6ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), GPR_VEC(ctx, 12));
    // 0x2c6ed4: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x2c6ed4u;
    { uint32_t bits = FAST_READ32(0x4E5290u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6ed8: 0x3c0c004e  lui         $t4, 0x4E
    ctx->pc = 0x2c6ed8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)78 << 16));
    // 0x2c6edc: 0x258c55a0  addiu       $t4, $t4, 0x55A0
    ctx->pc = 0x2c6edcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 21920));
    // 0x2c6ee0: 0x7fac0620  sq          $t4, 0x620($sp)
    ctx->pc = 0x2c6ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1568), GPR_VEC(ctx, 12));
    // 0x2c6ee4: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x2c6ee4u;
    { uint32_t bits = FAST_READ32(0x4E5294u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6ee8: 0x3c0c008d  lui         $t4, 0x8D
    ctx->pc = 0x2c6ee8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)141 << 16));
    // 0x2c6eec: 0x258c61a0  addiu       $t4, $t4, 0x61A0
    ctx->pc = 0x2c6eecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24992));
    // 0x2c6ef0: 0x7fac0610  sq          $t4, 0x610($sp)
    ctx->pc = 0x2c6ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), GPR_VEC(ctx, 12));
    // 0x2c6ef4: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x2c6ef4u;
    { uint32_t bits = FAST_READ32(0x4E5298u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ef8: 0x3c0c004e  lui         $t4, 0x4E
    ctx->pc = 0x2c6ef8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)78 << 16));
    // 0x2c6efc: 0x258c5760  addiu       $t4, $t4, 0x5760
    ctx->pc = 0x2c6efcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 22368));
    // 0x2c6f00: 0x3c0b004e  lui         $t3, 0x4E
    ctx->pc = 0x2c6f00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)78 << 16));
    // 0x2c6f04: 0x256b55b0  addiu       $t3, $t3, 0x55B0
    ctx->pc = 0x2c6f04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 21936));
    // 0x2c6f08: 0x7fab0600  sq          $t3, 0x600($sp)
    ctx->pc = 0x2c6f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), GPR_VEC(ctx, 11));
    // 0x2c6f0c: 0x3c0b008d  lui         $t3, 0x8D
    ctx->pc = 0x2c6f0cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)141 << 16));
    // 0x2c6f10: 0x256b61ac  addiu       $t3, $t3, 0x61AC
    ctx->pc = 0x2c6f10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25004));
    // 0x2c6f14: 0x7fab05f0  sq          $t3, 0x5F0($sp)
    ctx->pc = 0x2c6f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 11));
    // 0x2c6f18: 0x3c0b004e  lui         $t3, 0x4E
    ctx->pc = 0x2c6f18u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)78 << 16));
    // 0x2c6f1c: 0x256b55c0  addiu       $t3, $t3, 0x55C0
    ctx->pc = 0x2c6f1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 21952));
    // 0x2c6f20: 0x7fab05e0  sq          $t3, 0x5E0($sp)
    ctx->pc = 0x2c6f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 11));
    // 0x2c6f24: 0x3c0b008d  lui         $t3, 0x8D
    ctx->pc = 0x2c6f24u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)141 << 16));
    // 0x2c6f28: 0x256b61b8  addiu       $t3, $t3, 0x61B8
    ctx->pc = 0x2c6f28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25016));
    // 0x2c6f2c: 0x7fab05d0  sq          $t3, 0x5D0($sp)
    ctx->pc = 0x2c6f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), GPR_VEC(ctx, 11));
    // 0x2c6f30: 0x3c0b004e  lui         $t3, 0x4E
    ctx->pc = 0x2c6f30u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)78 << 16));
    // 0x2c6f34: 0x256b55d0  addiu       $t3, $t3, 0x55D0
    ctx->pc = 0x2c6f34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 21968));
    // 0x2c6f38: 0x7fab05c0  sq          $t3, 0x5C0($sp)
    ctx->pc = 0x2c6f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 11));
    // 0x2c6f3c: 0x3c0b008d  lui         $t3, 0x8D
    ctx->pc = 0x2c6f3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)141 << 16));
    // 0x2c6f40: 0x256b61c4  addiu       $t3, $t3, 0x61C4
    ctx->pc = 0x2c6f40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25028));
    // 0x2c6f44: 0x7fab05b0  sq          $t3, 0x5B0($sp)
    ctx->pc = 0x2c6f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 11));
    // 0x2c6f48: 0x3c0b004e  lui         $t3, 0x4E
    ctx->pc = 0x2c6f48u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)78 << 16));
    // 0x2c6f4c: 0x256b55e0  addiu       $t3, $t3, 0x55E0
    ctx->pc = 0x2c6f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 21984));
    // 0x2c6f50: 0x7fab05a0  sq          $t3, 0x5A0($sp)
    ctx->pc = 0x2c6f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 11));
    // 0x2c6f54: 0x3c0b008d  lui         $t3, 0x8D
    ctx->pc = 0x2c6f54u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)141 << 16));
    // 0x2c6f58: 0x256b61d0  addiu       $t3, $t3, 0x61D0
    ctx->pc = 0x2c6f58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25040));
    // 0x2c6f5c: 0x7fab0590  sq          $t3, 0x590($sp)
    ctx->pc = 0x2c6f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 11));
    // 0x2c6f60: 0x3c0b004e  lui         $t3, 0x4E
    ctx->pc = 0x2c6f60u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)78 << 16));
    // 0x2c6f64: 0x256b55f0  addiu       $t3, $t3, 0x55F0
    ctx->pc = 0x2c6f64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 22000));
    // 0x2c6f68: 0x7fab0580  sq          $t3, 0x580($sp)
    ctx->pc = 0x2c6f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 11));
    // 0x2c6f6c: 0x3c0b008d  lui         $t3, 0x8D
    ctx->pc = 0x2c6f6cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)141 << 16));
    // 0x2c6f70: 0x256b61dc  addiu       $t3, $t3, 0x61DC
    ctx->pc = 0x2c6f70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25052));
    // 0x2c6f74: 0x7fab0570  sq          $t3, 0x570($sp)
    ctx->pc = 0x2c6f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 11));
    // 0x2c6f78: 0x3c0b004e  lui         $t3, 0x4E
    ctx->pc = 0x2c6f78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)78 << 16));
    // 0x2c6f7c: 0x256b5600  addiu       $t3, $t3, 0x5600
    ctx->pc = 0x2c6f7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 22016));
    // 0x2c6f80: 0x7fab0560  sq          $t3, 0x560($sp)
    ctx->pc = 0x2c6f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 11));
    // 0x2c6f84: 0x3c0b008d  lui         $t3, 0x8D
    ctx->pc = 0x2c6f84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)141 << 16));
    // 0x2c6f88: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x2c6f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F54u, _value); } while (0); }
    // 0x2c6f8c: 0x256b61e8  addiu       $t3, $t3, 0x61E8
    ctx->pc = 0x2c6f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25064));
    // 0x2c6f90: 0x7fab0550  sq          $t3, 0x550($sp)
    ctx->pc = 0x2c6f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 11));
    // 0x2c6f94: 0x3c0b004e  lui         $t3, 0x4E
    ctx->pc = 0x2c6f94u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)78 << 16));
    // 0x2c6f98: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x2c6f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F58u, _value); } while (0); }
    // 0x2c6f9c: 0x256b5610  addiu       $t3, $t3, 0x5610
    ctx->pc = 0x2c6f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 22032));
    // 0x2c6fa0: 0x7fab0540  sq          $t3, 0x540($sp)
    ctx->pc = 0x2c6fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 11));
    // 0x2c6fa4: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x2c6fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F5Cu, _value); } while (0); }
    // 0x2c6fa8: 0x3c0b008d  lui         $t3, 0x8D
    ctx->pc = 0x2c6fa8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)141 << 16));
    // 0x2c6fac: 0x3c0a008d  lui         $t2, 0x8D
    ctx->pc = 0x2c6facu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)141 << 16));
    // 0x2c6fb0: 0x256b62f0  addiu       $t3, $t3, 0x62F0
    ctx->pc = 0x2c6fb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25328));
    // 0x2c6fb4: 0x254a61f4  addiu       $t2, $t2, 0x61F4
    ctx->pc = 0x2c6fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 25076));
    // 0x2c6fb8: 0x7faa0530  sq          $t2, 0x530($sp)
    ctx->pc = 0x2c6fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 10));
    // 0x2c6fbc: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x2c6fbcu;
    { uint32_t bits = FAST_READ32(0x4E52A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6fc0: 0x3c0a004e  lui         $t2, 0x4E
    ctx->pc = 0x2c6fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)78 << 16));
    // 0x2c6fc4: 0x254a5620  addiu       $t2, $t2, 0x5620
    ctx->pc = 0x2c6fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 22048));
    // 0x2c6fc8: 0x7faa0520  sq          $t2, 0x520($sp)
    ctx->pc = 0x2c6fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 10));
    // 0x2c6fcc: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x2c6fccu;
    { uint32_t bits = FAST_READ32(0x4E52A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6fd0: 0x3c0a008d  lui         $t2, 0x8D
    ctx->pc = 0x2c6fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)141 << 16));
    // 0x2c6fd4: 0x254a6200  addiu       $t2, $t2, 0x6200
    ctx->pc = 0x2c6fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 25088));
    // 0x2c6fd8: 0x7faa0510  sq          $t2, 0x510($sp)
    ctx->pc = 0x2c6fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 10));
    // 0x2c6fdc: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x2c6fdcu;
    { uint32_t bits = FAST_READ32(0x4E52A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6fe0: 0x3c0a004e  lui         $t2, 0x4E
    ctx->pc = 0x2c6fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)78 << 16));
    // 0x2c6fe4: 0x254a5770  addiu       $t2, $t2, 0x5770
    ctx->pc = 0x2c6fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 22384));
    // 0x2c6fe8: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x2c6fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
    // 0x2c6fec: 0x25295630  addiu       $t1, $t1, 0x5630
    ctx->pc = 0x2c6fecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22064));
    // 0x2c6ff0: 0x7fa90500  sq          $t1, 0x500($sp)
    ctx->pc = 0x2c6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 9));
    // 0x2c6ff4: 0x3c09008d  lui         $t1, 0x8D
    ctx->pc = 0x2c6ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)141 << 16));
    // 0x2c6ff8: 0x2529620c  addiu       $t1, $t1, 0x620C
    ctx->pc = 0x2c6ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25100));
    // 0x2c6ffc: 0x7fa904f0  sq          $t1, 0x4F0($sp)
    ctx->pc = 0x2c6ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 9));
    // 0x2c7000: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x2c7000u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
    // 0x2c7004: 0x25295640  addiu       $t1, $t1, 0x5640
    ctx->pc = 0x2c7004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22080));
    // 0x2c7008: 0x7fa904e0  sq          $t1, 0x4E0($sp)
    ctx->pc = 0x2c7008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 9));
    // 0x2c700c: 0x3c09008d  lui         $t1, 0x8D
    ctx->pc = 0x2c700cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)141 << 16));
    // 0x2c7010: 0x25296218  addiu       $t1, $t1, 0x6218
    ctx->pc = 0x2c7010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25112));
    // 0x2c7014: 0x7fa904d0  sq          $t1, 0x4D0($sp)
    ctx->pc = 0x2c7014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 9));
    // 0x2c7018: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x2c7018u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
    // 0x2c701c: 0x25295650  addiu       $t1, $t1, 0x5650
    ctx->pc = 0x2c701cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22096));
    // 0x2c7020: 0x7fa904c0  sq          $t1, 0x4C0($sp)
    ctx->pc = 0x2c7020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 9));
    // 0x2c7024: 0x3c09008d  lui         $t1, 0x8D
    ctx->pc = 0x2c7024u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)141 << 16));
    // 0x2c7028: 0x25296224  addiu       $t1, $t1, 0x6224
    ctx->pc = 0x2c7028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25124));
    // 0x2c702c: 0x7fa904b0  sq          $t1, 0x4B0($sp)
    ctx->pc = 0x2c702cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 9));
    // 0x2c7030: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x2c7030u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
    // 0x2c7034: 0x25295660  addiu       $t1, $t1, 0x5660
    ctx->pc = 0x2c7034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22112));
    // 0x2c7038: 0x7fa904a0  sq          $t1, 0x4A0($sp)
    ctx->pc = 0x2c7038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 9));
    // 0x2c703c: 0x3c09008d  lui         $t1, 0x8D
    ctx->pc = 0x2c703cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)141 << 16));
    // 0x2c7040: 0x25296230  addiu       $t1, $t1, 0x6230
    ctx->pc = 0x2c7040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25136));
    // 0x2c7044: 0x7fa90490  sq          $t1, 0x490($sp)
    ctx->pc = 0x2c7044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 9));
    // 0x2c7048: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x2c7048u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
    // 0x2c704c: 0x25295670  addiu       $t1, $t1, 0x5670
    ctx->pc = 0x2c704cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22128));
    // 0x2c7050: 0x7fa90480  sq          $t1, 0x480($sp)
    ctx->pc = 0x2c7050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 9));
    // 0x2c7054: 0x3c09008d  lui         $t1, 0x8D
    ctx->pc = 0x2c7054u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)141 << 16));
    // 0x2c7058: 0x2529623c  addiu       $t1, $t1, 0x623C
    ctx->pc = 0x2c7058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25148));
    // 0x2c705c: 0x7fa90470  sq          $t1, 0x470($sp)
    ctx->pc = 0x2c705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 9));
    // 0x2c7060: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x2c7060u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
    // 0x2c7064: 0x25295680  addiu       $t1, $t1, 0x5680
    ctx->pc = 0x2c7064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22144));
    // 0x2c7068: 0x7fa90460  sq          $t1, 0x460($sp)
    ctx->pc = 0x2c7068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 9));
    // 0x2c706c: 0x3c09008d  lui         $t1, 0x8D
    ctx->pc = 0x2c706cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)141 << 16));
    // 0x2c7070: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x2c7070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F60u, _value); } while (0); }
    // 0x2c7074: 0x25296248  addiu       $t1, $t1, 0x6248
    ctx->pc = 0x2c7074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25160));
    // 0x2c7078: 0x7fa90450  sq          $t1, 0x450($sp)
    ctx->pc = 0x2c7078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 9));
    // 0x2c707c: 0x3c09004e  lui         $t1, 0x4E
    ctx->pc = 0x2c707cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)78 << 16));
    // 0x2c7080: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x2c7080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F64u, _value); } while (0); }
    // 0x2c7084: 0x25295690  addiu       $t1, $t1, 0x5690
    ctx->pc = 0x2c7084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22160));
    // 0x2c7088: 0x7fa90440  sq          $t1, 0x440($sp)
    ctx->pc = 0x2c7088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 9));
    // 0x2c708c: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x2c708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F68u, _value); } while (0); }
    // 0x2c7090: 0x3c09008d  lui         $t1, 0x8D
    ctx->pc = 0x2c7090u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)141 << 16));
    // 0x2c7094: 0x3c08008d  lui         $t0, 0x8D
    ctx->pc = 0x2c7094u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)141 << 16));
    // 0x2c7098: 0x25296314  addiu       $t1, $t1, 0x6314
    ctx->pc = 0x2c7098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25364));
    // 0x2c709c: 0x25086254  addiu       $t0, $t0, 0x6254
    ctx->pc = 0x2c709cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25172));
    // 0x2c70a0: 0x7fa80430  sq          $t0, 0x430($sp)
    ctx->pc = 0x2c70a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 8));
    // 0x2c70a4: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2c70a4u;
    { uint32_t bits = FAST_READ32(0x4E52B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c70a8: 0x3c08004e  lui         $t0, 0x4E
    ctx->pc = 0x2c70a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)78 << 16));
    // 0x2c70ac: 0x250856a0  addiu       $t0, $t0, 0x56A0
    ctx->pc = 0x2c70acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22176));
    // 0x2c70b0: 0x7fa80420  sq          $t0, 0x420($sp)
    ctx->pc = 0x2c70b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 8));
    // 0x2c70b4: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2c70b4u;
    { uint32_t bits = FAST_READ32(0x4E52B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c70b8: 0x3c08008d  lui         $t0, 0x8D
    ctx->pc = 0x2c70b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)141 << 16));
    // 0x2c70bc: 0x25086260  addiu       $t0, $t0, 0x6260
    ctx->pc = 0x2c70bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25184));
    // 0x2c70c0: 0x7fa80410  sq          $t0, 0x410($sp)
    ctx->pc = 0x2c70c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 8));
    // 0x2c70c4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2c70c4u;
    { uint32_t bits = FAST_READ32(0x4E52B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c70c8: 0x3c08004e  lui         $t0, 0x4E
    ctx->pc = 0x2c70c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)78 << 16));
    // 0x2c70cc: 0x250857a0  addiu       $t0, $t0, 0x57A0
    ctx->pc = 0x2c70ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22432));
    // 0x2c70d0: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2c70d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2c70d4: 0x24e756b0  addiu       $a3, $a3, 0x56B0
    ctx->pc = 0x2c70d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22192));
    // 0x2c70d8: 0x7fa70400  sq          $a3, 0x400($sp)
    ctx->pc = 0x2c70d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 7));
    // 0x2c70dc: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x2c70dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x2c70e0: 0x24e7626c  addiu       $a3, $a3, 0x626C
    ctx->pc = 0x2c70e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25196));
    // 0x2c70e4: 0x7fa703f0  sq          $a3, 0x3F0($sp)
    ctx->pc = 0x2c70e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 7));
    // 0x2c70e8: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2c70e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2c70ec: 0x24e756c0  addiu       $a3, $a3, 0x56C0
    ctx->pc = 0x2c70ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22208));
    // 0x2c70f0: 0x7fa703e0  sq          $a3, 0x3E0($sp)
    ctx->pc = 0x2c70f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 7));
    // 0x2c70f4: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x2c70f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x2c70f8: 0x24e76278  addiu       $a3, $a3, 0x6278
    ctx->pc = 0x2c70f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25208));
    // 0x2c70fc: 0x7fa703d0  sq          $a3, 0x3D0($sp)
    ctx->pc = 0x2c70fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 7));
    // 0x2c7100: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2c7100u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2c7104: 0x24e756d0  addiu       $a3, $a3, 0x56D0
    ctx->pc = 0x2c7104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22224));
    // 0x2c7108: 0x7fa703c0  sq          $a3, 0x3C0($sp)
    ctx->pc = 0x2c7108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 7));
    // 0x2c710c: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x2c710cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x2c7110: 0x24e76284  addiu       $a3, $a3, 0x6284
    ctx->pc = 0x2c7110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25220));
    // 0x2c7114: 0x7fa703b0  sq          $a3, 0x3B0($sp)
    ctx->pc = 0x2c7114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 7));
    // 0x2c7118: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2c7118u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2c711c: 0x24e756e0  addiu       $a3, $a3, 0x56E0
    ctx->pc = 0x2c711cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22240));
    // 0x2c7120: 0x7fa703a0  sq          $a3, 0x3A0($sp)
    ctx->pc = 0x2c7120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 7));
    // 0x2c7124: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x2c7124u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x2c7128: 0x24e76290  addiu       $a3, $a3, 0x6290
    ctx->pc = 0x2c7128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25232));
    // 0x2c712c: 0x7fa70390  sq          $a3, 0x390($sp)
    ctx->pc = 0x2c712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 7));
    // 0x2c7130: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2c7130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2c7134: 0x24e756f0  addiu       $a3, $a3, 0x56F0
    ctx->pc = 0x2c7134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22256));
    // 0x2c7138: 0x7fa70380  sq          $a3, 0x380($sp)
    ctx->pc = 0x2c7138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 7));
    // 0x2c713c: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x2c713cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x2c7140: 0x24e7629c  addiu       $a3, $a3, 0x629C
    ctx->pc = 0x2c7140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25244));
    // 0x2c7144: 0x7fa70370  sq          $a3, 0x370($sp)
    ctx->pc = 0x2c7144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 7));
    // 0x2c7148: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2c7148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2c714c: 0x24e75700  addiu       $a3, $a3, 0x5700
    ctx->pc = 0x2c714cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22272));
    // 0x2c7150: 0x7fa70360  sq          $a3, 0x360($sp)
    ctx->pc = 0x2c7150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 7));
    // 0x2c7154: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x2c7154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x2c7158: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2c7158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F6Cu, _value); } while (0); }
    // 0x2c715c: 0x24e762a8  addiu       $a3, $a3, 0x62A8
    ctx->pc = 0x2c715cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25256));
    // 0x2c7160: 0x7fa70350  sq          $a3, 0x350($sp)
    ctx->pc = 0x2c7160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 7));
    // 0x2c7164: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2c7164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2c7168: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2c7168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F70u, _value); } while (0); }
    // 0x2c716c: 0x24e75710  addiu       $a3, $a3, 0x5710
    ctx->pc = 0x2c716cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22288));
    // 0x2c7170: 0x7fa70340  sq          $a3, 0x340($sp)
    ctx->pc = 0x2c7170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 7));
    // 0x2c7174: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2c7174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F74u, _value); } while (0); }
    // 0x2c7178: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x2c7178u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x2c717c: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x2c717cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x2c7180: 0x24e76320  addiu       $a3, $a3, 0x6320
    ctx->pc = 0x2c7180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25376));
    // 0x2c7184: 0x24a562b4  addiu       $a1, $a1, 0x62B4
    ctx->pc = 0x2c7184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25268));
    // 0x2c7188: 0x7fa50330  sq          $a1, 0x330($sp)
    ctx->pc = 0x2c7188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 5));
    // 0x2c718c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2c718cu;
    { uint32_t bits = FAST_READ32(0x4E52C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7190: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2c7190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2c7194: 0x24a55720  addiu       $a1, $a1, 0x5720
    ctx->pc = 0x2c7194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22304));
    // 0x2c7198: 0x7fa50320  sq          $a1, 0x320($sp)
    ctx->pc = 0x2c7198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 5));
    // 0x2c719c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2c719cu;
    { uint32_t bits = FAST_READ32(0x4E52C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c71a0: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x2c71a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x2c71a4: 0x24a562c0  addiu       $a1, $a1, 0x62C0
    ctx->pc = 0x2c71a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
    // 0x2c71a8: 0x7fa50310  sq          $a1, 0x310($sp)
    ctx->pc = 0x2c71a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 5));
    // 0x2c71ac: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2c71acu;
    { uint32_t bits = FAST_READ32(0x4E52C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c71b0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2c71b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2c71b4: 0x24a557b0  addiu       $a1, $a1, 0x57B0
    ctx->pc = 0x2c71b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22448));
    // 0x2c71b8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2c71b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F78u, _value); } while (0); }
    // 0x2c71bc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2c71bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x2c71c0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2c71c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F7Cu, _value); } while (0); }
    // 0x2c71c4: 0x24845790  addiu       $a0, $a0, 0x5790
    ctx->pc = 0x2c71c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22416));
    // 0x2c71c8: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x2c71c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x2c71cc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2c71ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F80u, _value); } while (0); }
    // 0x2c71d0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c71d4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c71d4u;
    { uint32_t bits = FAST_READ32(0x4E52D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c71d8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c71d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c71dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c71dcu;
    { uint32_t bits = FAST_READ32(0x4E52D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c71e0: 0x2484632c  addiu       $a0, $a0, 0x632C
    ctx->pc = 0x2c71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25388));
    // 0x2c71e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c71e4u;
    { uint32_t bits = FAST_READ32(0x4E52D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c71e8: 0x246357c0  addiu       $v1, $v1, 0x57C0
    ctx->pc = 0x2c71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22464));
    // 0x2c71ec: 0x7fb30300  sq          $s3, 0x300($sp)
    ctx->pc = 0x2c71ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 19));
    // 0x2c71f0: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2c71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2c71f4: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c71f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c71f8: 0x24426338  addiu       $v0, $v0, 0x6338
    ctx->pc = 0x2c71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25400));
    // 0x2c71fc: 0x26736344  addiu       $s3, $s3, 0x6344
    ctx->pc = 0x2c71fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 25412));
    // 0x2c7200: 0x7fb302f0  sq          $s3, 0x2F0($sp)
    ctx->pc = 0x2c7200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 19));
    // 0x2c7204: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c7204u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c7208: 0x267357e0  addiu       $s3, $s3, 0x57E0
    ctx->pc = 0x2c7208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22496));
    // 0x2c720c: 0x7fb302e0  sq          $s3, 0x2E0($sp)
    ctx->pc = 0x2c720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 19));
    // 0x2c7210: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c7210u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c7214: 0x26736350  addiu       $s3, $s3, 0x6350
    ctx->pc = 0x2c7214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 25424));
    // 0x2c7218: 0x7fb302d0  sq          $s3, 0x2D0($sp)
    ctx->pc = 0x2c7218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 19));
    // 0x2c721c: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c721cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c7220: 0x267357f0  addiu       $s3, $s3, 0x57F0
    ctx->pc = 0x2c7220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22512));
    // 0x2c7224: 0x7fb302c0  sq          $s3, 0x2C0($sp)
    ctx->pc = 0x2c7224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 19));
    // 0x2c7228: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c7228u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c722c: 0x2673635c  addiu       $s3, $s3, 0x635C
    ctx->pc = 0x2c722cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 25436));
    // 0x2c7230: 0x7fb302b0  sq          $s3, 0x2B0($sp)
    ctx->pc = 0x2c7230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 19));
    // 0x2c7234: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c7234u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c7238: 0x26735800  addiu       $s3, $s3, 0x5800
    ctx->pc = 0x2c7238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22528));
    // 0x2c723c: 0x7fb302a0  sq          $s3, 0x2A0($sp)
    ctx->pc = 0x2c723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 19));
    // 0x2c7240: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c7240u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c7244: 0xe6c20000  swc1        $f2, 0x0($s6)
    ctx->pc = 0x2c7244u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F84u, _value); } while (0); }
    // 0x2c7248: 0x26736368  addiu       $s3, $s3, 0x6368
    ctx->pc = 0x2c7248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 25448));
    // 0x2c724c: 0x7fb30290  sq          $s3, 0x290($sp)
    ctx->pc = 0x2c724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 19));
    // 0x2c7250: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c7250u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c7254: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2c7254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F88u, _value); } while (0); }
    // 0x2c7258: 0x26735810  addiu       $s3, $s3, 0x5810
    ctx->pc = 0x2c7258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22544));
    // 0x2c725c: 0x7fb30280  sq          $s3, 0x280($sp)
    ctx->pc = 0x2c725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 19));
    // 0x2c7260: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x2c7260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D5F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5F8Cu, _value); } while (0); }
    // 0x2c7264: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c7264u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c7268: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7268u;
    { uint32_t bits = FAST_READ32(0x4E52E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c726c: 0x26735820  addiu       $s3, $s3, 0x5820
    ctx->pc = 0x2c726cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22560));
    // 0x2c7270: 0x3c16008d  lui         $s6, 0x8D
    ctx->pc = 0x2c7270u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)141 << 16));
    // 0x2c7274: 0x26d66374  addiu       $s6, $s6, 0x6374
    ctx->pc = 0x2c7274u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 25460));
    // 0x2c7278: 0x7fb30270  sq          $s3, 0x270($sp)
    ctx->pc = 0x2c7278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 19));
    // 0x2c727c: 0x3c13008d  lui         $s3, 0x8D
    ctx->pc = 0x2c727cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)141 << 16));
    // 0x2c7280: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7280u;
    { uint32_t bits = FAST_READ32(0x4E52E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7284: 0x26736380  addiu       $s3, $s3, 0x6380
    ctx->pc = 0x2c7284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 25472));
    // 0x2c7288: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x2c7288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
    // 0x2c728c: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c728cu;
    { uint32_t bits = FAST_READ32(0x4E52E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7290: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2c7290u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2c7294: 0x26735840  addiu       $s3, $s3, 0x5840
    ctx->pc = 0x2c7294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22592));
    // 0x2c7298: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c7298u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c729c: 0x26f76398  addiu       $s7, $s7, 0x6398
    ctx->pc = 0x2c729cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25496));
    // 0x2c72a0: 0x7fb70250  sq          $s7, 0x250($sp)
    ctx->pc = 0x2c72a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 23));
    // 0x2c72a4: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c72a4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c72a8: 0x26f75850  addiu       $s7, $s7, 0x5850
    ctx->pc = 0x2c72a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22608));
    // 0x2c72ac: 0x7fb70240  sq          $s7, 0x240($sp)
    ctx->pc = 0x2c72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 23));
    // 0x2c72b0: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c72b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c72b4: 0x26f763a4  addiu       $s7, $s7, 0x63A4
    ctx->pc = 0x2c72b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25508));
    // 0x2c72b8: 0x7fb70230  sq          $s7, 0x230($sp)
    ctx->pc = 0x2c72b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 23));
    // 0x2c72bc: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c72bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c72c0: 0x26f75860  addiu       $s7, $s7, 0x5860
    ctx->pc = 0x2c72c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22624));
    // 0x2c72c4: 0x7fb70220  sq          $s7, 0x220($sp)
    ctx->pc = 0x2c72c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 23));
    // 0x2c72c8: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c72c8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c72cc: 0x26f763b0  addiu       $s7, $s7, 0x63B0
    ctx->pc = 0x2c72ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25520));
    // 0x2c72d0: 0x7fb70210  sq          $s7, 0x210($sp)
    ctx->pc = 0x2c72d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 23));
    // 0x2c72d4: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c72d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c72d8: 0x26f75870  addiu       $s7, $s7, 0x5870
    ctx->pc = 0x2c72d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22640));
    // 0x2c72dc: 0x7fb70200  sq          $s7, 0x200($sp)
    ctx->pc = 0x2c72dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 23));
    // 0x2c72e0: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c72e0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c72e4: 0x26f763bc  addiu       $s7, $s7, 0x63BC
    ctx->pc = 0x2c72e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25532));
    // 0x2c72e8: 0x7fb701f0  sq          $s7, 0x1F0($sp)
    ctx->pc = 0x2c72e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 23));
    // 0x2c72ec: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c72ecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c72f0: 0x26f75880  addiu       $s7, $s7, 0x5880
    ctx->pc = 0x2c72f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22656));
    // 0x2c72f4: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x2c72f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x2c72f8: 0x7bb70b90  lq          $s7, 0xB90($sp)
    ctx->pc = 0x2c72f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2960)));
    // 0x2c72fc: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c72fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7300: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c7300u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c7304: 0x26f763c8  addiu       $s7, $s7, 0x63C8
    ctx->pc = 0x2c7304u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25544));
    // 0x2c7308: 0x7fb701d0  sq          $s7, 0x1D0($sp)
    ctx->pc = 0x2c7308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 23));
    // 0x2c730c: 0x7bb70b90  lq          $s7, 0xB90($sp)
    ctx->pc = 0x2c730cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2960)));
    // 0x2c7310: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7314: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c7314u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c7318: 0x26f75890  addiu       $s7, $s7, 0x5890
    ctx->pc = 0x2c7318u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22672));
    // 0x2c731c: 0x7fb701c0  sq          $s7, 0x1C0($sp)
    ctx->pc = 0x2c731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 23));
    // 0x2c7320: 0x7bb70b90  lq          $s7, 0xB90($sp)
    ctx->pc = 0x2c7320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2960)));
    // 0x2c7324: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7328: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c7328u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c732c: 0x26f763d4  addiu       $s7, $s7, 0x63D4
    ctx->pc = 0x2c732cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25556));
    // 0x2c7330: 0x7fb701b0  sq          $s7, 0x1B0($sp)
    ctx->pc = 0x2c7330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 23));
    // 0x2c7334: 0x7bb70b80  lq          $s7, 0xB80($sp)
    ctx->pc = 0x2c7334u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2944)));
    // 0x2c7338: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c733c: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c733cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c7340: 0x26f758a0  addiu       $s7, $s7, 0x58A0
    ctx->pc = 0x2c7340u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22688));
    // 0x2c7344: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x2c7344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
    // 0x2c7348: 0x7bb70b80  lq          $s7, 0xB80($sp)
    ctx->pc = 0x2c7348u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2944)));
    // 0x2c734c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7350: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c7350u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c7354: 0x26f763e0  addiu       $s7, $s7, 0x63E0
    ctx->pc = 0x2c7354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25568));
    // 0x2c7358: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x2c7358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
    // 0x2c735c: 0x7bb70b80  lq          $s7, 0xB80($sp)
    ctx->pc = 0x2c735cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2944)));
    // 0x2c7360: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7364: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c7364u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c7368: 0x26f758b0  addiu       $s7, $s7, 0x58B0
    ctx->pc = 0x2c7368u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22704));
    // 0x2c736c: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x2c736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
    // 0x2c7370: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c7370u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c7374: 0x26f763ec  addiu       $s7, $s7, 0x63EC
    ctx->pc = 0x2c7374u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25580));
    // 0x2c7378: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x2c7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
    // 0x2c737c: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c737cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c7380: 0x26f758c0  addiu       $s7, $s7, 0x58C0
    ctx->pc = 0x2c7380u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22720));
    // 0x2c7384: 0x7fb70160  sq          $s7, 0x160($sp)
    ctx->pc = 0x2c7384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 23));
    // 0x2c7388: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c7388u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c738c: 0x26f763f8  addiu       $s7, $s7, 0x63F8
    ctx->pc = 0x2c738cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25592));
    // 0x2c7390: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x2c7390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x2c7394: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c7394u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c7398: 0x26f758d0  addiu       $s7, $s7, 0x58D0
    ctx->pc = 0x2c7398u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22736));
    // 0x2c739c: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x2c739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x2c73a0: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c73a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c73a4: 0x26f76404  addiu       $s7, $s7, 0x6404
    ctx->pc = 0x2c73a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25604));
    // 0x2c73a8: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x2c73a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x2c73ac: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c73acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c73b0: 0x26f758e0  addiu       $s7, $s7, 0x58E0
    ctx->pc = 0x2c73b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22752));
    // 0x2c73b4: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x2c73b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
    // 0x2c73b8: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c73b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c73bc: 0x26f76410  addiu       $s7, $s7, 0x6410
    ctx->pc = 0x2c73bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25616));
    // 0x2c73c0: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x2c73c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x2c73c4: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c73c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c73c8: 0x26f758f0  addiu       $s7, $s7, 0x58F0
    ctx->pc = 0x2c73c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22768));
    // 0x2c73cc: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x2c73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x2c73d0: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c73d0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c73d4: 0x26f7641c  addiu       $s7, $s7, 0x641C
    ctx->pc = 0x2c73d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25628));
    // 0x2c73d8: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x2c73d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x2c73dc: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c73dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c73e0: 0x26f75900  addiu       $s7, $s7, 0x5900
    ctx->pc = 0x2c73e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22784));
    // 0x2c73e4: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x2c73e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x2c73e8: 0x7bb70b70  lq          $s7, 0xB70($sp)
    ctx->pc = 0x2c73e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2928)));
    // 0x2c73ec: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c73ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c73f0: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c73f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c73f4: 0x26f76428  addiu       $s7, $s7, 0x6428
    ctx->pc = 0x2c73f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25640));
    // 0x2c73f8: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x2c73f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x2c73fc: 0x7bb70b70  lq          $s7, 0xB70($sp)
    ctx->pc = 0x2c73fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2928)));
    // 0x2c7400: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7404: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x2c7404u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x2c7408: 0x26f75910  addiu       $s7, $s7, 0x5910
    ctx->pc = 0x2c7408u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22800));
    // 0x2c740c: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2c740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x2c7410: 0x7bb70b70  lq          $s7, 0xB70($sp)
    ctx->pc = 0x2c7410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2928)));
    // 0x2c7414: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7418: 0x3c17008d  lui         $s7, 0x8D
    ctx->pc = 0x2c7418u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)141 << 16));
    // 0x2c741c: 0x26f76434  addiu       $s7, $s7, 0x6434
    ctx->pc = 0x2c741cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 25652));
    // 0x2c7420: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2c7420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x2c7424: 0x7bb70b60  lq          $s7, 0xB60($sp)
    ctx->pc = 0x2c7424u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2912)));
    // 0x2c7428: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c742c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7430: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7434: 0x7bb70b50  lq          $s7, 0xB50($sp)
    ctx->pc = 0x2c7434u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2896)));
    // 0x2c7438: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c743c: 0x7bb70b50  lq          $s7, 0xB50($sp)
    ctx->pc = 0x2c743cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2896)));
    // 0x2c7440: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7444: 0x7bb70b50  lq          $s7, 0xB50($sp)
    ctx->pc = 0x2c7444u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2896)));
    // 0x2c7448: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c744c: 0x7bb70b40  lq          $s7, 0xB40($sp)
    ctx->pc = 0x2c744cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2880)));
    // 0x2c7450: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7454: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7458: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c745c: 0x7bb70b30  lq          $s7, 0xB30($sp)
    ctx->pc = 0x2c745cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2864)));
    // 0x2c7460: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7460u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7464: 0x7bb70b30  lq          $s7, 0xB30($sp)
    ctx->pc = 0x2c7464u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2864)));
    // 0x2c7468: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c746c: 0x7bb70b30  lq          $s7, 0xB30($sp)
    ctx->pc = 0x2c746cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2864)));
    // 0x2c7470: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7474: 0x7bb70b20  lq          $s7, 0xB20($sp)
    ctx->pc = 0x2c7474u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2848)));
    // 0x2c7478: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c747c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7480: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7484: 0x7bb70b10  lq          $s7, 0xB10($sp)
    ctx->pc = 0x2c7484u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x2c7488: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c748c: 0x7bb70b10  lq          $s7, 0xB10($sp)
    ctx->pc = 0x2c748cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x2c7490: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7494: 0x7bb70b10  lq          $s7, 0xB10($sp)
    ctx->pc = 0x2c7494u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2832)));
    // 0x2c7498: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c749c: 0x7bb70b00  lq          $s7, 0xB00($sp)
    ctx->pc = 0x2c749cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2816)));
    // 0x2c74a0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c74a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c74a4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c74a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c74a8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c74a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c74ac: 0x7bb70af0  lq          $s7, 0xAF0($sp)
    ctx->pc = 0x2c74acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2800)));
    // 0x2c74b0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c74b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c74b4: 0x7bb70af0  lq          $s7, 0xAF0($sp)
    ctx->pc = 0x2c74b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2800)));
    // 0x2c74b8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c74b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c74bc: 0x7bb70af0  lq          $s7, 0xAF0($sp)
    ctx->pc = 0x2c74bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2800)));
    // 0x2c74c0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c74c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c74c4: 0x7bb70ae0  lq          $s7, 0xAE0($sp)
    ctx->pc = 0x2c74c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2784)));
    // 0x2c74c8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c74c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c74cc: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c74ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c74d0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c74d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c74d4: 0x7bb70ad0  lq          $s7, 0xAD0($sp)
    ctx->pc = 0x2c74d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2768)));
    // 0x2c74d8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c74d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c74dc: 0x7bb70ad0  lq          $s7, 0xAD0($sp)
    ctx->pc = 0x2c74dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2768)));
    // 0x2c74e0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c74e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c74e4: 0x7bb70ad0  lq          $s7, 0xAD0($sp)
    ctx->pc = 0x2c74e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2768)));
    // 0x2c74e8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c74e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c74ec: 0x7bb70ac0  lq          $s7, 0xAC0($sp)
    ctx->pc = 0x2c74ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2752)));
    // 0x2c74f0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c74f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c74f4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c74f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c74f8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c74f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c74fc: 0x7bb70ab0  lq          $s7, 0xAB0($sp)
    ctx->pc = 0x2c74fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2736)));
    // 0x2c7500: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7504: 0x7bb70ab0  lq          $s7, 0xAB0($sp)
    ctx->pc = 0x2c7504u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2736)));
    // 0x2c7508: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c750c: 0x7bb70ab0  lq          $s7, 0xAB0($sp)
    ctx->pc = 0x2c750cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2736)));
    // 0x2c7510: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7514: 0x7bb70aa0  lq          $s7, 0xAA0($sp)
    ctx->pc = 0x2c7514u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2720)));
    // 0x2c7518: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c751c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7520: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7524: 0x7bb70a90  lq          $s7, 0xA90($sp)
    ctx->pc = 0x2c7524u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2704)));
    // 0x2c7528: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c752c: 0x7bb70a90  lq          $s7, 0xA90($sp)
    ctx->pc = 0x2c752cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2704)));
    // 0x2c7530: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7534: 0x7bb70a90  lq          $s7, 0xA90($sp)
    ctx->pc = 0x2c7534u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2704)));
    // 0x2c7538: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c753c: 0x7bb70a80  lq          $s7, 0xA80($sp)
    ctx->pc = 0x2c753cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2688)));
    // 0x2c7540: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7544: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7548: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c754c: 0x7bb70a70  lq          $s7, 0xA70($sp)
    ctx->pc = 0x2c754cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2672)));
    // 0x2c7550: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7554: 0x7bb70a70  lq          $s7, 0xA70($sp)
    ctx->pc = 0x2c7554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2672)));
    // 0x2c7558: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c755c: 0x7bb70a70  lq          $s7, 0xA70($sp)
    ctx->pc = 0x2c755cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2672)));
    // 0x2c7560: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7564: 0x7bb70a60  lq          $s7, 0xA60($sp)
    ctx->pc = 0x2c7564u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2656)));
    // 0x2c7568: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c756c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7570: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7574: 0x7bb70a50  lq          $s7, 0xA50($sp)
    ctx->pc = 0x2c7574u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x2c7578: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c757c: 0x7bb70a50  lq          $s7, 0xA50($sp)
    ctx->pc = 0x2c757cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x2c7580: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7584: 0x7bb70a50  lq          $s7, 0xA50($sp)
    ctx->pc = 0x2c7584u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x2c7588: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c758c: 0x7bb70a40  lq          $s7, 0xA40($sp)
    ctx->pc = 0x2c758cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2624)));
    // 0x2c7590: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7594: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7598: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c759c: 0x7bb70a30  lq          $s7, 0xA30($sp)
    ctx->pc = 0x2c759cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2608)));
    // 0x2c75a0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c75a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c75a4: 0x7bb70a30  lq          $s7, 0xA30($sp)
    ctx->pc = 0x2c75a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2608)));
    // 0x2c75a8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c75a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c75ac: 0x7bb70a30  lq          $s7, 0xA30($sp)
    ctx->pc = 0x2c75acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2608)));
    // 0x2c75b0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c75b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c75b4: 0x7bb70a20  lq          $s7, 0xA20($sp)
    ctx->pc = 0x2c75b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2592)));
    // 0x2c75b8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c75b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c75bc: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c75bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c75c0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c75c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c75c4: 0x7bb70a10  lq          $s7, 0xA10($sp)
    ctx->pc = 0x2c75c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2576)));
    // 0x2c75c8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c75c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c75cc: 0x7bb70a10  lq          $s7, 0xA10($sp)
    ctx->pc = 0x2c75ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2576)));
    // 0x2c75d0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c75d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c75d4: 0x7bb70a10  lq          $s7, 0xA10($sp)
    ctx->pc = 0x2c75d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2576)));
    // 0x2c75d8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c75d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c75dc: 0x7bb70a00  lq          $s7, 0xA00($sp)
    ctx->pc = 0x2c75dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2560)));
    // 0x2c75e0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c75e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c75e4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c75e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c75e8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c75e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c75ec: 0x7bb709f0  lq          $s7, 0x9F0($sp)
    ctx->pc = 0x2c75ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2544)));
    // 0x2c75f0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c75f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c75f4: 0x7bb709f0  lq          $s7, 0x9F0($sp)
    ctx->pc = 0x2c75f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2544)));
    // 0x2c75f8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c75f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c75fc: 0x7bb709f0  lq          $s7, 0x9F0($sp)
    ctx->pc = 0x2c75fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2544)));
    // 0x2c7600: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7604: 0x7bb709e0  lq          $s7, 0x9E0($sp)
    ctx->pc = 0x2c7604u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2528)));
    // 0x2c7608: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c760c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7610: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7614: 0x7bb709d0  lq          $s7, 0x9D0($sp)
    ctx->pc = 0x2c7614u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2512)));
    // 0x2c7618: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c761c: 0x7bb709d0  lq          $s7, 0x9D0($sp)
    ctx->pc = 0x2c761cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2512)));
    // 0x2c7620: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7624: 0x7bb709d0  lq          $s7, 0x9D0($sp)
    ctx->pc = 0x2c7624u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2512)));
    // 0x2c7628: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c762c: 0x7bb709c0  lq          $s7, 0x9C0($sp)
    ctx->pc = 0x2c762cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2496)));
    // 0x2c7630: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7634: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7638: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c763c: 0x7bb709b0  lq          $s7, 0x9B0($sp)
    ctx->pc = 0x2c763cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2480)));
    // 0x2c7640: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7640u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7644: 0x7bb709b0  lq          $s7, 0x9B0($sp)
    ctx->pc = 0x2c7644u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2480)));
    // 0x2c7648: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c764c: 0x7bb709b0  lq          $s7, 0x9B0($sp)
    ctx->pc = 0x2c764cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2480)));
    // 0x2c7650: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7654: 0x7bb709a0  lq          $s7, 0x9A0($sp)
    ctx->pc = 0x2c7654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2464)));
    // 0x2c7658: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c765c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7660: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7664: 0x7bb70990  lq          $s7, 0x990($sp)
    ctx->pc = 0x2c7664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2448)));
    // 0x2c7668: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c766c: 0x7bb70990  lq          $s7, 0x990($sp)
    ctx->pc = 0x2c766cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2448)));
    // 0x2c7670: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7674: 0x7bb70990  lq          $s7, 0x990($sp)
    ctx->pc = 0x2c7674u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2448)));
    // 0x2c7678: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c767c: 0x7bb70980  lq          $s7, 0x980($sp)
    ctx->pc = 0x2c767cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2432)));
    // 0x2c7680: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7684: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7688: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c768c: 0x7bb70970  lq          $s7, 0x970($sp)
    ctx->pc = 0x2c768cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
    // 0x2c7690: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7690u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7694: 0x7bb70970  lq          $s7, 0x970($sp)
    ctx->pc = 0x2c7694u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
    // 0x2c7698: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c769c: 0x7bb70970  lq          $s7, 0x970($sp)
    ctx->pc = 0x2c769cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
    // 0x2c76a0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c76a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c76a4: 0x7bb70960  lq          $s7, 0x960($sp)
    ctx->pc = 0x2c76a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
    // 0x2c76a8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c76a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c76ac: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c76acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c76b0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c76b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c76b4: 0x7bb70950  lq          $s7, 0x950($sp)
    ctx->pc = 0x2c76b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
    // 0x2c76b8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c76b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c76bc: 0x7bb70950  lq          $s7, 0x950($sp)
    ctx->pc = 0x2c76bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
    // 0x2c76c0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c76c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c76c4: 0x7bb70950  lq          $s7, 0x950($sp)
    ctx->pc = 0x2c76c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
    // 0x2c76c8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c76c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c76cc: 0x7bb70940  lq          $s7, 0x940($sp)
    ctx->pc = 0x2c76ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
    // 0x2c76d0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c76d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c76d4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c76d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c76d8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c76d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c76dc: 0x7bb70930  lq          $s7, 0x930($sp)
    ctx->pc = 0x2c76dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
    // 0x2c76e0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c76e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c76e4: 0x7bb70930  lq          $s7, 0x930($sp)
    ctx->pc = 0x2c76e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
    // 0x2c76e8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c76e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c76ec: 0x7bb70930  lq          $s7, 0x930($sp)
    ctx->pc = 0x2c76ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
    // 0x2c76f0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c76f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c76f4: 0x7bb70920  lq          $s7, 0x920($sp)
    ctx->pc = 0x2c76f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
    // 0x2c76f8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c76f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c76fc: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c76fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7700: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7704: 0x7bb70910  lq          $s7, 0x910($sp)
    ctx->pc = 0x2c7704u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
    // 0x2c7708: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c770c: 0x7bb70910  lq          $s7, 0x910($sp)
    ctx->pc = 0x2c770cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
    // 0x2c7710: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7714: 0x7bb70910  lq          $s7, 0x910($sp)
    ctx->pc = 0x2c7714u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
    // 0x2c7718: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c771c: 0x7bb70900  lq          $s7, 0x900($sp)
    ctx->pc = 0x2c771cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
    // 0x2c7720: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7724: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7728: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c772c: 0x7bb708f0  lq          $s7, 0x8F0($sp)
    ctx->pc = 0x2c772cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
    // 0x2c7730: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7734: 0x7bb708f0  lq          $s7, 0x8F0($sp)
    ctx->pc = 0x2c7734u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
    // 0x2c7738: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c773c: 0x7bb708f0  lq          $s7, 0x8F0($sp)
    ctx->pc = 0x2c773cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
    // 0x2c7740: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7744: 0x7bb708e0  lq          $s7, 0x8E0($sp)
    ctx->pc = 0x2c7744u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
    // 0x2c7748: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c774c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7750: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7754: 0x7bb708d0  lq          $s7, 0x8D0($sp)
    ctx->pc = 0x2c7754u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
    // 0x2c7758: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c775c: 0x7bb708d0  lq          $s7, 0x8D0($sp)
    ctx->pc = 0x2c775cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
    // 0x2c7760: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7764: 0x7bb708d0  lq          $s7, 0x8D0($sp)
    ctx->pc = 0x2c7764u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
    // 0x2c7768: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c776c: 0x7bb708c0  lq          $s7, 0x8C0($sp)
    ctx->pc = 0x2c776cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
    // 0x2c7770: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7774: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7778: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c777c: 0x7bb708b0  lq          $s7, 0x8B0($sp)
    ctx->pc = 0x2c777cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
    // 0x2c7780: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7784: 0x7bb708b0  lq          $s7, 0x8B0($sp)
    ctx->pc = 0x2c7784u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
    // 0x2c7788: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c778c: 0x7bb708b0  lq          $s7, 0x8B0($sp)
    ctx->pc = 0x2c778cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
    // 0x2c7790: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7794: 0x7bb708a0  lq          $s7, 0x8A0($sp)
    ctx->pc = 0x2c7794u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
    // 0x2c7798: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c779c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c77a0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c77a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c77a4: 0x7bb70890  lq          $s7, 0x890($sp)
    ctx->pc = 0x2c77a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
    // 0x2c77a8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c77a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c77ac: 0x7bb70890  lq          $s7, 0x890($sp)
    ctx->pc = 0x2c77acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
    // 0x2c77b0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c77b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c77b4: 0x7bb70890  lq          $s7, 0x890($sp)
    ctx->pc = 0x2c77b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
    // 0x2c77b8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c77b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c77bc: 0x7bb70880  lq          $s7, 0x880($sp)
    ctx->pc = 0x2c77bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
    // 0x2c77c0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c77c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c77c4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c77c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c77c8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c77cc: 0x7bb70870  lq          $s7, 0x870($sp)
    ctx->pc = 0x2c77ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x2c77d0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c77d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c77d4: 0x7bb70870  lq          $s7, 0x870($sp)
    ctx->pc = 0x2c77d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x2c77d8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c77d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c77dc: 0x7bb70870  lq          $s7, 0x870($sp)
    ctx->pc = 0x2c77dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x2c77e0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c77e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c77e4: 0x7bb70860  lq          $s7, 0x860($sp)
    ctx->pc = 0x2c77e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x2c77e8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c77e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c77ec: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c77ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c77f0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c77f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c77f4: 0x7bb70850  lq          $s7, 0x850($sp)
    ctx->pc = 0x2c77f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x2c77f8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c77f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c77fc: 0x7bb70850  lq          $s7, 0x850($sp)
    ctx->pc = 0x2c77fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x2c7800: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7804: 0x7bb70850  lq          $s7, 0x850($sp)
    ctx->pc = 0x2c7804u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x2c7808: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c780c: 0x7bb70840  lq          $s7, 0x840($sp)
    ctx->pc = 0x2c780cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x2c7810: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7814: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7818: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c781c: 0x7bb70830  lq          $s7, 0x830($sp)
    ctx->pc = 0x2c781cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x2c7820: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7824: 0x7bb70830  lq          $s7, 0x830($sp)
    ctx->pc = 0x2c7824u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x2c7828: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c782c: 0x7bb70830  lq          $s7, 0x830($sp)
    ctx->pc = 0x2c782cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x2c7830: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7834: 0x7bb70820  lq          $s7, 0x820($sp)
    ctx->pc = 0x2c7834u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x2c7838: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c783c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7840: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7844: 0x7bb70810  lq          $s7, 0x810($sp)
    ctx->pc = 0x2c7844u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x2c7848: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c784c: 0x7bb70810  lq          $s7, 0x810($sp)
    ctx->pc = 0x2c784cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x2c7850: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7854: 0x7bb70810  lq          $s7, 0x810($sp)
    ctx->pc = 0x2c7854u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x2c7858: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c785c: 0x7bb70800  lq          $s7, 0x800($sp)
    ctx->pc = 0x2c785cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
    // 0x2c7860: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7864: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7868: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c786c: 0x7bb707f0  lq          $s7, 0x7F0($sp)
    ctx->pc = 0x2c786cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2032)));
    // 0x2c7870: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7874: 0x7bb707f0  lq          $s7, 0x7F0($sp)
    ctx->pc = 0x2c7874u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2032)));
    // 0x2c7878: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c787c: 0x7bb707f0  lq          $s7, 0x7F0($sp)
    ctx->pc = 0x2c787cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2032)));
    // 0x2c7880: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7884: 0x7bb707e0  lq          $s7, 0x7E0($sp)
    ctx->pc = 0x2c7884u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2016)));
    // 0x2c7888: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c788c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7890: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7894: 0x7bb707d0  lq          $s7, 0x7D0($sp)
    ctx->pc = 0x2c7894u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2000)));
    // 0x2c7898: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c789c: 0x7bb707d0  lq          $s7, 0x7D0($sp)
    ctx->pc = 0x2c789cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2000)));
    // 0x2c78a0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c78a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c78a4: 0x7bb707d0  lq          $s7, 0x7D0($sp)
    ctx->pc = 0x2c78a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2000)));
    // 0x2c78a8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c78a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c78ac: 0x7bb707c0  lq          $s7, 0x7C0($sp)
    ctx->pc = 0x2c78acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1984)));
    // 0x2c78b0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c78b4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c78b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c78b8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c78b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c78bc: 0x7bb707b0  lq          $s7, 0x7B0($sp)
    ctx->pc = 0x2c78bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1968)));
    // 0x2c78c0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c78c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c78c4: 0x7bb707b0  lq          $s7, 0x7B0($sp)
    ctx->pc = 0x2c78c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1968)));
    // 0x2c78c8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c78c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c78cc: 0x7bb707b0  lq          $s7, 0x7B0($sp)
    ctx->pc = 0x2c78ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1968)));
    // 0x2c78d0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c78d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c78d4: 0x7bb707a0  lq          $s7, 0x7A0($sp)
    ctx->pc = 0x2c78d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1952)));
    // 0x2c78d8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c78d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c78dc: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c78dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c78e0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c78e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c78e4: 0x7bb70790  lq          $s7, 0x790($sp)
    ctx->pc = 0x2c78e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1936)));
    // 0x2c78e8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c78e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c78ec: 0x7bb70790  lq          $s7, 0x790($sp)
    ctx->pc = 0x2c78ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1936)));
    // 0x2c78f0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c78f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c78f4: 0x7bb70790  lq          $s7, 0x790($sp)
    ctx->pc = 0x2c78f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1936)));
    // 0x2c78f8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c78f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c78fc: 0x7bb70780  lq          $s7, 0x780($sp)
    ctx->pc = 0x2c78fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1920)));
    // 0x2c7900: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7904: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7908: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c790c: 0x7bb70770  lq          $s7, 0x770($sp)
    ctx->pc = 0x2c790cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1904)));
    // 0x2c7910: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7914: 0x7bb70770  lq          $s7, 0x770($sp)
    ctx->pc = 0x2c7914u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1904)));
    // 0x2c7918: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c791c: 0x7bb70770  lq          $s7, 0x770($sp)
    ctx->pc = 0x2c791cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1904)));
    // 0x2c7920: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7924: 0x7bb70760  lq          $s7, 0x760($sp)
    ctx->pc = 0x2c7924u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1888)));
    // 0x2c7928: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c792c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c792cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7930: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7934: 0x7bb70750  lq          $s7, 0x750($sp)
    ctx->pc = 0x2c7934u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1872)));
    // 0x2c7938: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c793c: 0x7bb70750  lq          $s7, 0x750($sp)
    ctx->pc = 0x2c793cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1872)));
    // 0x2c7940: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7944: 0x7bb70750  lq          $s7, 0x750($sp)
    ctx->pc = 0x2c7944u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1872)));
    // 0x2c7948: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c794c: 0x7bb70740  lq          $s7, 0x740($sp)
    ctx->pc = 0x2c794cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1856)));
    // 0x2c7950: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7954: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7958: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c795c: 0x7bb70730  lq          $s7, 0x730($sp)
    ctx->pc = 0x2c795cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1840)));
    // 0x2c7960: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7964: 0x7bb70730  lq          $s7, 0x730($sp)
    ctx->pc = 0x2c7964u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1840)));
    // 0x2c7968: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c796c: 0x7bb70730  lq          $s7, 0x730($sp)
    ctx->pc = 0x2c796cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1840)));
    // 0x2c7970: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7974: 0x7bb70720  lq          $s7, 0x720($sp)
    ctx->pc = 0x2c7974u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1824)));
    // 0x2c7978: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c797c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7980: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7984: 0x7bb70710  lq          $s7, 0x710($sp)
    ctx->pc = 0x2c7984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1808)));
    // 0x2c7988: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c798c: 0x7bb70710  lq          $s7, 0x710($sp)
    ctx->pc = 0x2c798cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1808)));
    // 0x2c7990: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7994: 0x7bb70710  lq          $s7, 0x710($sp)
    ctx->pc = 0x2c7994u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1808)));
    // 0x2c7998: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c799c: 0x7bb70700  lq          $s7, 0x700($sp)
    ctx->pc = 0x2c799cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
    // 0x2c79a0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c79a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c79a4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c79a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c79a8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c79a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c79ac: 0x7bb706f0  lq          $s7, 0x6F0($sp)
    ctx->pc = 0x2c79acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
    // 0x2c79b0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c79b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c79b4: 0x7bb706f0  lq          $s7, 0x6F0($sp)
    ctx->pc = 0x2c79b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
    // 0x2c79b8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c79b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c79bc: 0x7bb706f0  lq          $s7, 0x6F0($sp)
    ctx->pc = 0x2c79bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
    // 0x2c79c0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c79c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c79c4: 0x7bb706e0  lq          $s7, 0x6E0($sp)
    ctx->pc = 0x2c79c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1760)));
    // 0x2c79c8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c79c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c79cc: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c79ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c79d0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c79d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c79d4: 0x7bb706d0  lq          $s7, 0x6D0($sp)
    ctx->pc = 0x2c79d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
    // 0x2c79d8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c79d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c79dc: 0x7bb706d0  lq          $s7, 0x6D0($sp)
    ctx->pc = 0x2c79dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
    // 0x2c79e0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c79e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c79e4: 0x7bb706d0  lq          $s7, 0x6D0($sp)
    ctx->pc = 0x2c79e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
    // 0x2c79e8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c79e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c79ec: 0x7bb706c0  lq          $s7, 0x6C0($sp)
    ctx->pc = 0x2c79ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1728)));
    // 0x2c79f0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c79f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c79f4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c79f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c79f8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c79f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c79fc: 0x7bb706b0  lq          $s7, 0x6B0($sp)
    ctx->pc = 0x2c79fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1712)));
    // 0x2c7a00: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7a04: 0x7bb706b0  lq          $s7, 0x6B0($sp)
    ctx->pc = 0x2c7a04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1712)));
    // 0x2c7a08: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7a0c: 0x7bb706b0  lq          $s7, 0x6B0($sp)
    ctx->pc = 0x2c7a0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1712)));
    // 0x2c7a10: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7a14: 0x7bb706a0  lq          $s7, 0x6A0($sp)
    ctx->pc = 0x2c7a14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1696)));
    // 0x2c7a18: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7a1c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7a20: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a24: 0x7bb70690  lq          $s7, 0x690($sp)
    ctx->pc = 0x2c7a24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x2c7a28: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7a2c: 0x7bb70690  lq          $s7, 0x690($sp)
    ctx->pc = 0x2c7a2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x2c7a30: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7a34: 0x7bb70690  lq          $s7, 0x690($sp)
    ctx->pc = 0x2c7a34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x2c7a38: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7a3c: 0x7bb70680  lq          $s7, 0x680($sp)
    ctx->pc = 0x2c7a3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x2c7a40: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7a44: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7a48: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a4c: 0x7bb70670  lq          $s7, 0x670($sp)
    ctx->pc = 0x2c7a4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x2c7a50: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7a54: 0x7bb70670  lq          $s7, 0x670($sp)
    ctx->pc = 0x2c7a54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x2c7a58: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7a5c: 0x7bb70670  lq          $s7, 0x670($sp)
    ctx->pc = 0x2c7a5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x2c7a60: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7a64: 0x7bb70660  lq          $s7, 0x660($sp)
    ctx->pc = 0x2c7a64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x2c7a68: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7a6c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7a70: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a74: 0x7bb70650  lq          $s7, 0x650($sp)
    ctx->pc = 0x2c7a74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x2c7a78: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7a7c: 0x7bb70650  lq          $s7, 0x650($sp)
    ctx->pc = 0x2c7a7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x2c7a80: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7a84: 0x7bb70650  lq          $s7, 0x650($sp)
    ctx->pc = 0x2c7a84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x2c7a88: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7a8c: 0x7bb70640  lq          $s7, 0x640($sp)
    ctx->pc = 0x2c7a8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x2c7a90: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7a94: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7a98: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a9c: 0x7bb70630  lq          $s7, 0x630($sp)
    ctx->pc = 0x2c7a9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x2c7aa0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7aa4: 0x7bb70630  lq          $s7, 0x630($sp)
    ctx->pc = 0x2c7aa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x2c7aa8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7aac: 0x7bb70630  lq          $s7, 0x630($sp)
    ctx->pc = 0x2c7aacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x2c7ab0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7ab4: 0x7bb70620  lq          $s7, 0x620($sp)
    ctx->pc = 0x2c7ab4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x2c7ab8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7abc: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ac0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ac4: 0x7bb70610  lq          $s7, 0x610($sp)
    ctx->pc = 0x2c7ac4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x2c7ac8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7acc: 0x7bb70610  lq          $s7, 0x610($sp)
    ctx->pc = 0x2c7accu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x2c7ad0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7ad4: 0x7bb70610  lq          $s7, 0x610($sp)
    ctx->pc = 0x2c7ad4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x2c7ad8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7adc: 0x7bb70600  lq          $s7, 0x600($sp)
    ctx->pc = 0x2c7adcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x2c7ae0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7ae4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ae8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7aec: 0x7bb705f0  lq          $s7, 0x5F0($sp)
    ctx->pc = 0x2c7aecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x2c7af0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7af4: 0x7bb705f0  lq          $s7, 0x5F0($sp)
    ctx->pc = 0x2c7af4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x2c7af8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7afc: 0x7bb705f0  lq          $s7, 0x5F0($sp)
    ctx->pc = 0x2c7afcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x2c7b00: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7b04: 0x7bb705e0  lq          $s7, 0x5E0($sp)
    ctx->pc = 0x2c7b04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x2c7b08: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7b0c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7b10: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7b14: 0x7bb705d0  lq          $s7, 0x5D0($sp)
    ctx->pc = 0x2c7b14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x2c7b18: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7b18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7b1c: 0x7bb705d0  lq          $s7, 0x5D0($sp)
    ctx->pc = 0x2c7b1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x2c7b20: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7b24: 0x7bb705d0  lq          $s7, 0x5D0($sp)
    ctx->pc = 0x2c7b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x2c7b28: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7b2c: 0x7bb705c0  lq          $s7, 0x5C0($sp)
    ctx->pc = 0x2c7b2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x2c7b30: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7b34: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7b38: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7b3c: 0x7bb705b0  lq          $s7, 0x5B0($sp)
    ctx->pc = 0x2c7b3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x2c7b40: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7b44: 0x7bb705b0  lq          $s7, 0x5B0($sp)
    ctx->pc = 0x2c7b44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x2c7b48: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7b4c: 0x7bb705b0  lq          $s7, 0x5B0($sp)
    ctx->pc = 0x2c7b4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x2c7b50: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7b54: 0x7bb705a0  lq          $s7, 0x5A0($sp)
    ctx->pc = 0x2c7b54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x2c7b58: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7b5c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7b60: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7b64: 0x7bb70590  lq          $s7, 0x590($sp)
    ctx->pc = 0x2c7b64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x2c7b68: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7b6c: 0x7bb70590  lq          $s7, 0x590($sp)
    ctx->pc = 0x2c7b6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x2c7b70: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7b74: 0x7bb70590  lq          $s7, 0x590($sp)
    ctx->pc = 0x2c7b74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x2c7b78: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7b7c: 0x7bb70580  lq          $s7, 0x580($sp)
    ctx->pc = 0x2c7b7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x2c7b80: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7b84: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7b88: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7b8c: 0x7bb70570  lq          $s7, 0x570($sp)
    ctx->pc = 0x2c7b8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x2c7b90: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7b94: 0x7bb70570  lq          $s7, 0x570($sp)
    ctx->pc = 0x2c7b94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x2c7b98: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7b9c: 0x7bb70570  lq          $s7, 0x570($sp)
    ctx->pc = 0x2c7b9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x2c7ba0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7ba4: 0x7bb70560  lq          $s7, 0x560($sp)
    ctx->pc = 0x2c7ba4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
    // 0x2c7ba8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7bac: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7bb0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7bb4: 0x7bb70550  lq          $s7, 0x550($sp)
    ctx->pc = 0x2c7bb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x2c7bb8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7bb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7bbc: 0x7bb70550  lq          $s7, 0x550($sp)
    ctx->pc = 0x2c7bbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x2c7bc0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7bc4: 0x7bb70550  lq          $s7, 0x550($sp)
    ctx->pc = 0x2c7bc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x2c7bc8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7bcc: 0x7bb70540  lq          $s7, 0x540($sp)
    ctx->pc = 0x2c7bccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x2c7bd0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7bd4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7bd8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7bdc: 0x7bb70530  lq          $s7, 0x530($sp)
    ctx->pc = 0x2c7bdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x2c7be0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7be4: 0x7bb70530  lq          $s7, 0x530($sp)
    ctx->pc = 0x2c7be4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x2c7be8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7bec: 0x7bb70530  lq          $s7, 0x530($sp)
    ctx->pc = 0x2c7becu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x2c7bf0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7bf4: 0x7bb70520  lq          $s7, 0x520($sp)
    ctx->pc = 0x2c7bf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x2c7bf8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7bfc: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7c00: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c04: 0x7bb70510  lq          $s7, 0x510($sp)
    ctx->pc = 0x2c7c04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x2c7c08: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7c0c: 0x7bb70510  lq          $s7, 0x510($sp)
    ctx->pc = 0x2c7c0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x2c7c10: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7c14: 0x7bb70510  lq          $s7, 0x510($sp)
    ctx->pc = 0x2c7c14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x2c7c18: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7c1c: 0x7bb70500  lq          $s7, 0x500($sp)
    ctx->pc = 0x2c7c1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x2c7c20: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7c24: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7c28: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c2c: 0x7bb704f0  lq          $s7, 0x4F0($sp)
    ctx->pc = 0x2c7c2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x2c7c30: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7c30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7c34: 0x7bb704f0  lq          $s7, 0x4F0($sp)
    ctx->pc = 0x2c7c34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x2c7c38: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7c3c: 0x7bb704f0  lq          $s7, 0x4F0($sp)
    ctx->pc = 0x2c7c3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x2c7c40: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7c44: 0x7bb704e0  lq          $s7, 0x4E0($sp)
    ctx->pc = 0x2c7c44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x2c7c48: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7c4c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7c50: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c54: 0x7bb704d0  lq          $s7, 0x4D0($sp)
    ctx->pc = 0x2c7c54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x2c7c58: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7c5c: 0x7bb704d0  lq          $s7, 0x4D0($sp)
    ctx->pc = 0x2c7c5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x2c7c60: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7c64: 0x7bb704d0  lq          $s7, 0x4D0($sp)
    ctx->pc = 0x2c7c64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x2c7c68: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7c6c: 0x7bb704c0  lq          $s7, 0x4C0($sp)
    ctx->pc = 0x2c7c6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x2c7c70: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7c74: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7c78: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c7c: 0x7bb704b0  lq          $s7, 0x4B0($sp)
    ctx->pc = 0x2c7c7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2c7c80: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7c84: 0x7bb704b0  lq          $s7, 0x4B0($sp)
    ctx->pc = 0x2c7c84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2c7c88: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7c8c: 0x7bb704b0  lq          $s7, 0x4B0($sp)
    ctx->pc = 0x2c7c8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2c7c90: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7c94: 0x7bb704a0  lq          $s7, 0x4A0($sp)
    ctx->pc = 0x2c7c94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2c7c98: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7c9c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ca0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ca4: 0x7bb70490  lq          $s7, 0x490($sp)
    ctx->pc = 0x2c7ca4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2c7ca8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7cac: 0x7bb70490  lq          $s7, 0x490($sp)
    ctx->pc = 0x2c7cacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2c7cb0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7cb4: 0x7bb70490  lq          $s7, 0x490($sp)
    ctx->pc = 0x2c7cb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2c7cb8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7cbc: 0x7bb70480  lq          $s7, 0x480($sp)
    ctx->pc = 0x2c7cbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2c7cc0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7cc4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7cc8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ccc: 0x7bb70470  lq          $s7, 0x470($sp)
    ctx->pc = 0x2c7cccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2c7cd0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7cd4: 0x7bb70470  lq          $s7, 0x470($sp)
    ctx->pc = 0x2c7cd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2c7cd8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7cdc: 0x7bb70470  lq          $s7, 0x470($sp)
    ctx->pc = 0x2c7cdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2c7ce0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7ce4: 0x7bb70460  lq          $s7, 0x460($sp)
    ctx->pc = 0x2c7ce4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2c7ce8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7cec: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7cf0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7cf4: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x2c7cf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2c7cf8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7cf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7cfc: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x2c7cfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2c7d00: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7d04: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x2c7d04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2c7d08: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7d0c: 0x7bb70440  lq          $s7, 0x440($sp)
    ctx->pc = 0x2c7d0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2c7d10: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7d14: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7d18: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7d1c: 0x7bb70430  lq          $s7, 0x430($sp)
    ctx->pc = 0x2c7d1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2c7d20: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7d20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7d24: 0x7bb70430  lq          $s7, 0x430($sp)
    ctx->pc = 0x2c7d24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2c7d28: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7d2c: 0x7bb70430  lq          $s7, 0x430($sp)
    ctx->pc = 0x2c7d2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2c7d30: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7d34: 0x7bb70420  lq          $s7, 0x420($sp)
    ctx->pc = 0x2c7d34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2c7d38: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7d3c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7d40: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7d44: 0x7bb70410  lq          $s7, 0x410($sp)
    ctx->pc = 0x2c7d44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2c7d48: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7d48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7d4c: 0x7bb70410  lq          $s7, 0x410($sp)
    ctx->pc = 0x2c7d4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2c7d50: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7d54: 0x7bb70410  lq          $s7, 0x410($sp)
    ctx->pc = 0x2c7d54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2c7d58: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7d5c: 0x7bb70400  lq          $s7, 0x400($sp)
    ctx->pc = 0x2c7d5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2c7d60: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7d64: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7d68: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7d6c: 0x7bb703f0  lq          $s7, 0x3F0($sp)
    ctx->pc = 0x2c7d6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x2c7d70: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7d70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7d74: 0x7bb703f0  lq          $s7, 0x3F0($sp)
    ctx->pc = 0x2c7d74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x2c7d78: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7d7c: 0x7bb703f0  lq          $s7, 0x3F0($sp)
    ctx->pc = 0x2c7d7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x2c7d80: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7d84: 0x7bb703e0  lq          $s7, 0x3E0($sp)
    ctx->pc = 0x2c7d84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x2c7d88: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7d8c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7d90: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7d94: 0x7bb703d0  lq          $s7, 0x3D0($sp)
    ctx->pc = 0x2c7d94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x2c7d98: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7d9c: 0x7bb703d0  lq          $s7, 0x3D0($sp)
    ctx->pc = 0x2c7d9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x2c7da0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7da4: 0x7bb703d0  lq          $s7, 0x3D0($sp)
    ctx->pc = 0x2c7da4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x2c7da8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7dac: 0x7bb703c0  lq          $s7, 0x3C0($sp)
    ctx->pc = 0x2c7dacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x2c7db0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7db4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7db8: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7dbc: 0x7bb703b0  lq          $s7, 0x3B0($sp)
    ctx->pc = 0x2c7dbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x2c7dc0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7dc4: 0x7bb703b0  lq          $s7, 0x3B0($sp)
    ctx->pc = 0x2c7dc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x2c7dc8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7dcc: 0x7bb703b0  lq          $s7, 0x3B0($sp)
    ctx->pc = 0x2c7dccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x2c7dd0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7dd4: 0x7bb703a0  lq          $s7, 0x3A0($sp)
    ctx->pc = 0x2c7dd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x2c7dd8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7ddc: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7de0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7de4: 0x7bb70390  lq          $s7, 0x390($sp)
    ctx->pc = 0x2c7de4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x2c7de8: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7dec: 0x7bb70390  lq          $s7, 0x390($sp)
    ctx->pc = 0x2c7decu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x2c7df0: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7df4: 0x7bb70390  lq          $s7, 0x390($sp)
    ctx->pc = 0x2c7df4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x2c7df8: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7dfc: 0x7bb70380  lq          $s7, 0x380($sp)
    ctx->pc = 0x2c7dfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x2c7e00: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7e04: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7e08: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7e0c: 0x7bb70370  lq          $s7, 0x370($sp)
    ctx->pc = 0x2c7e0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x2c7e10: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7e10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7e14: 0x7bb70370  lq          $s7, 0x370($sp)
    ctx->pc = 0x2c7e14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x2c7e18: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7e1c: 0x7bb70370  lq          $s7, 0x370($sp)
    ctx->pc = 0x2c7e1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x2c7e20: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7e24: 0x7bb70360  lq          $s7, 0x360($sp)
    ctx->pc = 0x2c7e24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x2c7e28: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7e2c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7e30: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7e34: 0x7bb70350  lq          $s7, 0x350($sp)
    ctx->pc = 0x2c7e34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2c7e38: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7e3c: 0x7bb70350  lq          $s7, 0x350($sp)
    ctx->pc = 0x2c7e3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2c7e40: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7e44: 0x7bb70350  lq          $s7, 0x350($sp)
    ctx->pc = 0x2c7e44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2c7e48: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7e4c: 0x7bb70340  lq          $s7, 0x340($sp)
    ctx->pc = 0x2c7e4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2c7e50: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7e54: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7e58: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7e5c: 0x7bb70330  lq          $s7, 0x330($sp)
    ctx->pc = 0x2c7e5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2c7e60: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7e60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7e64: 0x7bb70330  lq          $s7, 0x330($sp)
    ctx->pc = 0x2c7e64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2c7e68: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7e6c: 0x7bb70330  lq          $s7, 0x330($sp)
    ctx->pc = 0x2c7e6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2c7e70: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7e74: 0x7bb70320  lq          $s7, 0x320($sp)
    ctx->pc = 0x2c7e74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2c7e78: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7e7c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7e80: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7e84: 0x7bb70310  lq          $s7, 0x310($sp)
    ctx->pc = 0x2c7e84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2c7e88: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2c7e88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2c7e8c: 0x7bb70310  lq          $s7, 0x310($sp)
    ctx->pc = 0x2c7e8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2c7e90: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2c7e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2c7e94: 0x7bb70310  lq          $s7, 0x310($sp)
    ctx->pc = 0x2c7e94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2c7e98: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2c7e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x2c7e9c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2c7e9cu;
    { uint32_t bits = FAST_READ32(0x4E5730u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7ea0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2c7ea0u;
    { uint32_t bits = FAST_READ32(0x4E5734u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ea4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2c7ea4u;
    { uint32_t bits = FAST_READ32(0x4E5738u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ea8: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x2c7ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62CCu, _value); } while (0); }
    // 0x2c7eac: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c7eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62D0u, _value); } while (0); }
    // 0x2c7eb0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2c7eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62D4u, _value); } while (0); }
    // 0x2c7eb4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2c7eb4u;
    { uint32_t bits = FAST_READ32(0x4E5740u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7eb8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c7eb8u;
    { uint32_t bits = FAST_READ32(0x4E5744u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ebc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2c7ebcu;
    { uint32_t bits = FAST_READ32(0x4E5748u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ec0: 0xe5e20000  swc1        $f2, 0x0($t7)
    ctx->pc = 0x2c7ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62D8u, _value); } while (0); }
    // 0x2c7ec4: 0xe5e10004  swc1        $f1, 0x4($t7)
    ctx->pc = 0x2c7ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62DCu, _value); } while (0); }
    // 0x2c7ec8: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x2c7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62E0u, _value); } while (0); }
    // 0x2c7ecc: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x2c7eccu;
    { uint32_t bits = FAST_READ32(0x4E5750u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7ed0: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x2c7ed0u;
    { uint32_t bits = FAST_READ32(0x4E5754u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ed4: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x2c7ed4u;
    { uint32_t bits = FAST_READ32(0x4E5758u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ed8: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x2c7ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62E4u, _value); } while (0); }
    // 0x2c7edc: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x2c7edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62E8u, _value); } while (0); }
    // 0x2c7ee0: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x2c7ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62ECu, _value); } while (0); }
    // 0x2c7ee4: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x2c7ee4u;
    { uint32_t bits = FAST_READ32(0x4E5760u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7ee8: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x2c7ee8u;
    { uint32_t bits = FAST_READ32(0x4E5764u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7eec: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x2c7eecu;
    { uint32_t bits = FAST_READ32(0x4E5768u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ef0: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x2c7ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62F0u, _value); } while (0); }
    // 0x2c7ef4: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x2c7ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62F4u, _value); } while (0); }
    // 0x2c7ef8: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x2c7ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62F8u, _value); } while (0); }
    // 0x2c7efc: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x2c7efcu;
    { uint32_t bits = FAST_READ32(0x4E5770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7f00: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x2c7f00u;
    { uint32_t bits = FAST_READ32(0x4E5774u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f04: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x2c7f04u;
    { uint32_t bits = FAST_READ32(0x4E5778u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f08: 0xe7020000  swc1        $f2, 0x0($t8)
    ctx->pc = 0x2c7f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D62FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D62FCu, _value); } while (0); }
    // 0x2c7f0c: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x2c7f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6300u, _value); } while (0); }
    // 0x2c7f10: 0xe7000008  swc1        $f0, 0x8($t8)
    ctx->pc = 0x2c7f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6304u, _value); } while (0); }
    // 0x2c7f14: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x2c7f14u;
    { uint32_t bits = FAST_READ32(0x4E5780u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7f18: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x2c7f18u;
    { uint32_t bits = FAST_READ32(0x4E5784u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f1c: 0xc7200008  lwc1        $f0, 0x8($t9)
    ctx->pc = 0x2c7f1cu;
    { uint32_t bits = FAST_READ32(0x4E5788u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f20: 0xe7c20000  swc1        $f2, 0x0($fp)
    ctx->pc = 0x2c7f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6308u, _value); } while (0); }
    // 0x2c7f24: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x2c7f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D630Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D630Cu, _value); } while (0); }
    // 0x2c7f28: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x2c7f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6310u, _value); } while (0); }
    // 0x2c7f2c: 0x7baa00a0  lq          $t2, 0xA0($sp)
    ctx->pc = 0x2c7f2cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c7f30: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x2c7f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7f34: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x2c7f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f38: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x2c7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f3c: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x2c7f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6314u, _value); } while (0); }
    // 0x2c7f40: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x2c7f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6318u, _value); } while (0); }
    // 0x2c7f44: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2c7f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D631Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D631Cu, _value); } while (0); }
    // 0x2c7f48: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x2c7f48u;
    { uint32_t bits = FAST_READ32(0x4E57A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7f4c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2c7f4cu;
    { uint32_t bits = FAST_READ32(0x4E57A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f50: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2c7f50u;
    { uint32_t bits = FAST_READ32(0x4E57A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f54: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x2c7f54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6320u, _value); } while (0); }
    // 0x2c7f58: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2c7f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6324u, _value); } while (0); }
    // 0x2c7f5c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2c7f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6328u, _value); } while (0); }
    // 0x2c7f60: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2c7f60u;
    { uint32_t bits = FAST_READ32(0x4E57B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7f64: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c7f64u;
    { uint32_t bits = FAST_READ32(0x4E57B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f68: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c7f68u;
    { uint32_t bits = FAST_READ32(0x4E57B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f6c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2c7f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D632Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D632Cu, _value); } while (0); }
    // 0x2c7f70: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2c7f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6330u, _value); } while (0); }
    // 0x2c7f74: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2c7f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6334u, _value); } while (0); }
    // 0x2c7f78: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c7f78u;
    { uint32_t bits = FAST_READ32(0x4E57C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7f7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c7f7cu;
    { uint32_t bits = FAST_READ32(0x4E57C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f80: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c7f80u;
    { uint32_t bits = FAST_READ32(0x4E57C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f84: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c7f84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6338u, _value); } while (0); }
    // 0x2c7f88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D633Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D633Cu, _value); } while (0); }
    // 0x2c7f8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c7f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6340u, _value); } while (0); }
    // 0x2c7f90: 0x7ba20300  lq          $v0, 0x300($sp)
    ctx->pc = 0x2c7f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2c7f94: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c7f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7f98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c7f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7fa0: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x2c7fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2c7fa4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c7fa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c7fa8: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x2c7fa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2c7fac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c7fb0: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x2c7fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2c7fb4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c7fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c7fb8: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x2c7fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2c7fbc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c7fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7fc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7fc4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c7fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7fc8: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x2c7fc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2c7fcc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c7fccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c7fd0: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x2c7fd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2c7fd4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c7fd8: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x2c7fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2c7fdc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c7fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c7fe0: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x2c7fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2c7fe4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c7fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c7fe8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7fec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c7fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ff0: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x2c7ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2c7ff4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c7ff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c7ff8: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x2c7ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2c7ffc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c7ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8000: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x2c8000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2c8004: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8008: 0x7ba202a0  lq          $v0, 0x2A0($sp)
    ctx->pc = 0x2c8008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2c800c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8010: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8014: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8018: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x2c8018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c801c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c801cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8020: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x2c8020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c8024: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8028: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x2c8028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c802c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c802cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8030: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x2c8030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2c8034: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8038: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c803c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8040: 0xe6c20000  swc1        $f2, 0x0($s6)
    ctx->pc = 0x2c8040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6374u, _value); } while (0); }
    // 0x2c8044: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2c8044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6378u, _value); } while (0); }
    // 0x2c8048: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x2c8048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D637Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D637Cu, _value); } while (0); }
    // 0x2c804c: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x2c804cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c8050: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8054: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8058: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c805c: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x2c805cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2c8060: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8064: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x2c8064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2c8068: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c806c: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x2c806cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2c8070: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8074: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2c8074u;
    { uint32_t bits = FAST_READ32(0x4E5830u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8078: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2c8078u;
    { uint32_t bits = FAST_READ32(0x4E5834u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c807c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2c807cu;
    { uint32_t bits = FAST_READ32(0x4E5838u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8080: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x2c8080u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D638Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D638Cu, _value); } while (0); }
    // 0x2c8084: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2c8084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6390u, _value); } while (0); }
    // 0x2c8088: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2c8088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8D6394u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6394u, _value); } while (0); }
    // 0x2c808c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2c808cu;
    { uint32_t bits = FAST_READ32(0x4E5840u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8090: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x2c8090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2c8094: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2c8094u;
    { uint32_t bits = FAST_READ32(0x4E5844u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8098: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2c8098u;
    { uint32_t bits = FAST_READ32(0x4E5848u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c809c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c809cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c80a0: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x2c80a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2c80a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c80a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c80a8: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x2c80a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2c80ac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c80acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c80b0: 0x7ba20240  lq          $v0, 0x240($sp)
    ctx->pc = 0x2c80b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c80b4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c80b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c80b8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c80b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c80bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80c0: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x2c80c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c80c4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c80c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c80c8: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x2c80c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c80cc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c80ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c80d0: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x2c80d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c80d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c80d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c80d8: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x2c80d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2c80dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c80dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c80e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c80e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c80e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80e8: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x2c80e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c80ec: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c80ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c80f0: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x2c80f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c80f4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c80f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c80f8: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x2c80f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c80fc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c80fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8100: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x2c8100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2c8104: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8108: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c810c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8110: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x2c8110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c8114: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8118: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x2c8118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c811c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c811cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8120: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x2c8120u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c8124: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8128: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x2c8128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2c812c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8130: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8134: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8138: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x2c8138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c813c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c813cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8140: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x2c8140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c8144: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8148: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x2c8148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c814c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8150: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x2c8150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2c8154: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8158: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c815c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8160: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x2c8160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2c8164: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8168: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x2c8168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2c816c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c816cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8170: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x2c8170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2c8174: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8178: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x2c8178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2c817c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c817cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8180: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8184: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8188: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x2c8188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2c818c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c818cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8190: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x2c8190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2c8194: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8198: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x2c8198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2c819c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c819cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c81a0: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x2c81a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2c81a4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c81a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c81a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c81a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c81ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c81acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c81b0: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x2c81b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2c81b4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c81b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c81b8: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x2c81b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2c81bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c81bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c81c0: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x2c81c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2c81c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c81c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c81c8: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x2c81c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2c81cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c81d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c81d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c81d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c81d8: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x2c81d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c81dc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c81dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c81e0: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x2c81e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c81e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c81e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c81e8: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x2c81e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c81ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c81ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c81f0: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x2c81f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2c81f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c81f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c81f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c81f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c81fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c81fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8200: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x2c8200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c8204: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8208: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x2c8208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c820c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c820cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8210: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x2c8210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c8214: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8218: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x2c8218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c821c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8220: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8224: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8228: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2c8228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c822c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c822cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8230: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2c8230u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c8234: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8238: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2c8238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c823c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c823cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8240: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2c8240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c8244: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8248: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c824c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8250: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2c8250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c8254: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8258: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2c8258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c825c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c825cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8260: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2c8260u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c8264: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8268: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2c8268u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c826c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8270: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8274: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c8274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8278: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2c8278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c827c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c827cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c8280: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2c8280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c8284: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c8288: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2c8288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c828c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c828cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c8290: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2c8290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c8294: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c8294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8298: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c829c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c82a0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2c82a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c82a4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c82a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c82a8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2c82a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c82ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c82acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c82b0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2c82b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c82b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c82b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c82b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c82bc: 0xa38289f4  sb          $v0, -0x760C($gp)
    ctx->pc = 0x2c82bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937076), (uint8_t)GPR_U32(ctx, 2));
label_2c82c0:
    // 0x2c82c0: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x2c82c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c82c4: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2c82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2c82c8: 0x8fa40bac  lw          $a0, 0xBAC($sp)
    ctx->pc = 0x2c82c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2988)));
    // 0x2c82cc: 0x8fa50ba8  lw          $a1, 0xBA8($sp)
    ctx->pc = 0x2c82ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2984)));
    // 0x2c82d0: 0x24425f00  addiu       $v0, $v0, 0x5F00
    ctx->pc = 0x2c82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24320));
    // 0x2c82d4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2c82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2c82d8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c82dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c82e0: 0xc040250  jal         func_100940
    ctx->pc = 0x2C82E0u;
    SET_GPR_U32(ctx, 31, 0x2C82E8u);
    ctx->pc = 0x2C82E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C82E0u;
    // 0x2c82e4: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2C82E0u, 0x2C82E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C82E8u;
label_2c82e8:
    // 0x2c82e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c82e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c82ec: 0x14c0f980  bnez        $a2, . + 4 + (-0x680 << 2)
    ctx->pc = 0x2C82ECu;
    {
        const bool branch_taken_0x2c82ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c82ec) {
            ctx->pc = 0x2C68F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c68f0;
        }
    }
    ctx->pc = 0x2C82F4u;
    // 0x2c82f4: 0x0  nop
    ctx->pc = 0x2c82f4u;
    // NOP
label_2c82f8:
    // 0x2c82f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c82f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c82fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c82fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c8300: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c8300u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c8304: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c8304u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c8308: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c8308u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c830c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c830cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8310: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c8310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8314: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c831c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c831cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8320: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8320u;
        // 0x2c8324: 0x27bd0bb0  addiu       $sp, $sp, 0xBB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8328u;
}
