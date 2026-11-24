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

// Function: sub_0031CBC0
// Address: 0x31cbc0 - 0x31d320
void sub_0031CBC0_0x31cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CBC0_0x31cbc0");
#endif

    switch (ctx->pc) {
        case 0x31cc00u: goto label_31cc00;
        case 0x31cc30u: goto label_31cc30;
        case 0x31cf80u: goto label_31cf80;
        case 0x31d020u: goto label_31d020;
        case 0x31d098u: goto label_31d098;
        case 0x31d0c8u: goto label_31d0c8;
        case 0x31d0e8u: goto label_31d0e8;
        case 0x31d100u: goto label_31d100;
        case 0x31d190u: goto label_31d190;
        case 0x31d1ccu: goto label_31d1cc;
        case 0x31d254u: goto label_31d254;
        case 0x31d280u: goto label_31d280;
        case 0x31d2dcu: goto label_31d2dc;
        default: break;
    }

    ctx->pc = 0x31cbc0u;

    // 0x31cbc0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x31cbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x31cbc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31cbc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31cbcc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31cbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31cbd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31cbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31cbd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31cbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31cbd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31cbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31cbdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31cbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31cbe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31cbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31cbe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31cbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31cbe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31cbec: 0xafa4013c  sw          $a0, 0x13C($sp)
    ctx->pc = 0x31cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 4));
    // 0x31cbf0: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x31cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x31cbf4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x31cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x31cbf8: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x31cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x31cbfc: 0x0  nop
    ctx->pc = 0x31cbfcu;
    // NOP
label_31cc00:
    // 0x31cc00: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x31cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31cc04: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x31cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x31cc08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31CC08u;
    {
        const bool branch_taken_0x31cc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC08u;
        // 0x31cc0c: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc08) {
            ctx->pc = 0x31CC20u;
            goto label_31cc20;
        }
    }
    ctx->pc = 0x31CC10u;
    // 0x31cc10: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x31cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31cc14: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x31CC14u;
    {
        const bool branch_taken_0x31cc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC14u;
        // 0x31cc18: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc14) {
            ctx->pc = 0x31CF90u;
            goto label_31cf90;
        }
    }
    ctx->pc = 0x31CC1Cu;
    // 0x31cc1c: 0x0  nop
    ctx->pc = 0x31cc1cu;
    // NOP
label_31cc20:
    // 0x31cc20: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x31cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31cc24: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x31cc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31cc28: 0x10a000d9  beqz        $a1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x31CC28u;
    {
        const bool branch_taken_0x31cc28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cc28) {
            ctx->pc = 0x31CF90u;
            goto label_31cf90;
        }
    }
    ctx->pc = 0x31CC30u;
label_31cc30:
    // 0x31cc30: 0x83828b40  lb          $v0, -0x74C0($gp)
    ctx->pc = 0x31cc30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937408)));
    // 0x31cc34: 0x144000c8  bnez        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x31CC34u;
    {
        const bool branch_taken_0x31cc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC34u;
        // 0x31cc38: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc34) {
            ctx->pc = 0x31CF58u;
            goto label_31cf58;
        }
    }
    ctx->pc = 0x31CC3Cu;
    // 0x31cc3c: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x31cc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x31cc40: 0x244294f0  addiu       $v0, $v0, -0x6B10
    ctx->pc = 0x31cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939888));
    // 0x31cc44: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31cc48: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x31cc48u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31cc4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cc50: 0x24e7e920  addiu       $a3, $a3, -0x16E0
    ctx->pc = 0x31cc50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961440));
    // 0x31cc54: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x31cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x31cc58: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x31cc58u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x31cc5c: 0x3c14004f  lui         $s4, 0x4F
    ctx->pc = 0x31cc5cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)79 << 16));
    // 0x31cc60: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x31cc60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x31cc64: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x31cc64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x31cc68: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x31cc68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x31cc6c: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x31cc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x31cc70: 0x3c19008f  lui         $t9, 0x8F
    ctx->pc = 0x31cc70u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)143 << 16));
    // 0x31cc74: 0x3c18004f  lui         $t8, 0x4F
    ctx->pc = 0x31cc74u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)79 << 16));
    // 0x31cc78: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x31cc78u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8EE920u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x8EE920u, _value); } while (0);
    // 0x31cc7c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x31cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x31cc80: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x31cc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE928u, _value); } while (0); }
    // 0x31cc84: 0x24849500  addiu       $a0, $a0, -0x6B00
    ctx->pc = 0x31cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939904));
    // 0x31cc88: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x31cc88u;
    { uint32_t bits = FAST_READ32(0x4E9500u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cc8c: 0x3c0f008f  lui         $t7, 0x8F
    ctx->pc = 0x31cc8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)143 << 16));
    // 0x31cc90: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x31cc90u;
    { uint32_t bits = FAST_READ32(0x4E9504u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cc94: 0x3c0e004f  lui         $t6, 0x4F
    ctx->pc = 0x31cc94u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)79 << 16));
    // 0x31cc98: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x31cc98u;
    { uint32_t bits = FAST_READ32(0x4E9508u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cc9c: 0x3c0d008f  lui         $t5, 0x8F
    ctx->pc = 0x31cc9cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)143 << 16));
    // 0x31cca0: 0x3c0c004f  lui         $t4, 0x4F
    ctx->pc = 0x31cca0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)79 << 16));
    // 0x31cca4: 0x3c0b008f  lui         $t3, 0x8F
    ctx->pc = 0x31cca4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)143 << 16));
    // 0x31cca8: 0x3c0a004f  lui         $t2, 0x4F
    ctx->pc = 0x31cca8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)79 << 16));
    // 0x31ccac: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x31ccacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x31ccb0: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x31ccb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x31ccb4: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x31ccb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x31ccb8: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x31ccb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x31ccbc: 0x3c1e008f  lui         $fp, 0x8F
    ctx->pc = 0x31ccbcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)143 << 16));
    // 0x31ccc0: 0x3c17008f  lui         $s7, 0x8F
    ctx->pc = 0x31ccc0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)143 << 16));
    // 0x31ccc4: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x31ccc4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x31ccc8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31cccc: 0x2463e92c  addiu       $v1, $v1, -0x16D4
    ctx->pc = 0x31ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961452));
    // 0x31ccd0: 0x248495b0  addiu       $a0, $a0, -0x6A50
    ctx->pc = 0x31ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940080));
    // 0x31ccd4: 0x24429510  addiu       $v0, $v0, -0x6AF0
    ctx->pc = 0x31ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939920));
    // 0x31ccd8: 0x7fa40100  sq          $a0, 0x100($sp)
    ctx->pc = 0x31ccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
    // 0x31ccdc: 0x26b5e938  addiu       $s5, $s5, -0x16C8
    ctx->pc = 0x31ccdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961464));
    // 0x31cce0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x31cce4: 0x26949520  addiu       $s4, $s4, -0x6AE0
    ctx->pc = 0x31cce4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939936));
    // 0x31cce8: 0x2484e9b0  addiu       $a0, $a0, -0x1650
    ctx->pc = 0x31cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961584));
    // 0x31ccec: 0x2673e944  addiu       $s3, $s3, -0x16BC
    ctx->pc = 0x31ccecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961476));
    // 0x31ccf0: 0x7fa400f0  sq          $a0, 0xF0($sp)
    ctx->pc = 0x31ccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 4));
    // 0x31ccf4: 0x26529530  addiu       $s2, $s2, -0x6AD0
    ctx->pc = 0x31ccf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939952));
    // 0x31ccf8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31ccfc: 0x2631e950  addiu       $s1, $s1, -0x16B0
    ctx->pc = 0x31ccfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961488));
    // 0x31cd00: 0x248495c0  addiu       $a0, $a0, -0x6A40
    ctx->pc = 0x31cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940096));
    // 0x31cd04: 0x26109540  addiu       $s0, $s0, -0x6AC0
    ctx->pc = 0x31cd04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939968));
    // 0x31cd08: 0x7fa400e0  sq          $a0, 0xE0($sp)
    ctx->pc = 0x31cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
    // 0x31cd0c: 0x2739e95c  addiu       $t9, $t9, -0x16A4
    ctx->pc = 0x31cd0cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294961500));
    // 0x31cd10: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31cd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x31cd14: 0x27189550  addiu       $t8, $t8, -0x6AB0
    ctx->pc = 0x31cd14u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294939984));
    // 0x31cd18: 0x2484e9bc  addiu       $a0, $a0, -0x1644
    ctx->pc = 0x31cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961596));
    // 0x31cd1c: 0x25efe968  addiu       $t7, $t7, -0x1698
    ctx->pc = 0x31cd1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961512));
    // 0x31cd20: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x31cd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x31cd24: 0x25ce9560  addiu       $t6, $t6, -0x6AA0
    ctx->pc = 0x31cd24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294940000));
    // 0x31cd28: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31cd2c: 0x25ade974  addiu       $t5, $t5, -0x168C
    ctx->pc = 0x31cd2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294961524));
    // 0x31cd30: 0x248495d0  addiu       $a0, $a0, -0x6A30
    ctx->pc = 0x31cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940112));
    // 0x31cd34: 0x258c9570  addiu       $t4, $t4, -0x6A90
    ctx->pc = 0x31cd34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294940016));
    // 0x31cd38: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x31cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
    // 0x31cd3c: 0x256be980  addiu       $t3, $t3, -0x1680
    ctx->pc = 0x31cd3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961536));
    // 0x31cd40: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x31cd44: 0x254a9580  addiu       $t2, $t2, -0x6A80
    ctx->pc = 0x31cd44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294940032));
    // 0x31cd48: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x31cd48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE92Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE92Cu, _value); } while (0); }
    // 0x31cd4c: 0x2484e9c8  addiu       $a0, $a0, -0x1638
    ctx->pc = 0x31cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961608));
    // 0x31cd50: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x31cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x31cd54: 0x2529e98c  addiu       $t1, $t1, -0x1674
    ctx->pc = 0x31cd54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961548));
    // 0x31cd58: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31cd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31cd5c: 0x25089590  addiu       $t0, $t0, -0x6A70
    ctx->pc = 0x31cd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940048));
    // 0x31cd60: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x31cd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE930u, _value); } while (0); }
    // 0x31cd64: 0x248495e0  addiu       $a0, $a0, -0x6A20
    ctx->pc = 0x31cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940128));
    // 0x31cd68: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x31cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x31cd6c: 0x24e7e998  addiu       $a3, $a3, -0x1668
    ctx->pc = 0x31cd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961560));
    // 0x31cd70: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x31cd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE934u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE934u, _value); } while (0); }
    // 0x31cd74: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x31cd78: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x31cd78u;
    { uint32_t bits = FAST_READ32(0x4E9510u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cd7c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x31cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x31cd80: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x31cd80u;
    { uint32_t bits = FAST_READ32(0x4E9514u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cd84: 0x24c695a0  addiu       $a2, $a2, -0x6A60
    ctx->pc = 0x31cd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940064));
    // 0x31cd88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31cd88u;
    { uint32_t bits = FAST_READ32(0x4E9518u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cd8c: 0x27dee9a4  addiu       $fp, $fp, -0x165C
    ctx->pc = 0x31cd8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961572));
    // 0x31cd90: 0x2484e9d4  addiu       $a0, $a0, -0x162C
    ctx->pc = 0x31cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961620));
    // 0x31cd94: 0x246395f0  addiu       $v1, $v1, -0x6A10
    ctx->pc = 0x31cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940144));
    // 0x31cd98: 0x26f7e9e0  addiu       $s7, $s7, -0x1620
    ctx->pc = 0x31cd98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961632));
    // 0x31cd9c: 0x26d6e9ec  addiu       $s6, $s6, -0x1614
    ctx->pc = 0x31cd9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961644));
    // 0x31cda0: 0xe6a20000  swc1        $f2, 0x0($s5)
    ctx->pc = 0x31cda0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE938u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE938u, _value); } while (0); }
    // 0x31cda4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x31cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x31cda8: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x31cda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE93Cu, _value); } while (0); }
    // 0x31cdac: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x31cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x31cdb0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x31cdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE940u, _value); } while (0); }
    // 0x31cdb4: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x31cdb4u;
    { uint32_t bits = FAST_READ32(0x4E9520u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cdb8: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x31cdb8u;
    { uint32_t bits = FAST_READ32(0x4E9524u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cdbc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x31cdbcu;
    { uint32_t bits = FAST_READ32(0x4E9528u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cdc0: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x31cdc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE944u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE944u, _value); } while (0); }
    // 0x31cdc4: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x31cdc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE948u, _value); } while (0); }
    // 0x31cdc8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x31cdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE94Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE94Cu, _value); } while (0); }
    // 0x31cdcc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x31cdccu;
    { uint32_t bits = FAST_READ32(0x4E9530u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cdd0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x31cdd0u;
    { uint32_t bits = FAST_READ32(0x4E9534u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cdd4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x31cdd4u;
    { uint32_t bits = FAST_READ32(0x4E9538u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cdd8: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x31cdd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE950u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE950u, _value); } while (0); }
    // 0x31cddc: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x31cddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE954u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE954u, _value); } while (0); }
    // 0x31cde0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x31cde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE958u, _value); } while (0); }
    // 0x31cde4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x31cde4u;
    { uint32_t bits = FAST_READ32(0x4E9540u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cde8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x31cde8u;
    { uint32_t bits = FAST_READ32(0x4E9544u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cdec: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31cdecu;
    { uint32_t bits = FAST_READ32(0x4E9548u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cdf0: 0xe7220000  swc1        $f2, 0x0($t9)
    ctx->pc = 0x31cdf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE95Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE95Cu, _value); } while (0); }
    // 0x31cdf4: 0xe7210004  swc1        $f1, 0x4($t9)
    ctx->pc = 0x31cdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE960u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE960u, _value); } while (0); }
    // 0x31cdf8: 0xe7200008  swc1        $f0, 0x8($t9)
    ctx->pc = 0x31cdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE964u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE964u, _value); } while (0); }
    // 0x31cdfc: 0xc7020000  lwc1        $f2, 0x0($t8)
    ctx->pc = 0x31cdfcu;
    { uint32_t bits = FAST_READ32(0x4E9550u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ce00: 0xc7010004  lwc1        $f1, 0x4($t8)
    ctx->pc = 0x31ce00u;
    { uint32_t bits = FAST_READ32(0x4E9554u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce04: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x31ce04u;
    { uint32_t bits = FAST_READ32(0x4E9558u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ce08: 0xe5e20000  swc1        $f2, 0x0($t7)
    ctx->pc = 0x31ce08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE968u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE968u, _value); } while (0); }
    // 0x31ce0c: 0xe5e10004  swc1        $f1, 0x4($t7)
    ctx->pc = 0x31ce0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE96Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE96Cu, _value); } while (0); }
    // 0x31ce10: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x31ce10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE970u, _value); } while (0); }
    // 0x31ce14: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x31ce14u;
    { uint32_t bits = FAST_READ32(0x4E9560u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ce18: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x31ce18u;
    { uint32_t bits = FAST_READ32(0x4E9564u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce1c: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x31ce1cu;
    { uint32_t bits = FAST_READ32(0x4E9568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ce20: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x31ce20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE974u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE974u, _value); } while (0); }
    // 0x31ce24: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x31ce24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE978u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE978u, _value); } while (0); }
    // 0x31ce28: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x31ce28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE97Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE97Cu, _value); } while (0); }
    // 0x31ce2c: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x31ce2cu;
    { uint32_t bits = FAST_READ32(0x4E9570u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ce30: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x31ce30u;
    { uint32_t bits = FAST_READ32(0x4E9574u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce34: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x31ce34u;
    { uint32_t bits = FAST_READ32(0x4E9578u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ce38: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x31ce38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE980u, _value); } while (0); }
    // 0x31ce3c: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x31ce3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE984u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE984u, _value); } while (0); }
    // 0x31ce40: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x31ce40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE988u, _value); } while (0); }
    // 0x31ce44: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x31ce44u;
    { uint32_t bits = FAST_READ32(0x4E9580u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ce48: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x31ce48u;
    { uint32_t bits = FAST_READ32(0x4E9584u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce4c: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x31ce4cu;
    { uint32_t bits = FAST_READ32(0x4E9588u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ce50: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x31ce50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE98Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE98Cu, _value); } while (0); }
    // 0x31ce54: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x31ce54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE990u, _value); } while (0); }
    // 0x31ce58: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x31ce58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE994u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE994u, _value); } while (0); }
    // 0x31ce5c: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x31ce5cu;
    { uint32_t bits = FAST_READ32(0x4E9590u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ce60: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x31ce60u;
    { uint32_t bits = FAST_READ32(0x4E9594u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce64: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x31ce64u;
    { uint32_t bits = FAST_READ32(0x4E9598u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ce68: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x31ce68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE998u, _value); } while (0); }
    // 0x31ce6c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x31ce6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE99Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE99Cu, _value); } while (0); }
    // 0x31ce70: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x31ce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9A0u, _value); } while (0); }
    // 0x31ce74: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x31ce74u;
    { uint32_t bits = FAST_READ32(0x4E95A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ce78: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x31ce78u;
    { uint32_t bits = FAST_READ32(0x4E95A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce7c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x31ce7cu;
    { uint32_t bits = FAST_READ32(0x4E95A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ce80: 0xe7c20000  swc1        $f2, 0x0($fp)
    ctx->pc = 0x31ce80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9A4u, _value); } while (0); }
    // 0x31ce84: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x31ce84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9A8u, _value); } while (0); }
    // 0x31ce88: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x31ce88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9ACu, _value); } while (0); }
    // 0x31ce8c: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x31ce8cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31ce90: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x31ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ce94: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x31ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ce98: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x31ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ce9c: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x31ce9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31cea0: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x31cea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x31cea4: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x31cea4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31cea8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x31cea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x31ceac: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x31ceacu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31ceb0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x31ceb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x31ceb4: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x31ceb4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31ceb8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x31ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cebc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x31cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cec0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x31cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cec4: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x31cec4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31cec8: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x31cec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x31cecc: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x31ceccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31ced0: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x31ced0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x31ced4: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x31ced4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31ced8: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x31ced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x31cedc: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x31cedcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31cee0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x31cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cee4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x31cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cee8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x31cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ceec: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x31ceecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31cef0: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x31cef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x31cef4: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x31cef4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31cef8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x31cef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x31cefc: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x31cefcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31cf00: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x31cf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x31cf04: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x31cf04u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31cf08: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x31cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cf0c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x31cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cf10: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x31cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cf14: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x31cf14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9D4u, _value); } while (0); }
    // 0x31cf18: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x31cf18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9D8u, _value); } while (0); }
    // 0x31cf1c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x31cf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9DCu, _value); } while (0); }
    // 0x31cf20: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x31cf20u;
    { uint32_t bits = FAST_READ32(0x4E95F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cf24: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31cf24u;
    { uint32_t bits = FAST_READ32(0x4E95F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cf28: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x31cf28u;
    { uint32_t bits = FAST_READ32(0x4E95F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cf2c: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x31cf2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9E0u, _value); } while (0); }
    // 0x31cf30: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x31cf30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9E4u, _value); } while (0); }
    // 0x31cf34: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x31cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9E8u, _value); } while (0); }
    // 0x31cf38: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x31cf38u;
    { uint32_t bits = FAST_READ32(0x4E9600u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cf3c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x31cf3cu;
    { uint32_t bits = FAST_READ32(0x4E9604u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cf40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31cf40u;
    { uint32_t bits = FAST_READ32(0x4E9608u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cf44: 0xe6c20000  swc1        $f2, 0x0($s6)
    ctx->pc = 0x31cf44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9ECu, _value); } while (0); }
    // 0x31cf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cf4c: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x31cf4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9F0u, _value); } while (0); }
    // 0x31cf50: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x31cf50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8EE9F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE9F4u, _value); } while (0); }
    // 0x31cf54: 0xa3828b40  sb          $v0, -0x74C0($gp)
    ctx->pc = 0x31cf54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937408), (uint8_t)GPR_U32(ctx, 2));
label_31cf58:
    // 0x31cf58: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x31cf58u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31cf5c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x31cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x31cf60: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x31cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31cf64: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x31cf64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x31cf68: 0x2442e920  addiu       $v0, $v0, -0x16E0
    ctx->pc = 0x31cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961440));
    // 0x31cf6c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x31cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x31cf70: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x31cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x31cf74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31cf78: 0xc040250  jal         func_100940
    ctx->pc = 0x31CF78u;
    SET_GPR_U32(ctx, 31, 0x31CF80u);
    ctx->pc = 0x31CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF78u;
    // 0x31cf7c: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x31CF78u, 0x31CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF80u;
label_31cf80:
    // 0x31cf80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31cf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf84: 0x14a0ff2a  bnez        $a1, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x31CF84u;
    {
        const bool branch_taken_0x31cf84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cf84) {
            ctx->pc = 0x31CC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cc30;
        }
    }
    ctx->pc = 0x31CF8Cu;
    // 0x31cf8c: 0x0  nop
    ctx->pc = 0x31cf8cu;
    // NOP
label_31cf90:
    // 0x31cf90: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x31cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31cf94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31cf98: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x31cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x31cf9c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x31cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31cfa0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31cfa4: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x31cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x31cfa8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x31cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31cfac: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x31cfacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x31cfb0: 0x1460ff13  bnez        $v1, . + 4 + (-0xED << 2)
    ctx->pc = 0x31CFB0u;
    {
        const bool branch_taken_0x31cfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cfb0) {
            ctx->pc = 0x31CC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cc00;
        }
    }
    ctx->pc = 0x31CFB8u;
    // 0x31cfb8: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x31cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x31cfbc: 0x8c710140  lw          $s1, 0x140($v1)
    ctx->pc = 0x31cfbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x31cfc0: 0x122000cb  beqz        $s1, . + 4 + (0xCB << 2)
    ctx->pc = 0x31CFC0u;
    {
        const bool branch_taken_0x31cfc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFC0u;
        // 0x31cfc4: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cfc0) {
            ctx->pc = 0x31D2F0u;
            goto label_31d2f0;
        }
    }
    ctx->pc = 0x31CFC8u;
    // 0x31cfc8: 0x27b40150  addiu       $s4, $sp, 0x150
    ctx->pc = 0x31cfc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x31cfcc: 0xc422f8d0  lwc1        $f2, -0x730($at)
    ctx->pc = 0x31cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31cfd0: 0x82250003  lb          $a1, 0x3($s1)
    ctx->pc = 0x31cfd0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x31cfd4: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x31cfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31cfd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31cfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfdc: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x31cfdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfe0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x31cfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x31cfe4: 0xc421f8d4  lwc1        $f1, -0x72C($at)
    ctx->pc = 0x31cfe4u;
    { uint32_t bits = FAST_READ32(0x90F8D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cfe8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31cfe8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31cfec: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x31cfecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x31cff0: 0xc420f8d8  lwc1        $f0, -0x728($at)
    ctx->pc = 0x31cff0u;
    { uint32_t bits = FAST_READ32(0x90F8D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cff4: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x31cff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31cff8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31cff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31cffc: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x31cffcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
    // 0x31d000: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x31d000u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x31d004: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d008: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x31d008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31d00c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x31d00cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31d010: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x31d010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x31d014: 0x9643c  dsll32      $t4, $t1, 16
    ctx->pc = 0x31d014u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 16));
    // 0x31d018: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x31d018u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x31d01c: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x31d01cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
label_31d020:
    // 0x31d020: 0x84c90000  lh          $t1, 0x0($a2)
    ctx->pc = 0x31d020u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31d024: 0x84ca0002  lh          $t2, 0x2($a2)
    ctx->pc = 0x31d024u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x31d028: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x31d028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31d02c: 0x84cb0004  lh          $t3, 0x4($a2)
    ctx->pc = 0x31d02cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31d030: 0x1094823  subu        $t1, $t0, $t1
    ctx->pc = 0x31d030u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x31d034: 0x1294818  mult        $t1, $t1, $t1
    ctx->pc = 0x31d034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x31d038: 0xea5023  subu        $t2, $a3, $t2
    ctx->pc = 0x31d038u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x31d03c: 0x714a5018  mult1       $t2, $t2, $t2
    ctx->pc = 0x31d03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x31d040: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x31d040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x31d044: 0x18b4823  subu        $t1, $t4, $t3
    ctx->pc = 0x31d044u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x31d048: 0x71294801  maddu       $t1, $t1, $t1
    ctx->pc = 0x31d048u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 9) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x31d04c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x31d04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x31d050: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x31d050u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
    // 0x31d054: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x31d054u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x31d058: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x31d058u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x31d05c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x31d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x31d060: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31d060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31d064: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31D064u;
    {
        const bool branch_taken_0x31d064 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D064u;
        // 0x31d068: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d064) {
            ctx->pc = 0x31D020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d020;
        }
    }
    ctx->pc = 0x31D06Cu;
    // 0x31d06c: 0x82240003  lb          $a0, 0x3($s1)
    ctx->pc = 0x31d06cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x31d070: 0x3c05aaaa  lui         $a1, 0xAAAA
    ctx->pc = 0x31d070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43690 << 16));
    // 0x31d074: 0x34a5aaab  ori         $a1, $a1, 0xAAAB
    ctx->pc = 0x31d074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43691);
    // 0x31d078: 0xa40019  multu       $a1, $a0
    ctx->pc = 0x31d078u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31d07c: 0x0  nop
    ctx->pc = 0x31d07cu;
    // NOP
    // 0x31d080: 0x0  nop
    ctx->pc = 0x31d080u;
    // NOP
    // 0x31d084: 0x2810  mfhi        $a1
    ctx->pc = 0x31d084u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x31d088: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x31d088u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x31d08c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x31D08Cu;
    {
        const bool branch_taken_0x31d08c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D08Cu;
        // 0x31d090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d08c) {
            ctx->pc = 0x31D0B8u;
            goto label_31d0b8;
        }
    }
    ctx->pc = 0x31D094u;
    // 0x31d094: 0x0  nop
    ctx->pc = 0x31d094u;
    // NOP
label_31d098:
    // 0x31d098: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x31d098u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31d09c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x31d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31d0a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31d0a4: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x31d0a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31d0a8: 0x0  nop
    ctx->pc = 0x31d0a8u;
    // NOP
    // 0x31d0ac: 0x1020fffa  beqz        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31D0ACu;
    {
        const bool branch_taken_0x31d0ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d0ac) {
            ctx->pc = 0x31D098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d098;
        }
    }
    ctx->pc = 0x31D0B4u;
    // 0x31d0b4: 0x0  nop
    ctx->pc = 0x31d0b4u;
    // NOP
label_31d0b8:
    // 0x31d0b8: 0x1860002f  blez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x31D0B8u;
    {
        const bool branch_taken_0x31d0b8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x31D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0B8u;
        // 0x31d0bc: 0x3c055555  lui         $a1, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0b8) {
            ctx->pc = 0x31D178u;
            goto label_31d178;
        }
    }
    ctx->pc = 0x31D0C0u;
    // 0x31d0c0: 0x34a65556  ori         $a2, $a1, 0x5556
    ctx->pc = 0x31d0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x31d0c4: 0x0  nop
    ctx->pc = 0x31d0c4u;
    // NOP
label_31d0c8:
    // 0x31d0c8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x31d0c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31d0cc: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x31D0CCu;
    {
        const bool branch_taken_0x31d0cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0CCu;
        // 0x31d0d0: 0x60682d  daddu       $t5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0cc) {
            ctx->pc = 0x31D158u;
            goto label_31d158;
        }
    }
    ctx->pc = 0x31D0D4u;
    // 0x31d0d4: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x31d0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31d0d8: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x31d0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31d0dc: 0xfd2821  addu        $a1, $a3, $sp
    ctx->pc = 0x31d0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31d0e0: 0x24aa0150  addiu       $t2, $a1, 0x150
    ctx->pc = 0x31d0e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    // 0x31d0e4: 0x0  nop
    ctx->pc = 0x31d0e4u;
    // NOP
label_31d0e8:
    // 0x31d0e8: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x31d0e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x31d0ec: 0xd2880  sll         $a1, $t5, 2
    ctx->pc = 0x31d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x31d0f0: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x31d0f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d0f4: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x31d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x31d0f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31D0F8u;
    {
        const bool branch_taken_0x31d0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0F8u;
        // 0x31d0fc: 0x24a80150  addiu       $t0, $a1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0f8) {
            ctx->pc = 0x31D110u;
            goto label_31d110;
        }
    }
    ctx->pc = 0x31D100u;
label_31d100:
    // 0x31d100: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x31d100u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x31d104: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x31d104u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x31d108: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x31d108u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x31d10c: 0x0  nop
    ctx->pc = 0x31d10cu;
    // NOP
label_31d110:
    // 0x31d110: 0x12b082b  sltu        $at, $t1, $t3
    ctx->pc = 0x31d110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x31d114: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x31D114u;
    {
        const bool branch_taken_0x31d114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D114u;
        // 0x31d118: 0x1632823  subu        $a1, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d114) {
            ctx->pc = 0x31D138u;
            goto label_31d138;
        }
    }
    ctx->pc = 0x31D11Cu;
    // 0x31d11c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x31d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31d120: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x31d120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x31d124: 0x8ca50150  lw          $a1, 0x150($a1)
    ctx->pc = 0x31d124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x31d128: 0xac082b  sltu        $at, $a1, $t4
    ctx->pc = 0x31d128u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x31d12c: 0x1020fff4  beqz        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x31D12Cu;
    {
        const bool branch_taken_0x31d12c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d12c) {
            ctx->pc = 0x31D100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d100;
        }
    }
    ctx->pc = 0x31D134u;
    // 0x31d134: 0x0  nop
    ctx->pc = 0x31d134u;
    // NOP
label_31d138:
    // 0x31d138: 0xb2880  sll         $a1, $t3, 2
    ctx->pc = 0x31d138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x31d13c: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x31d13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x31d140: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x31d140u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x31d144: 0xacac0150  sw          $t4, 0x150($a1)
    ctx->pc = 0x31d144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 336), GPR_U32(ctx, 12));
    // 0x31d148: 0x1a4282b  sltu        $a1, $t5, $a0
    ctx->pc = 0x31d148u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31d14c: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x31D14Cu;
    {
        const bool branch_taken_0x31d14c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D14Cu;
        // 0x31d150: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d14c) {
            ctx->pc = 0x31D0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d0e8;
        }
    }
    ctx->pc = 0x31D154u;
    // 0x31d154: 0x0  nop
    ctx->pc = 0x31d154u;
    // NOP
label_31d158:
    // 0x31d158: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31d15c: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x31d15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31d160: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x31d160u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x31d164: 0x0  nop
    ctx->pc = 0x31d164u;
    // NOP
    // 0x31d168: 0x1810  mfhi        $v1
    ctx->pc = 0x31d168u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31d16c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31d170: 0x1c60ffd5  bgtz        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x31D170u;
    {
        const bool branch_taken_0x31d170 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x31d170) {
            ctx->pc = 0x31D0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d0c8;
        }
    }
    ctx->pc = 0x31D178u;
label_31d178:
    // 0x31d178: 0x82350002  lb          $s5, 0x2($s1)
    ctx->pc = 0x31d178u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x31d17c: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x31d17cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x31d180: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x31D180u;
    {
        const bool branch_taken_0x31d180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D180u;
        // 0x31d184: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d180) {
            ctx->pc = 0x31D268u;
            goto label_31d268;
        }
    }
    ctx->pc = 0x31D188u;
    // 0x31d188: 0x27b30144  addiu       $s3, $sp, 0x144
    ctx->pc = 0x31d188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x31d18c: 0x27b20148  addiu       $s2, $sp, 0x148
    ctx->pc = 0x31d18cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_31d190:
    // 0x31d190: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x31d190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x31d194: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x31d194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x31d198: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x31d198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31d19c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31d1a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31d1a4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x31d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x31d1a8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x31d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x31d1ac: 0x8063000a  lb          $v1, 0xA($v1)
    ctx->pc = 0x31d1acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x31d1b0: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x31D1B0u;
    {
        const bool branch_taken_0x31d1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d1b0) {
            ctx->pc = 0x31D258u;
            goto label_31d258;
        }
    }
    ctx->pc = 0x31D1B8u;
    // 0x31d1b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d1bc: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x31d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x31d1c0: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x31d1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x31d1c4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31D1C4u;
    {
        const bool branch_taken_0x31d1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1C4u;
        // 0x31d1c8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1c4) {
            ctx->pc = 0x31D1E8u;
            goto label_31d1e8;
        }
    }
    ctx->pc = 0x31D1CCu;
label_31d1cc:
    // 0x31d1cc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31d1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d1d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31d1d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31d1d8: 0x0  nop
    ctx->pc = 0x31d1d8u;
    // NOP
    // 0x31d1dc: 0x0  nop
    ctx->pc = 0x31d1dcu;
    // NOP
    // 0x31d1e0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31D1E0u;
    {
        const bool branch_taken_0x31d1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d1e0) {
            ctx->pc = 0x31D1CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d1cc;
        }
    }
    ctx->pc = 0x31D1E8u;
label_31d1e8:
    // 0x31d1e8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x31d1e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31d1ec: 0x3c02c0de  lui         $v0, 0xC0DE
    ctx->pc = 0x31d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49374 << 16));
    // 0x31d1f0: 0x3442c0c0  ori         $v0, $v0, 0xC0C0
    ctx->pc = 0x31d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49344);
    // 0x31d1f4: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31d1f8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x31d1f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x31d1fc: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x31d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x31d200: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x31d200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x31d204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31d204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d20c: 0x0  nop
    ctx->pc = 0x31d20cu;
    // NOP
    // 0x31d210: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31d210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31d214: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x31d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x31d218: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x31d218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x31d21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d220: 0x0  nop
    ctx->pc = 0x31d220u;
    // NOP
    // 0x31d224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31d224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31d228: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x31d228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x31d22c: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x31d22cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31d230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d234: 0x0  nop
    ctx->pc = 0x31d234u;
    // NOP
    // 0x31d238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31d238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31d23c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x31d23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x31d240: 0x94a3000a  lhu         $v1, 0xA($a1)
    ctx->pc = 0x31d240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x31d244: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x31d244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31d248: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x31d248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x31d24c: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x31D24Cu;
    SET_GPR_U32(ctx, 31, 0x31D254u);
    ctx->pc = 0x31D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D24Cu;
    // 0x31d250: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x31D24Cu, 0x31D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D254u;
label_31d254:
    // 0x31d254: 0x0  nop
    ctx->pc = 0x31d254u;
    // NOP
label_31d258:
    // 0x31d258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31d258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31d25c: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x31d25cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x31d260: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x31D260u;
    {
        const bool branch_taken_0x31d260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D260u;
        // 0x31d264: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d260) {
            ctx->pc = 0x31D190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d190;
        }
    }
    ctx->pc = 0x31D268u;
label_31d268:
    // 0x31d268: 0x82320003  lb          $s2, 0x3($s1)
    ctx->pc = 0x31d268u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x31d26c: 0x212082a  slt         $at, $s0, $s2
    ctx->pc = 0x31d26cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x31d270: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x31D270u;
    {
        const bool branch_taken_0x31d270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D270u;
        // 0x31d274: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d270) {
            ctx->pc = 0x31D2F0u;
            goto label_31d2f0;
        }
    }
    ctx->pc = 0x31D278u;
    // 0x31d278: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x31d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x31d27c: 0x24730150  addiu       $s3, $v1, 0x150
    ctx->pc = 0x31d27cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
label_31d280:
    // 0x31d280: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x31d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31d284: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x31d284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x31d288: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x31d288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31d28c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31d290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31d290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31d294: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x31d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x31d298: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x31d298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x31d29c: 0x8063000a  lb          $v1, 0xA($v1)
    ctx->pc = 0x31d29cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x31d2a0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x31D2A0u;
    {
        const bool branch_taken_0x31d2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d2a0) {
            ctx->pc = 0x31D2E0u;
            goto label_31d2e0;
        }
    }
    ctx->pc = 0x31D2A8u;
    // 0x31d2a8: 0x3c02c0de  lui         $v0, 0xC0DE
    ctx->pc = 0x31d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49374 << 16));
    // 0x31d2ac: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x31d2acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d2b0: 0x3442c0c0  ori         $v0, $v0, 0xC0C0
    ctx->pc = 0x31d2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49344);
    // 0x31d2b4: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x31d2b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x31d2b8: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x31d2b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x31d2bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x31d2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31d2c0: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x31d2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31d2c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x31d2c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x31d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x31d2cc: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31d2d0: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x31d2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31d2d4: 0xc0c9a00  jal         func_326800
    ctx->pc = 0x31D2D4u;
    SET_GPR_U32(ctx, 31, 0x31D2DCu);
    ctx->pc = 0x31D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D2D4u;
    // 0x31d2d8: 0x24844aa0  addiu       $a0, $a0, 0x4AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326800u, 0x31D2D4u, 0x31D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D2DCu;
label_31d2dc:
    // 0x31d2dc: 0x0  nop
    ctx->pc = 0x31d2dcu;
    // NOP
label_31d2e0:
    // 0x31d2e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31d2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31d2e4: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x31d2e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x31d2e8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x31D2E8u;
    {
        const bool branch_taken_0x31d2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2E8u;
        // 0x31d2ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d2e8) {
            ctx->pc = 0x31D280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d280;
        }
    }
    ctx->pc = 0x31D2F0u;
label_31d2f0:
    // 0x31d2f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31d2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d2f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31d2f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d2f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31d2f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d2fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31d2fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31d300: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31d300u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d304: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31d304u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d308: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d30c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d30cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d318: 0x3e00008  jr          $ra
    ctx->pc = 0x31D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D318u;
        // 0x31d31c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D320u;
}
