#include <cstdio>
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

// Function: sub_003A91F0
// Address: 0x3a91f0 - 0x3a9380
void sub_003A91F0_0x3a91f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A91F0_0x3a91f0");
#endif

    switch (ctx->pc) {
        case 0x3a9370u: goto label_3a9370;
        default: break;
    }

    ctx->pc = 0x3a91f0u;

    // 0x3a91f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a91f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a91f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a91f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a91f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a91f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a91fc: 0x83828c74  lb          $v0, -0x738C($gp)
    ctx->pc = 0x3a91fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937716)));
    // 0x3a9200: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3A9200u;
    {
        const bool branch_taken_0x3a9200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9200u;
        // 0x3a9204: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9200) {
            ctx->pc = 0x3A9350u;
            goto label_3a9350;
        }
    }
    ctx->pc = 0x3A9208u;
    // 0x3a9208: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x3a9208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x3a920c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x3a920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x3a9210: 0x3c190066  lui         $t9, 0x66
    ctx->pc = 0x3a9210u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)102 << 16));
    // 0x3a9214: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3a9214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9218: 0x3c180093  lui         $t8, 0x93
    ctx->pc = 0x3a9218u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)147 << 16));
    // 0x3a921c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3a921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a9220: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x3a9220u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x3a9224: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a9224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9228: 0x2610fd00  addiu       $s0, $s0, -0x300
    ctx->pc = 0x3a9228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966528));
    // 0x3a922c: 0x3c0e0093  lui         $t6, 0x93
    ctx->pc = 0x3a922cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)147 << 16));
    // 0x3a9230: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x3a9230u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x3a9234: 0x3c0c0093  lui         $t4, 0x93
    ctx->pc = 0x3a9234u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)147 << 16));
    // 0x3a9238: 0x3c0b0066  lui         $t3, 0x66
    ctx->pc = 0x3a9238u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)102 << 16));
    // 0x3a923c: 0x3c0a0093  lui         $t2, 0x93
    ctx->pc = 0x3a923cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)147 << 16));
    // 0x3a9240: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x3a9240u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
    // 0x3a9244: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x3a9244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x3a9248: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3a9248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3a924c: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x3a924cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x3a9250: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3a9250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3a9254: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x3a9254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD00u, _value); } while (0); }
    // 0x3a9258: 0x2739dc58  addiu       $t9, $t9, -0x23A8
    ctx->pc = 0x3a9258u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294958168));
    // 0x3a925c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x3a925cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD04u, _value); } while (0); }
    // 0x3a9260: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a9260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a9264: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3a9264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD08u, _value); } while (0); }
    // 0x3a9268: 0x2718fd0c  addiu       $t8, $t8, -0x2F4
    ctx->pc = 0x3a9268u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294966540));
    // 0x3a926c: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x3a926cu;
    { uint32_t bits = FAST_READ32(0x65DC58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9270: 0x25efdc68  addiu       $t7, $t7, -0x2398
    ctx->pc = 0x3a9270u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294958184));
    // 0x3a9274: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x3a9274u;
    { uint32_t bits = FAST_READ32(0x65DC5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a9278: 0x25cefd18  addiu       $t6, $t6, -0x2E8
    ctx->pc = 0x3a9278u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966552));
    // 0x3a927c: 0xc7200008  lwc1        $f0, 0x8($t9)
    ctx->pc = 0x3a927cu;
    { uint32_t bits = FAST_READ32(0x65DC60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9280: 0x25addc78  addiu       $t5, $t5, -0x2388
    ctx->pc = 0x3a9280u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294958200));
    // 0x3a9284: 0x258cfd24  addiu       $t4, $t4, -0x2DC
    ctx->pc = 0x3a9284u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966564));
    // 0x3a9288: 0x256bdc88  addiu       $t3, $t3, -0x2378
    ctx->pc = 0x3a9288u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958216));
    // 0x3a928c: 0x254afd30  addiu       $t2, $t2, -0x2D0
    ctx->pc = 0x3a928cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966576));
    // 0x3a9290: 0x2529dc98  addiu       $t1, $t1, -0x2368
    ctx->pc = 0x3a9290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958232));
    // 0x3a9294: 0x2508fd3c  addiu       $t0, $t0, -0x2C4
    ctx->pc = 0x3a9294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966588));
    // 0x3a9298: 0x24e7dca8  addiu       $a3, $a3, -0x2358
    ctx->pc = 0x3a9298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958248));
    // 0x3a929c: 0x24c6fd48  addiu       $a2, $a2, -0x2B8
    ctx->pc = 0x3a929cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966600));
    // 0x3a92a0: 0x24a5dcb8  addiu       $a1, $a1, -0x2348
    ctx->pc = 0x3a92a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958264));
    // 0x3a92a4: 0x2463fd54  addiu       $v1, $v1, -0x2AC
    ctx->pc = 0x3a92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966612));
    // 0x3a92a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a92ac: 0xe7020000  swc1        $f2, 0x0($t8)
    ctx->pc = 0x3a92acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD0Cu, _value); } while (0); }
    // 0x3a92b0: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x3a92b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD10u, _value); } while (0); }
    // 0x3a92b4: 0xe7000008  swc1        $f0, 0x8($t8)
    ctx->pc = 0x3a92b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD14u, _value); } while (0); }
    // 0x3a92b8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x3a92b8u;
    { uint32_t bits = FAST_READ32(0x65DC68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a92bc: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x3a92bcu;
    { uint32_t bits = FAST_READ32(0x65DC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a92c0: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x3a92c0u;
    { uint32_t bits = FAST_READ32(0x65DC70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a92c4: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x3a92c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD18u, _value); } while (0); }
    // 0x3a92c8: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x3a92c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD1Cu, _value); } while (0); }
    // 0x3a92cc: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x3a92ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD20u, _value); } while (0); }
    // 0x3a92d0: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x3a92d0u;
    { uint32_t bits = FAST_READ32(0x65DC78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a92d4: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x3a92d4u;
    { uint32_t bits = FAST_READ32(0x65DC7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a92d8: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x3a92d8u;
    { uint32_t bits = FAST_READ32(0x65DC80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a92dc: 0xe5820000  swc1        $f2, 0x0($t4)
    ctx->pc = 0x3a92dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD24u, _value); } while (0); }
    // 0x3a92e0: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x3a92e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD28u, _value); } while (0); }
    // 0x3a92e4: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x3a92e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD2Cu, _value); } while (0); }
    // 0x3a92e8: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x3a92e8u;
    { uint32_t bits = FAST_READ32(0x65DC88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a92ec: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x3a92ecu;
    { uint32_t bits = FAST_READ32(0x65DC8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a92f0: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x3a92f0u;
    { uint32_t bits = FAST_READ32(0x65DC90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a92f4: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x3a92f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD30u, _value); } while (0); }
    // 0x3a92f8: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x3a92f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD34u, _value); } while (0); }
    // 0x3a92fc: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x3a92fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD38u, _value); } while (0); }
    // 0x3a9300: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x3a9300u;
    { uint32_t bits = FAST_READ32(0x65DC98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9304: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x3a9304u;
    { uint32_t bits = FAST_READ32(0x65DC9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a9308: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x3a9308u;
    { uint32_t bits = FAST_READ32(0x65DCA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a930c: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x3a930cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD3Cu, _value); } while (0); }
    // 0x3a9310: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x3a9310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD40u, _value); } while (0); }
    // 0x3a9314: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x3a9314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD44u, _value); } while (0); }
    // 0x3a9318: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x3a9318u;
    { uint32_t bits = FAST_READ32(0x65DCA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a931c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3a931cu;
    { uint32_t bits = FAST_READ32(0x65DCACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a9320: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3a9320u;
    { uint32_t bits = FAST_READ32(0x65DCB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9324: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x3a9324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD48u, _value); } while (0); }
    // 0x3a9328: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x3a9328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD4Cu, _value); } while (0); }
    // 0x3a932c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x3a932cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD50u, _value); } while (0); }
    // 0x3a9330: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3a9330u;
    { uint32_t bits = FAST_READ32(0x65DCB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9334: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3a9334u;
    { uint32_t bits = FAST_READ32(0x65DCBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a9338: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3a9338u;
    { uint32_t bits = FAST_READ32(0x65DCC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a933c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3a933cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD54u, _value); } while (0); }
    // 0x3a9340: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3a9340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD58u, _value); } while (0); }
    // 0x3a9344: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3a9344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FD5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD5Cu, _value); } while (0); }
    // 0x3a9348: 0xa3828c74  sb          $v0, -0x738C($gp)
    ctx->pc = 0x3a9348u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937716), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a934c: 0x0  nop
    ctx->pc = 0x3a934cu;
    // NOP
label_3a9350:
    { static uint64_t last[2]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[2]={(uint64_t)(READ16(0x923354u)),(uint64_t)(READ32(0x923340u)),}; bool chg=first; for(int i=0;i<2;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<40) { ++lines; first=false; for(int i=0;i<2;++i) last[i]=cur[i]; fprintf(stderr,"[px mcui] hit=%u " "idx=%llu b0=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1]); } }
    // 0x3a9350: 0x84850014  lh          $a1, 0x14($a0)
    ctx->pc = 0x3a9350u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3a9354: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3a9354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3a9358: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x3a9358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
    // 0x3a935c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3a935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3a9360: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a9360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a9364: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a9364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a9368: 0xc040250  jal         func_100940
    ctx->pc = 0x3A9368u;
    SET_GPR_U32(ctx, 31, 0x3A9370u);
    ctx->pc = 0x3A936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9368u;
    // 0x3a936c: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x3A9368u, 0x3A9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9370u;
label_3a9370:
    // 0x3a9370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a9370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a9374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9378: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9378u;
        // 0x3a937c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9380u;
}
