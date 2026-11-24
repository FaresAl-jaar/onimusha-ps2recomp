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

// Function: sub_001950F0
// Address: 0x1950f0 - 0x195d5c
void sub_001950F0_0x1950f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001950F0_0x1950f0");
#endif

    switch (ctx->pc) {
        case 0x195474u: goto label_195474;
        case 0x1954c4u: goto label_1954c4;
        case 0x1954d8u: goto label_1954d8;
        case 0x1954e4u: goto label_1954e4;
        case 0x195594u: goto label_195594;
        case 0x1955a4u: goto label_1955a4;
        case 0x1955b4u: goto label_1955b4;
        case 0x1955c4u: goto label_1955c4;
        case 0x1955d0u: goto label_1955d0;
        case 0x1955d8u: goto label_1955d8;
        case 0x1955e8u: goto label_1955e8;
        case 0x195684u: goto label_195684;
        case 0x195694u: goto label_195694;
        case 0x19569cu: goto label_19569c;
        case 0x1956a8u: goto label_1956a8;
        case 0x1956b8u: goto label_1956b8;
        case 0x1956c0u: goto label_1956c0;
        case 0x1956f8u: goto label_1956f8;
        case 0x195710u: goto label_195710;
        case 0x195888u: goto label_195888;
        case 0x195898u: goto label_195898;
        case 0x1958b0u: goto label_1958b0;
        case 0x1958e4u: goto label_1958e4;
        case 0x195908u: goto label_195908;
        case 0x19591cu: goto label_19591c;
        case 0x195950u: goto label_195950;
        case 0x195974u: goto label_195974;
        case 0x195994u: goto label_195994;
        case 0x1959f0u: goto label_1959f0;
        case 0x195aecu: goto label_195aec;
        case 0x195afcu: goto label_195afc;
        case 0x195b08u: goto label_195b08;
        case 0x195b10u: goto label_195b10;
        case 0x195b20u: goto label_195b20;
        case 0x195c54u: goto label_195c54;
        case 0x195c94u: goto label_195c94;
        case 0x195cb0u: goto label_195cb0;
        case 0x195d04u: goto label_195d04;
        case 0x195d28u: goto label_195d28;
        default: break;
    }

    ctx->pc = 0x1950f0u;

    // 0x1950f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1950f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1950f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1950f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1950f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1950f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1950fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1950fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x195100: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x195100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x195104: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x195104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x195108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x195108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19510c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x195110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x195114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19511c: 0x83828760  lb          $v0, -0x78A0($gp)
    ctx->pc = 0x19511cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936416)));
    // 0x195120: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x195120u;
    {
        const bool branch_taken_0x195120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195120u;
        // 0x195124: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195120) {
            ctx->pc = 0x1953F8u;
            goto label_1953f8;
        }
    }
    ctx->pc = 0x195128u;
    // 0x195128: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x195128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x19512c: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x19512cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x195130: 0x2484c250  addiu       $a0, $a0, -0x3DB0
    ctx->pc = 0x195130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951504));
    // 0x195134: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x195134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x195138: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x195138u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19513c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x19513cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x195140: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x195140u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195144: 0x3c140084  lui         $s4, 0x84
    ctx->pc = 0x195144u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)132 << 16));
    // 0x195148: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x195148u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19514c: 0x24633a00  addiu       $v1, $v1, 0x3A00
    ctx->pc = 0x19514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14848));
    // 0x195150: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x195150u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x195154: 0x3c120084  lui         $s2, 0x84
    ctx->pc = 0x195154u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)132 << 16));
    // 0x195158: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x195158u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x19515c: 0x3c190084  lui         $t9, 0x84
    ctx->pc = 0x19515cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)132 << 16));
    // 0x195160: 0x3c180041  lui         $t8, 0x41
    ctx->pc = 0x195160u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65 << 16));
    // 0x195164: 0x3c0f0084  lui         $t7, 0x84
    ctx->pc = 0x195164u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)132 << 16));
    // 0x195168: 0x3c0e0041  lui         $t6, 0x41
    ctx->pc = 0x195168u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65 << 16));
    // 0x19516c: 0x3c0d0084  lui         $t5, 0x84
    ctx->pc = 0x19516cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)132 << 16));
    // 0x195170: 0x3c0c0041  lui         $t4, 0x41
    ctx->pc = 0x195170u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65 << 16));
    // 0x195174: 0x3c0b0084  lui         $t3, 0x84
    ctx->pc = 0x195174u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)132 << 16));
    // 0x195178: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x195178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A00u, _value); } while (0); }
    // 0x19517c: 0x2442e500  addiu       $v0, $v0, -0x1B00
    ctx->pc = 0x19517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
    // 0x195180: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x195180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A04u, _value); } while (0); }
    // 0x195184: 0x3c0a0041  lui         $t2, 0x41
    ctx->pc = 0x195184u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65 << 16));
    // 0x195188: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x195188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A08u, _value); } while (0); }
    // 0x19518c: 0x3c090084  lui         $t1, 0x84
    ctx->pc = 0x19518cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)132 << 16));
    // 0x195190: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x195190u;
    { uint32_t bits = FAST_READ32(0x40E500u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195194: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x195194u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x195198: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x195198u;
    { uint32_t bits = FAST_READ32(0x40E504u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19519c: 0x3c070084  lui         $a3, 0x84
    ctx->pc = 0x19519cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)132 << 16));
    // 0x1951a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1951a0u;
    { uint32_t bits = FAST_READ32(0x40E508u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1951a4: 0x26b5e5c0  addiu       $s5, $s5, -0x1A40
    ctx->pc = 0x1951a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960576));
    // 0x1951a8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1951a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1951ac: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x1951acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x1951b0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1951b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1951b4: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x1951b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x1951b8: 0x3c160084  lui         $s6, 0x84
    ctx->pc = 0x1951b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)132 << 16));
    // 0x1951bc: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x1951bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x1951c0: 0x3c1e0084  lui         $fp, 0x84
    ctx->pc = 0x1951c0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)132 << 16));
    // 0x1951c4: 0x26943a0c  addiu       $s4, $s4, 0x3A0C
    ctx->pc = 0x1951c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14860));
    // 0x1951c8: 0x2673e510  addiu       $s3, $s3, -0x1AF0
    ctx->pc = 0x1951c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960400));
    // 0x1951cc: 0x26523a18  addiu       $s2, $s2, 0x3A18
    ctx->pc = 0x1951ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 14872));
    // 0x1951d0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1951d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1951d4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1951d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1951d8: 0x3c150084  lui         $s5, 0x84
    ctx->pc = 0x1951d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)132 << 16));
    // 0x1951dc: 0x2631e520  addiu       $s1, $s1, -0x1AE0
    ctx->pc = 0x1951dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960416));
    // 0x1951e0: 0x26b53a9c  addiu       $s5, $s5, 0x3A9C
    ctx->pc = 0x1951e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 15004));
    // 0x1951e4: 0x27393a24  addiu       $t9, $t9, 0x3A24
    ctx->pc = 0x1951e4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 14884));
    // 0x1951e8: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1951e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x1951ec: 0x2718e530  addiu       $t8, $t8, -0x1AD0
    ctx->pc = 0x1951ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294960432));
    // 0x1951f0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1951f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1951f4: 0x25ef3a30  addiu       $t7, $t7, 0x3A30
    ctx->pc = 0x1951f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 14896));
    // 0x1951f8: 0x26b5e5d0  addiu       $s5, $s5, -0x1A30
    ctx->pc = 0x1951f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960592));
    // 0x1951fc: 0x25cee540  addiu       $t6, $t6, -0x1AC0
    ctx->pc = 0x1951fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294960448));
    // 0x195200: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x195200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x195204: 0x25ad3a3c  addiu       $t5, $t5, 0x3A3C
    ctx->pc = 0x195204u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 14908));
    // 0x195208: 0x3c150084  lui         $s5, 0x84
    ctx->pc = 0x195208u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)132 << 16));
    // 0x19520c: 0x258ce550  addiu       $t4, $t4, -0x1AB0
    ctx->pc = 0x19520cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294960464));
    // 0x195210: 0x26b53aa8  addiu       $s5, $s5, 0x3AA8
    ctx->pc = 0x195210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 15016));
    // 0x195214: 0x256b3a48  addiu       $t3, $t3, 0x3A48
    ctx->pc = 0x195214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 14920));
    // 0x195218: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x195218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x19521c: 0x254ae560  addiu       $t2, $t2, -0x1AA0
    ctx->pc = 0x19521cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294960480));
    // 0x195220: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x195220u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x195224: 0x25293a54  addiu       $t1, $t1, 0x3A54
    ctx->pc = 0x195224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 14932));
    // 0x195228: 0x26b5e5e0  addiu       $s5, $s5, -0x1A20
    ctx->pc = 0x195228u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960608));
    // 0x19522c: 0x2508e570  addiu       $t0, $t0, -0x1A90
    ctx->pc = 0x19522cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960496));
    // 0x195230: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x195230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x195234: 0x24e73a60  addiu       $a3, $a3, 0x3A60
    ctx->pc = 0x195234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14944));
    // 0x195238: 0x3c150084  lui         $s5, 0x84
    ctx->pc = 0x195238u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)132 << 16));
    // 0x19523c: 0x24c6e580  addiu       $a2, $a2, -0x1A80
    ctx->pc = 0x19523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960512));
    // 0x195240: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x195240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A0Cu, _value); } while (0); }
    // 0x195244: 0x26b53ab4  addiu       $s5, $s5, 0x3AB4
    ctx->pc = 0x195244u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 15028));
    // 0x195248: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x195248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x19524c: 0x24a53a6c  addiu       $a1, $a1, 0x3A6C
    ctx->pc = 0x19524cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14956));
    // 0x195250: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x195250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A10u, _value); } while (0); }
    // 0x195254: 0x2484e590  addiu       $a0, $a0, -0x1A70
    ctx->pc = 0x195254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960528));
    // 0x195258: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x195258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A14u, _value); } while (0); }
    // 0x19525c: 0x24633a78  addiu       $v1, $v1, 0x3A78
    ctx->pc = 0x19525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14968));
    // 0x195260: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x195260u;
    { uint32_t bits = FAST_READ32(0x40E510u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195264: 0x2442e5a0  addiu       $v0, $v0, -0x1A60
    ctx->pc = 0x195264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960544));
    // 0x195268: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x195268u;
    { uint32_t bits = FAST_READ32(0x40E514u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19526c: 0x26d63a84  addiu       $s6, $s6, 0x3A84
    ctx->pc = 0x19526cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 14980));
    // 0x195270: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x195270u;
    { uint32_t bits = FAST_READ32(0x40E518u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195274: 0x26f7e5b0  addiu       $s7, $s7, -0x1A50
    ctx->pc = 0x195274u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960560));
    // 0x195278: 0x27de3a90  addiu       $fp, $fp, 0x3A90
    ctx->pc = 0x195278u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 14992));
    // 0x19527c: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x19527cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A18u, _value); } while (0); }
    // 0x195280: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x195280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A1Cu, _value); } while (0); }
    // 0x195284: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x195284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A20u, _value); } while (0); }
    // 0x195288: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x195288u;
    { uint32_t bits = FAST_READ32(0x40E520u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19528c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x19528cu;
    { uint32_t bits = FAST_READ32(0x40E524u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195290: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x195290u;
    { uint32_t bits = FAST_READ32(0x40E528u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195294: 0xe7220000  swc1        $f2, 0x0($t9)
    ctx->pc = 0x195294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A24u, _value); } while (0); }
    // 0x195298: 0xe7210004  swc1        $f1, 0x4($t9)
    ctx->pc = 0x195298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A28u, _value); } while (0); }
    // 0x19529c: 0xe7200008  swc1        $f0, 0x8($t9)
    ctx->pc = 0x19529cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A2Cu, _value); } while (0); }
    // 0x1952a0: 0xc7020000  lwc1        $f2, 0x0($t8)
    ctx->pc = 0x1952a0u;
    { uint32_t bits = FAST_READ32(0x40E530u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1952a4: 0xc7010004  lwc1        $f1, 0x4($t8)
    ctx->pc = 0x1952a4u;
    { uint32_t bits = FAST_READ32(0x40E534u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1952a8: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x1952a8u;
    { uint32_t bits = FAST_READ32(0x40E538u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1952ac: 0xe5e20000  swc1        $f2, 0x0($t7)
    ctx->pc = 0x1952acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A30u, _value); } while (0); }
    // 0x1952b0: 0xe5e10004  swc1        $f1, 0x4($t7)
    ctx->pc = 0x1952b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A34u, _value); } while (0); }
    // 0x1952b4: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x1952b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A38u, _value); } while (0); }
    // 0x1952b8: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x1952b8u;
    { uint32_t bits = FAST_READ32(0x40E540u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1952bc: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x1952bcu;
    { uint32_t bits = FAST_READ32(0x40E544u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1952c0: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x1952c0u;
    { uint32_t bits = FAST_READ32(0x40E548u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1952c4: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x1952c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A3Cu, _value); } while (0); }
    // 0x1952c8: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x1952c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A40u, _value); } while (0); }
    // 0x1952cc: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x1952ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A44u, _value); } while (0); }
    // 0x1952d0: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x1952d0u;
    { uint32_t bits = FAST_READ32(0x40E550u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1952d4: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x1952d4u;
    { uint32_t bits = FAST_READ32(0x40E554u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1952d8: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x1952d8u;
    { uint32_t bits = FAST_READ32(0x40E558u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1952dc: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x1952dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A48u, _value); } while (0); }
    // 0x1952e0: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x1952e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A4Cu, _value); } while (0); }
    // 0x1952e4: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x1952e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A50u, _value); } while (0); }
    // 0x1952e8: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x1952e8u;
    { uint32_t bits = FAST_READ32(0x40E560u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1952ec: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x1952ecu;
    { uint32_t bits = FAST_READ32(0x40E564u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1952f0: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x1952f0u;
    { uint32_t bits = FAST_READ32(0x40E568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1952f4: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x1952f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A54u, _value); } while (0); }
    // 0x1952f8: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x1952f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A58u, _value); } while (0); }
    // 0x1952fc: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x1952fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A5Cu, _value); } while (0); }
    // 0x195300: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x195300u;
    { uint32_t bits = FAST_READ32(0x40E570u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195304: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x195304u;
    { uint32_t bits = FAST_READ32(0x40E574u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195308: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x195308u;
    { uint32_t bits = FAST_READ32(0x40E578u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19530c: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x19530cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A60u, _value); } while (0); }
    // 0x195310: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x195310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A64u, _value); } while (0); }
    // 0x195314: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x195314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A68u, _value); } while (0); }
    // 0x195318: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x195318u;
    { uint32_t bits = FAST_READ32(0x40E580u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19531c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x19531cu;
    { uint32_t bits = FAST_READ32(0x40E584u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195320: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x195320u;
    { uint32_t bits = FAST_READ32(0x40E588u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195324: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x195324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A6Cu, _value); } while (0); }
    // 0x195328: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x195328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A70u, _value); } while (0); }
    // 0x19532c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x19532cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A74u, _value); } while (0); }
    // 0x195330: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x195330u;
    { uint32_t bits = FAST_READ32(0x40E590u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195334: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x195334u;
    { uint32_t bits = FAST_READ32(0x40E594u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195338: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x195338u;
    { uint32_t bits = FAST_READ32(0x40E598u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19533c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x19533cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A78u, _value); } while (0); }
    // 0x195340: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x195340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A7Cu, _value); } while (0); }
    // 0x195344: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x195344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A80u, _value); } while (0); }
    // 0x195348: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x195348u;
    { uint32_t bits = FAST_READ32(0x40E5A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19534c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19534cu;
    { uint32_t bits = FAST_READ32(0x40E5A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195350: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x195350u;
    { uint32_t bits = FAST_READ32(0x40E5A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195354: 0xe6c20000  swc1        $f2, 0x0($s6)
    ctx->pc = 0x195354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A84u, _value); } while (0); }
    // 0x195358: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x195358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A88u, _value); } while (0); }
    // 0x19535c: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x19535cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A8Cu, _value); } while (0); }
    // 0x195360: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x195360u;
    { uint32_t bits = FAST_READ32(0x40E5B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195364: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x195364u;
    { uint32_t bits = FAST_READ32(0x40E5B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195368: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x195368u;
    { uint32_t bits = FAST_READ32(0x40E5B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19536c: 0xe7c20000  swc1        $f2, 0x0($fp)
    ctx->pc = 0x19536cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A90u, _value); } while (0); }
    // 0x195370: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x195370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A94u, _value); } while (0); }
    // 0x195374: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x195374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x843A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x843A98u, _value); } while (0); }
    // 0x195378: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x195378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19537c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195380: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x195380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195384: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x195384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195388: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x195388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x19538c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x19538cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x195390: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x195390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x195394: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x195394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x195398: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x195398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x19539c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x19539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1953a0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1953a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1953a4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1953a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1953a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1953a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1953ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1953acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1953b0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1953b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1953b4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1953b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1953b8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1953b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1953bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1953bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1953c0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1953c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1953c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1953c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1953c8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1953c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1953cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1953ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1953d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1953d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1953d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1953d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1953d8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1953d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1953dc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1953dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1953e0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1953e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1953e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1953e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1953e8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1953e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1953ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1953ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1953f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1953f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1953f4: 0xa3828760  sb          $v0, -0x78A0($gp)
    ctx->pc = 0x1953f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936416), (uint8_t)GPR_U32(ctx, 2));
label_1953f8:
    // 0x1953f8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1953f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1953fc: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x1953fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x195400: 0x10200215  beqz        $at, . + 4 + (0x215 << 2)
    ctx->pc = 0x195400u;
    {
        const bool branch_taken_0x195400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195400u;
        // 0x195404: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195400) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x195408u;
    // 0x195408: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x195408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19540c: 0x24635820  addiu       $v1, $v1, 0x5820
    ctx->pc = 0x19540cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22560));
    // 0x195410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x195414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x195418: 0x400008  jr          $v0
    ctx->pc = 0x195418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195420u: goto label_195420;
            case 0x1955E0u: goto label_1955e0;
            case 0x195600u: goto label_195600;
            case 0x1958A0u: goto label_1958a0;
            case 0x195988u: goto label_195988;
            case 0x1959C0u: goto label_1959c0;
            case 0x1959D0u: goto label_1959d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195418u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x195420u;
label_195420:
    // 0x195420: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x195420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x195424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x195424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195428: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x195428u;
    {
        const bool branch_taken_0x195428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x195428) {
            ctx->pc = 0x195468u;
            goto label_195468;
        }
    }
    ctx->pc = 0x195430u;
    // 0x195430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195430u;
    {
        const bool branch_taken_0x195430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195430) {
            ctx->pc = 0x195440u;
            goto label_195440;
        }
    }
    ctx->pc = 0x195438u;
    // 0x195438: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x195438u;
    {
        const bool branch_taken_0x195438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195438) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x195440u;
label_195440:
    // 0x195440: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x195440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195444: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x195444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x195448: 0x2442e480  addiu       $v0, $v0, -0x1B80
    ctx->pc = 0x195448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
    // 0x19544c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19544cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x195450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195454: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x195454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x195458: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x195458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19545c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x19545cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x195460: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x195460u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x195464: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x195464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_195468:
    // 0x195468: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x195468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19546c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x19546Cu;
    SET_GPR_U32(ctx, 31, 0x195474u);
    ctx->pc = 0x195470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19546Cu;
    // 0x195470: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x19546Cu, 0x195474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195474u;
label_195474:
    // 0x195474: 0x144001f8  bnez        $v0, . + 4 + (0x1F8 << 2)
    ctx->pc = 0x195474u;
    {
        const bool branch_taken_0x195474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195474u;
        // 0x195478: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195474) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x19547Cu;
    // 0x19547c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19547cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x195480: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x195480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x195484: 0x2442e390  addiu       $v0, $v0, -0x1C70
    ctx->pc = 0x195484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960016));
    // 0x195488: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x195488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19548c: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x19548cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x195490: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x195490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195494: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x195494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x195498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19549c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x19549cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1954a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1954A0u;
    {
        const bool branch_taken_0x1954a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1954a0) {
            ctx->pc = 0x1954C8u;
            goto label_1954c8;
        }
    }
    ctx->pc = 0x1954A8u;
    // 0x1954a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1954a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1954ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1954acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1954b0: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x1954b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
    // 0x1954b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1954b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1954b8: 0x278487c0  addiu       $a0, $gp, -0x7840
    ctx->pc = 0x1954b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936512));
    // 0x1954bc: 0xc06913c  jal         func_1A44F0
    ctx->pc = 0x1954BCu;
    SET_GPR_U32(ctx, 31, 0x1954C4u);
    ctx->pc = 0x1954C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954BCu;
    // 0x1954c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A44F0u, 0x1954BCu, 0x1954C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954C4u;
label_1954c4:
    // 0x1954c4: 0x0  nop
    ctx->pc = 0x1954c4u;
    // NOP
label_1954c8:
    // 0x1954c8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1954cc: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x1954ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1954d0: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x1954D0u;
    SET_GPR_U32(ctx, 31, 0x1954D8u);
    ctx->pc = 0x1954D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954D0u;
    // 0x1954d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x1954D0u, 0x1954D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954D8u;
label_1954d8:
    // 0x1954d8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1954d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1954dc: 0xc052260  jal         func_148980
    ctx->pc = 0x1954DCu;
    SET_GPR_U32(ctx, 31, 0x1954E4u);
    ctx->pc = 0x1954E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954DCu;
    // 0x1954e0: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x1954DCu, 0x1954E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954E4u;
label_1954e4:
    // 0x1954e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1954e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1954e8: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x1954e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x1954ec: 0x8c2bceb8  lw          $t3, -0x3148($at)
    ctx->pc = 0x1954ecu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1954f0: 0x3c0a4000  lui         $t2, 0x4000
    ctx->pc = 0x1954f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
    // 0x1954f4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1954f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1954f8: 0x3c090ff0  lui         $t1, 0xFF0
    ctx->pc = 0x1954f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4080 << 16));
    // 0x1954fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1954fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x195500: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x195500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x195504: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x195504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x195508: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x195508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19550c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19550cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195510: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x195510u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x195514: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x195514u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195518: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19551c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x19551cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x195520: 0x8c27cec0  lw          $a3, -0x3140($at)
    ctx->pc = 0x195520u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x195524: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195528: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x195528u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x19552c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x19552cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x195530: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195534: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x195534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x195538: 0xac2aceb8  sw          $t2, -0x3148($at)
    ctx->pc = 0x195538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x19553c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19553cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195540: 0xac28cec4  sw          $t0, -0x313C($at)
    ctx->pc = 0x195540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195548: 0xac27cec0  sw          $a3, -0x3140($at)
    ctx->pc = 0x195548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x19554c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19554cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195550: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x195550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x195554: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195558: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x195558u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x19555c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19555cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195560: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x195560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x195564: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x195564u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x195568: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19556c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19556cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x195570: 0xac27cebc  sw          $a3, -0x3144($at)
    ctx->pc = 0x195570u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 7));
    // 0x195574: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195578: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x195578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x19557c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195580: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x195580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x195584: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x195584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x195588: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19558c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x19558Cu;
    SET_GPR_U32(ctx, 31, 0x195594u);
    ctx->pc = 0x195590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19558Cu;
    // 0x195590: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x19558Cu, 0x195594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195594u;
label_195594:
    // 0x195594: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x195594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x195598: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19559c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x19559Cu;
    SET_GPR_U32(ctx, 31, 0x1955A4u);
    ctx->pc = 0x1955A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19559Cu;
    // 0x1955a0: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x19559Cu, 0x1955A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955A4u;
label_1955a4:
    // 0x1955a4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1955a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1955a8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1955ac: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x1955ACu;
    SET_GPR_U32(ctx, 31, 0x1955B4u);
    ctx->pc = 0x1955B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955ACu;
    // 0x1955b0: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x1955ACu, 0x1955B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955B4u;
label_1955b4:
    // 0x1955b4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1955b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1955b8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1955b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1955bc: 0xc04ca14  jal         func_132850
    ctx->pc = 0x1955BCu;
    SET_GPR_U32(ctx, 31, 0x1955C4u);
    ctx->pc = 0x1955C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955BCu;
    // 0x1955c0: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x1955BCu, 0x1955C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955C4u;
label_1955c4:
    // 0x1955c4: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x1955c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x1955c8: 0xc054d98  jal         func_153660
    ctx->pc = 0x1955C8u;
    SET_GPR_U32(ctx, 31, 0x1955D0u);
    ctx->pc = 0x1955CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955C8u;
    // 0x1955cc: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153660u, 0x1955C8u, 0x1955D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955D0u;
label_1955d0:
    // 0x1955d0: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x1955D0u;
    SET_GPR_U32(ctx, 31, 0x1955D8u);
    ctx->pc = 0x1955D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955D0u;
    // 0x1955d4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x1955D0u, 0x1955D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955D8u;
label_1955d8:
    // 0x1955d8: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x1955D8u;
    {
        const bool branch_taken_0x1955d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1955d8) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x1955E0u;
label_1955e0:
    // 0x1955e0: 0xc05551c  jal         func_155470
    ctx->pc = 0x1955E0u;
    SET_GPR_U32(ctx, 31, 0x1955E8u);
    ctx->pc = 0x1955E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955E0u;
    // 0x1955e4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x1955E0u, 0x1955E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955E8u;
label_1955e8:
    // 0x1955e8: 0x1440019b  bnez        $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x1955E8u;
    {
        const bool branch_taken_0x1955e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1955e8) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x1955F0u;
    // 0x1955f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1955f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1955f4: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x1955F4u;
    {
        const bool branch_taken_0x1955f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1955F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955F4u;
        // 0x1955f8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1955f4) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x1955FCu;
    // 0x1955fc: 0x0  nop
    ctx->pc = 0x1955fcu;
    // NOP
label_195600:
    // 0x195600: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x195600u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195604: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x195604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x195608: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195608u;
    {
        const bool branch_taken_0x195608 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195608u;
        // 0x19560c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195608) {
            ctx->pc = 0x195630u;
            goto label_195630;
        }
    }
    ctx->pc = 0x195610u;
    // 0x195610: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x195610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x195614: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x195614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966413)));
    // 0x195618: 0x2442d98c  addiu       $v0, $v0, -0x2674
    ctx->pc = 0x195618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957452));
    // 0x19561c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19561cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195624: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x195624u;
    {
        const bool branch_taken_0x195624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195624u;
        // 0x195628: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195624) {
            ctx->pc = 0x195670u;
            goto label_195670;
        }
    }
    ctx->pc = 0x19562Cu;
    // 0x19562c: 0x0  nop
    ctx->pc = 0x19562cu;
    // NOP
label_195630:
    // 0x195630: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195634: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x195634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x195638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19563c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19563Cu;
    {
        const bool branch_taken_0x19563c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x195640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19563Cu;
        // 0x195640: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19563c) {
            ctx->pc = 0x195658u;
            goto label_195658;
        }
    }
    ctx->pc = 0x195644u;
    // 0x195644: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x195644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x195648: 0x2442d910  addiu       $v0, $v0, -0x26F0
    ctx->pc = 0x195648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
    // 0x19564c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195650: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195650u;
    {
        const bool branch_taken_0x195650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195650u;
        // 0x195654: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195650) {
            ctx->pc = 0x195670u;
            goto label_195670;
        }
    }
    ctx->pc = 0x195658u;
label_195658:
    // 0x195658: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x195658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x19565c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19565cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x195660: 0x2442d950  addiu       $v0, $v0, -0x26B0
    ctx->pc = 0x195660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957392));
    // 0x195664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195668: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x195668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19566c: 0x0  nop
    ctx->pc = 0x19566cu;
    // NOP
label_195670:
    // 0x195670: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x195670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195674: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x195674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x195678: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x195678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19567c: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x19567Cu;
    SET_GPR_U32(ctx, 31, 0x195684u);
    ctx->pc = 0x195680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19567Cu;
    // 0x195680: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x19567Cu, 0x195684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195684u;
label_195684:
    // 0x195684: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x195684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x195688: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x195688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x19568c: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x19568Cu;
    SET_GPR_U32(ctx, 31, 0x195694u);
    ctx->pc = 0x195690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19568Cu;
    // 0x195690: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x19568Cu, 0x195694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195694u;
label_195694:
    // 0x195694: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x195694u;
    SET_GPR_U32(ctx, 31, 0x19569Cu);
    ctx->pc = 0x195698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195694u;
    // 0x195698: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x195694u, 0x19569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19569Cu;
label_19569c:
    // 0x19569c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19569Cu;
    {
        const bool branch_taken_0x19569c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19569c) {
            ctx->pc = 0x1956C8u;
            goto label_1956c8;
        }
    }
    ctx->pc = 0x1956A4u;
    // 0x1956a4: 0x0  nop
    ctx->pc = 0x1956a4u;
    // NOP
label_1956a8:
    // 0x1956a8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1956a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1956ac: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x1956acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x1956b0: 0xc04c918  jal         func_132460
    ctx->pc = 0x1956B0u;
    SET_GPR_U32(ctx, 31, 0x1956B8u);
    ctx->pc = 0x1956B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1956B0u;
    // 0x1956b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x1956B0u, 0x1956B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956B8u;
label_1956b8:
    // 0x1956b8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x1956B8u;
    SET_GPR_U32(ctx, 31, 0x1956C0u);
    ctx->pc = 0x1956BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1956B8u;
    // 0x1956bc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x1956B8u, 0x1956C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956C0u;
label_1956c0:
    // 0x1956c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1956C0u;
    {
        const bool branch_taken_0x1956c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1956c0) {
            ctx->pc = 0x1956A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1956a8;
        }
    }
    ctx->pc = 0x1956C8u;
label_1956c8:
    // 0x1956c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1956c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1956cc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x1956ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1956d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1956d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1956d4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1956d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1956d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1956d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1956dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1956e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1956e4: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x1956e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x1956e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1956e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1956ec: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1956ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1956f0: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x1956F0u;
    SET_GPR_U32(ctx, 31, 0x1956F8u);
    ctx->pc = 0x1956F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1956F0u;
    // 0x1956f4: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x1956F0u, 0x1956F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956F8u;
label_1956f8:
    // 0x1956f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1956f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1956fc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1956fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x195700: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x195700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x195704: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x195704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x195708: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x195708u;
    SET_GPR_U32(ctx, 31, 0x195710u);
    ctx->pc = 0x19570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195708u;
    // 0x19570c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x195708u, 0x195710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195710u;
label_195710:
    // 0x195710: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x195710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x195714: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195718: 0x8c2dcebc  lw          $t5, -0x3144($at)
    ctx->pc = 0x195718u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x19571c: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x19571cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x195720: 0x3c020fbf  lui         $v0, 0xFBF
    ctx->pc = 0x195720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4031 << 16));
    // 0x195724: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x195724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x195728: 0x34426e01  ori         $v0, $v0, 0x6E01
    ctx->pc = 0x195728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28161);
    // 0x19572c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x19572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x195730: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x195734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x195738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19573c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19573cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195740: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x195740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195744: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195748: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x195748u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x19574c: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x19574cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195750: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195754: 0x354a0800  ori         $t2, $t2, 0x800
    ctx->pc = 0x195754u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2048);
    // 0x195758: 0x8c2bcec0  lw          $t3, -0x3140($at)
    ctx->pc = 0x195758u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x19575c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x19575cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x195760: 0x8c2368a8  lw          $v1, 0x68A8($at)
    ctx->pc = 0x195760u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7E68A8u));
    // 0x195764: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195768: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x195768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19576c: 0xac2ccebc  sw          $t4, -0x3144($at)
    ctx->pc = 0x19576cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x195770: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195774: 0xac2acec4  sw          $t2, -0x313C($at)
    ctx->pc = 0x195774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195778: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19577c: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x19577cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195780: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x195784: 0x16a1825  or          $v1, $t3, $t2
    ctx->pc = 0x195784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x195788: 0xac2268a8  sw          $v0, 0x68A8($at)
    ctx->pc = 0x195788u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E68A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E68A8u, _value); } while (0);
    // 0x19578c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19578cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195790: 0x35420400  ori         $v0, $t2, 0x400
    ctx->pc = 0x195790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1024);
    // 0x195794: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x195794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x195798: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19579c: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x19579cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x1957a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957a4: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x1957a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x1957a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957ac: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x1957acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x1957b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1957b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1957b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957b8: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x1957b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x1957bc: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1957bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1957c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957c4: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x1957c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x1957c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957cc: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x1957ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x1957d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957d4: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x1957d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x1957d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1957d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1957dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957e0: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x1957e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x1957e4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1957e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1957e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957ec: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x1957ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x1957f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957f4: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x1957f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x1957f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1957f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1957fc: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x1957fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195800: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x195800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x195804: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195808: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x195808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x19580c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x19580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x195810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195814: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x195814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195818: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19581c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x19581cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x195820: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195824: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x195824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195828: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x195828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19582c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19582cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195830: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x195830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x195834: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x195834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x195838: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19583c: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x19583cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195840: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195844: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x195848: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19584c: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x19584cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195850: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x195850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x195854: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195858: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x195858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x19585c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x19585cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x195860: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195864: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x195864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195868: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19586c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x19586cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x195870: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195874: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x195874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195878: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x195878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19587c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19587cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195880: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x195880u;
    SET_GPR_U32(ctx, 31, 0x195888u);
    ctx->pc = 0x195884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195880u;
    // 0x195884: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x195880u, 0x195888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195888u;
label_195888:
    // 0x195888: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19588c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19588cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195890: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x195890u;
    SET_GPR_U32(ctx, 31, 0x195898u);
    ctx->pc = 0x195894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195890u;
    // 0x195894: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x195890u, 0x195898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195898u;
label_195898:
    // 0x195898: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x195898u;
    {
        const bool branch_taken_0x195898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195898) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x1958A0u;
label_1958a0:
    // 0x1958a0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1958a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1958a4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1958a8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1958A8u;
    SET_GPR_U32(ctx, 31, 0x1958B0u);
    ctx->pc = 0x1958ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958A8u;
    // 0x1958ac: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1958A8u, 0x1958B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958B0u;
label_1958b0:
    // 0x1958b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1958B0u;
    {
        const bool branch_taken_0x1958b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1958B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958B0u;
        // 0x1958b4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958b0) {
            ctx->pc = 0x1958E8u;
            goto label_1958e8;
        }
    }
    ctx->pc = 0x1958B8u;
    // 0x1958b8: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x1958bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1958bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1958c0: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x1958c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x1958c4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1958c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1958c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1958cc: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x1958ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1958d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1958d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958d4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1958d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1958d8: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1958d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1958dc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1958DCu;
    SET_GPR_U32(ctx, 31, 0x1958E4u);
    ctx->pc = 0x1958E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958DCu;
    // 0x1958e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1958DCu, 0x1958E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958E4u;
label_1958e4:
    // 0x1958e4: 0x0  nop
    ctx->pc = 0x1958e4u;
    // NOP
label_1958e8:
    // 0x1958e8: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x1958e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1958ec: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x1958ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x1958f0: 0x24423a00  addiu       $v0, $v0, 0x3A00
    ctx->pc = 0x1958f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
    // 0x1958f4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1958f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1958f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1958f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1958fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1958fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195900: 0xc040274  jal         func_1009D0
    ctx->pc = 0x195900u;
    SET_GPR_U32(ctx, 31, 0x195908u);
    ctx->pc = 0x195904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195900u;
    // 0x195904: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x195900u, 0x195908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195908u;
label_195908:
    // 0x195908: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x195908u;
    {
        const bool branch_taken_0x195908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195908u;
        // 0x19590c: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195908) {
            ctx->pc = 0x195988u;
            goto label_195988;
        }
    }
    ctx->pc = 0x195910u;
    // 0x195910: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x195914: 0xc05e360  jal         func_178D80
    ctx->pc = 0x195914u;
    SET_GPR_U32(ctx, 31, 0x19591Cu);
    ctx->pc = 0x195918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195914u;
    // 0x195918: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x195914u, 0x19591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19591Cu;
label_19591c:
    // 0x19591c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19591Cu;
    {
        const bool branch_taken_0x19591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19591Cu;
        // 0x195920: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19591c) {
            ctx->pc = 0x195950u;
            goto label_195950;
        }
    }
    ctx->pc = 0x195924u;
    // 0x195924: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x195924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x195928: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x195928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x19592c: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x19592cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x195930: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x195930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x195934: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x195934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x195938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x195938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19593c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19593cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195940: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x195940u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x195944: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x195944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x195948: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x195948u;
    SET_GPR_U32(ctx, 31, 0x195950u);
    ctx->pc = 0x19594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195948u;
    // 0x19594c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x195948u, 0x195950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195950u;
label_195950:
    // 0x195950: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x195950u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195954: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x195958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19595c: 0x24423a00  addiu       $v0, $v0, 0x3A00
    ctx->pc = 0x19595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
    // 0x195960: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x195964: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x195968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19596c: 0xc040250  jal         func_100940
    ctx->pc = 0x19596Cu;
    SET_GPR_U32(ctx, 31, 0x195974u);
    ctx->pc = 0x195970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19596Cu;
    // 0x195970: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x19596Cu, 0x195974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195974u;
label_195974:
    // 0x195974: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x195974u;
    {
        const bool branch_taken_0x195974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195974) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x19597Cu;
    // 0x19597c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195980: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x195980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x195984: 0x0  nop
    ctx->pc = 0x195984u;
    // NOP
label_195988:
    // 0x195988: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x195988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19598c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x19598Cu;
    SET_GPR_U32(ctx, 31, 0x195994u);
    ctx->pc = 0x195990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19598Cu;
    // 0x195990: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x19598Cu, 0x195994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195994u;
label_195994:
    // 0x195994: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x195994u;
    {
        const bool branch_taken_0x195994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195994) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x19599Cu;
    // 0x19599c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1959a0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1959a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1959a4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1959a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1959a8: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x1959a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x1959ac: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1959acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x1959b0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1959b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1959b4: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1959B4u;
    {
        const bool branch_taken_0x1959b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959B4u;
        // 0x1959b8: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959b4) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x1959BCu;
    // 0x1959bc: 0x0  nop
    ctx->pc = 0x1959bcu;
    // NOP
label_1959c0:
    // 0x1959c0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1959c4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x1959C4u;
    {
        const bool branch_taken_0x1959c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959C4u;
        // 0x1959c8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959c4) {
            ctx->pc = 0x195C58u;
            goto label_195c58;
        }
    }
    ctx->pc = 0x1959CCu;
    // 0x1959cc: 0x0  nop
    ctx->pc = 0x1959ccu;
    // NOP
label_1959d0:
    // 0x1959d0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1959d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1959d4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1959d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1959d8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1959d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1959dc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1959dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1959e0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x1959e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x1959e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1959e8: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x1959E8u;
    SET_GPR_U32(ctx, 31, 0x1959F0u);
    ctx->pc = 0x1959ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959E8u;
    // 0x1959ec: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x1959E8u, 0x1959F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1959F0u;
label_1959f0:
    // 0x1959f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1959f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1959f4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1959f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1959f8: 0x8c25ceb8  lw          $a1, -0x3148($at)
    ctx->pc = 0x1959f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1959fc: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x1959fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x195a00: 0x3c02f00f  lui         $v0, 0xF00F
    ctx->pc = 0x195a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61455 << 16));
    // 0x195a04: 0x2408fffb  addiu       $t0, $zero, -0x5
    ctx->pc = 0x195a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x195a08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x195a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x195a0c: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x195a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x195a10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a14: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x195a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x195a18: 0x8c23cec4  lw          $v1, -0x313C($at)
    ctx->pc = 0x195a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x195a1c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x195a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x195a20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x195a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x195a28: 0x8c2ecec8  lw          $t6, -0x3138($at)
    ctx->pc = 0x195a28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x195a2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a30: 0x8c2dcecc  lw          $t5, -0x3134($at)
    ctx->pc = 0x195a30u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CECCu));
    // 0x195a34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a38: 0x8c2cced0  lw          $t4, -0x3130($at)
    ctx->pc = 0x195a38u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CED0u));
    // 0x195a3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a40: 0x8c2bced8  lw          $t3, -0x3128($at)
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CED8u));
    // 0x195a44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a48: 0x8c2acedc  lw          $t2, -0x3124($at)
    ctx->pc = 0x195a48u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x195a4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a50: 0xac24ceb8  sw          $a0, -0x3148($at)
    ctx->pc = 0x195a50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x195a54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x195a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x195a5c: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x195a5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195a60: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x195a64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a68: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x195a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x195a6c: 0x8c2fcec4  lw          $t7, -0x313C($at)
    ctx->pc = 0x195a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195a70: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x195a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x195a74: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x195a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x195a78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x195a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x195a7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a80: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x195a80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x195a84: 0x8c29cebc  lw          $t1, -0x3144($at)
    ctx->pc = 0x195a84u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x195a88: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x195a88u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x195a8c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195a90: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x195a90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x195a94: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x195a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x195a98: 0x18d4825  or          $t1, $t4, $t5
    ctx->pc = 0x195a98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x195a9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195aa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x195aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x195aa4: 0xac28cebc  sw          $t0, -0x3144($at)
    ctx->pc = 0x195aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 8));
    // 0x195aa8: 0x1691825  or          $v1, $t3, $t1
    ctx->pc = 0x195aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x195aac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195ab0: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x195ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x195ab4: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x195ab4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x195ab8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195abc: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x195abcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x195ac0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195ac4: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x195ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x195ac8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x195ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x195acc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195ad0: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x195ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x195ad4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195ad8: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x195ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x195adc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x195adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x195ae0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195ae4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x195AE4u;
    SET_GPR_U32(ctx, 31, 0x195AECu);
    ctx->pc = 0x195AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195AE4u;
    // 0x195ae8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x195AE4u, 0x195AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AECu;
label_195aec:
    // 0x195aec: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x195aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x195af0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x195af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x195af4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x195AF4u;
    SET_GPR_U32(ctx, 31, 0x195AFCu);
    ctx->pc = 0x195AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195AF4u;
    // 0x195af8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x195AF4u, 0x195AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AFCu;
label_195afc:
    // 0x195afc: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x195afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x195b00: 0xc054ddc  jal         func_153770
    ctx->pc = 0x195B00u;
    SET_GPR_U32(ctx, 31, 0x195B08u);
    ctx->pc = 0x195B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B00u;
    // 0x195b04: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153770u, 0x195B00u, 0x195B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B08u;
label_195b08:
    // 0x195b08: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x195B08u;
    SET_GPR_U32(ctx, 31, 0x195B10u);
    ctx->pc = 0x195B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B08u;
    // 0x195b0c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x195B08u, 0x195B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B10u;
label_195b10:
    // 0x195b10: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x195b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x195b14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195b18: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x195B18u;
    SET_GPR_U32(ctx, 31, 0x195B20u);
    ctx->pc = 0x195B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B18u;
    // 0x195b1c: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x195B18u, 0x195B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B20u;
label_195b20:
    // 0x195b20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b24: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x195b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x195b28: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x195b28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x195b2c: 0x240ffbff  addiu       $t7, $zero, -0x401
    ctx->pc = 0x195b2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x195b30: 0x240efdff  addiu       $t6, $zero, -0x201
    ctx->pc = 0x195b30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x195b34: 0x240dff7f  addiu       $t5, $zero, -0x81
    ctx->pc = 0x195b34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x195b38: 0x240cffbf  addiu       $t4, $zero, -0x41
    ctx->pc = 0x195b38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x195b3c: 0x240bffdf  addiu       $t3, $zero, -0x21
    ctx->pc = 0x195b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x195b40: 0x240affef  addiu       $t2, $zero, -0x11
    ctx->pc = 0x195b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x195b44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b48: 0x2487c  dsll32      $t1, $v0, 1
    ctx->pc = 0x195b48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 1));
    // 0x195b4c: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x195b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x195b50: 0x9487e  dsrl32      $t1, $t1, 1
    ctx->pc = 0x195b50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 1));
    // 0x195b54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b58: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x195b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x195b5c: 0x8c27cec8  lw          $a3, -0x3138($at)
    ctx->pc = 0x195b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x195b60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b64: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x195b64u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x195b68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b6c: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x195b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x195b70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b74: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x195b74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x195b78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b7c: 0x8c22cedc  lw          $v0, -0x3124($at)
    ctx->pc = 0x195b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x195b80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b84: 0xac29cebc  sw          $t1, -0x3144($at)
    ctx->pc = 0x195b84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x195b88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b8c: 0xac24cec4  sw          $a0, -0x313C($at)
    ctx->pc = 0x195b8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195b90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195b94: 0x3c04f040  lui         $a0, 0xF040
    ctx->pc = 0x195b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61504 << 16));
    // 0x195b98: 0x8c31cec4  lw          $s1, -0x313C($at)
    ctx->pc = 0x195b98u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195b9c: 0x348891fe  ori         $t0, $a0, 0x91FE
    ctx->pc = 0x195b9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37374);
    // 0x195ba0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x195ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x195ba4: 0x22f7824  and         $t7, $s1, $t7
    ctx->pc = 0x195ba4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x195ba8: 0x8c2968a8  lw          $t1, 0x68A8($at)
    ctx->pc = 0x195ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26792)));
    // 0x195bac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195bb0: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x195bb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x195bb4: 0xac2fcec4  sw          $t7, -0x313C($at)
    ctx->pc = 0x195bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954692), GPR_U32(ctx, 15));
    // 0x195bb8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x195bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x195bbc: 0xac2868a8  sw          $t0, 0x68A8($at)
    ctx->pc = 0x195bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x7E68A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E68A8u, _value); } while (0);
    // 0x195bc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195bc4: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x195bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195bc8: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x195bc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x195bcc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195bd0: 0xac28cec4  sw          $t0, -0x313C($at)
    ctx->pc = 0x195bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195bd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195bd8: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x195bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195bdc: 0x10d4024  and         $t0, $t0, $t5
    ctx->pc = 0x195bdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 13));
    // 0x195be0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195be4: 0xac28cec4  sw          $t0, -0x313C($at)
    ctx->pc = 0x195be4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195be8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195bec: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x195becu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195bf0: 0x10c4024  and         $t0, $t0, $t4
    ctx->pc = 0x195bf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 12));
    // 0x195bf4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195bf8: 0xac28cec4  sw          $t0, -0x313C($at)
    ctx->pc = 0x195bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195bfc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195c00: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x195c00u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195c04: 0x10b4024  and         $t0, $t0, $t3
    ctx->pc = 0x195c04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 11));
    // 0x195c08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195c0c: 0xac28cec4  sw          $t0, -0x313C($at)
    ctx->pc = 0x195c0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195c10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195c14: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x195c14u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195c18: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x195c18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x195c1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195c20: 0xac28cec4  sw          $t0, -0x313C($at)
    ctx->pc = 0x195c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x195c24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195c28: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x195c28u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x195c2c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x195c2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x195c30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195c34: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x195c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x195c38: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x195c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x195c3c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x195c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x195c40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195c44: 0xac22cec0  sw          $v0, -0x3140($at)
    ctx->pc = 0x195c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x195c48: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x195c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x195c4c: 0xc0657bc  jal         func_195EF0
    ctx->pc = 0x195C4Cu;
    SET_GPR_U32(ctx, 31, 0x195C54u);
    ctx->pc = 0x195C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C4Cu;
    // 0x195c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195EF0u, 0x195C4Cu, 0x195C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C54u;
label_195c54:
    // 0x195c54: 0x0  nop
    ctx->pc = 0x195c54u;
    // NOP
label_195c58:
    // 0x195c58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x195c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x195c5c: 0x9023fc8f  lbu         $v1, -0x371($at)
    ctx->pc = 0x195c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x195c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195c64: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x195C64u;
    {
        const bool branch_taken_0x195c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x195C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C64u;
        // 0x195c68: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c64) {
            ctx->pc = 0x195D28u;
            goto label_195d28;
        }
    }
    ctx->pc = 0x195C6Cu;
    // 0x195c6c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x195c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x195c70: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x195c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x195c74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x195c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x195c78: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x195C78u;
    {
        const bool branch_taken_0x195c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C78u;
        // 0x195c7c: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c78) {
            ctx->pc = 0x195D28u;
            goto label_195d28;
        }
    }
    ctx->pc = 0x195C80u;
    // 0x195c80: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x195c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x195c84: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x195c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x195c88: 0x27a6010c  addiu       $a2, $sp, 0x10C
    ctx->pc = 0x195c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x195c8c: 0xc04ca60  jal         func_132980
    ctx->pc = 0x195C8Cu;
    SET_GPR_U32(ctx, 31, 0x195C94u);
    ctx->pc = 0x195C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C8Cu;
    // 0x195c90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132980u, 0x195C8Cu, 0x195C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C94u;
label_195c94:
    // 0x195c94: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x195C94u;
    {
        const bool branch_taken_0x195c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C94u;
        // 0x195c98: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c94) {
            ctx->pc = 0x195D28u;
            goto label_195d28;
        }
    }
    ctx->pc = 0x195C9Cu;
    // 0x195c9c: 0x8c252f90  lw          $a1, 0x2F90($at)
    ctx->pc = 0x195c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 12176)));
    // 0x195ca0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x195ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195ca4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x195CA4u;
    {
        const bool branch_taken_0x195ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CA4u;
        // 0x195ca8: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ca4) {
            ctx->pc = 0x195CD8u;
            goto label_195cd8;
        }
    }
    ctx->pc = 0x195CACu;
    // 0x195cac: 0x0  nop
    ctx->pc = 0x195cacu;
    // NOP
label_195cb0:
    // 0x195cb0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x195cb4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195CB4u;
    {
        const bool branch_taken_0x195cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x195cb4) {
            ctx->pc = 0x195CC8u;
            goto label_195cc8;
        }
    }
    ctx->pc = 0x195CBCu;
    // 0x195cbc: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x195cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x195cc0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195CC0u;
    {
        const bool branch_taken_0x195cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cc0) {
            ctx->pc = 0x195CD8u;
            goto label_195cd8;
        }
    }
    ctx->pc = 0x195CC8u;
label_195cc8:
    // 0x195cc8: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x195cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x195ccc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x195cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195cd0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x195CD0u;
    {
        const bool branch_taken_0x195cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cd0) {
            ctx->pc = 0x195CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195cb0;
        }
    }
    ctx->pc = 0x195CD8u;
label_195cd8:
    // 0x195cd8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x195CD8u;
    {
        const bool branch_taken_0x195cd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cd8) {
            ctx->pc = 0x195D10u;
            goto label_195d10;
        }
    }
    ctx->pc = 0x195CE0u;
    // 0x195ce0: 0x94a32ac2  lhu         $v1, 0x2AC2($a1)
    ctx->pc = 0x195ce0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10946)));
    // 0x195ce4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x195ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195ce8: 0x14670009  bne         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x195CE8u;
    {
        const bool branch_taken_0x195ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x195ce8) {
            ctx->pc = 0x195D10u;
            goto label_195d10;
        }
    }
    ctx->pc = 0x195CF0u;
    // 0x195cf0: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x195cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x195cf4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x195cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x195cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cfc: 0xc061c60  jal         func_187180
    ctx->pc = 0x195CFCu;
    SET_GPR_U32(ctx, 31, 0x195D04u);
    ctx->pc = 0x195D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CFCu;
    // 0x195d00: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x195CFCu, 0x195D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D04u;
label_195d04:
    // 0x195d04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195D04u;
    {
        const bool branch_taken_0x195d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d04) {
            ctx->pc = 0x195D28u;
            goto label_195d28;
        }
    }
    ctx->pc = 0x195D0Cu;
    // 0x195d0c: 0x0  nop
    ctx->pc = 0x195d0cu;
    // NOP
label_195d10:
    // 0x195d10: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x195d14: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x195d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x195d18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d1c: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x195d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x195d20: 0xc061c60  jal         func_187180
    ctx->pc = 0x195D20u;
    SET_GPR_U32(ctx, 31, 0x195D28u);
    ctx->pc = 0x195D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D20u;
    // 0x195d24: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x195D20u, 0x195D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D28u;
label_195d28:
    // 0x195d28: 0x82020006  lb          $v0, 0x6($s0)
    ctx->pc = 0x195d28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x195d2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x195d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195d30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x195d30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195d34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x195d34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x195d38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x195d38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195d3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x195d3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195d40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x195d40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195d44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x195d44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195d48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195d4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195d54: 0x3e00008  jr          $ra
    ctx->pc = 0x195D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D54u;
        // 0x195d58: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195D5Cu;
}
