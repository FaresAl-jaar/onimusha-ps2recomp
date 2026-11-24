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

// Function: sub_0032C050
// Address: 0x32c050 - 0x32c214
void sub_0032C050_0x32c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C050_0x32c050");
#endif

    switch (ctx->pc) {
        case 0x32c1ecu: goto label_32c1ec;
        case 0x32c200u: goto label_32c200;
        default: break;
    }

    ctx->pc = 0x32c050u;

    // 0x32c050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32c054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32c058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c05c: 0x83828b80  lb          $v0, -0x7480($gp)
    ctx->pc = 0x32c05cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937472)));
    // 0x32c060: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x32C060u;
    {
        const bool branch_taken_0x32c060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C060u;
        // 0x32c064: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c060) {
            ctx->pc = 0x32C180u;
            goto label_32c180;
        }
    }
    ctx->pc = 0x32C068u;
    // 0x32c068: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32c068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x32c06c: 0x3c0f0091  lui         $t7, 0x91
    ctx->pc = 0x32c06cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)145 << 16));
    // 0x32c070: 0x24639948  addiu       $v1, $v1, -0x66B8
    ctx->pc = 0x32c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941000));
    // 0x32c074: 0x3c0e004f  lui         $t6, 0x4F
    ctx->pc = 0x32c074u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)79 << 16));
    // 0x32c078: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x32c078u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E9948u));
    // 0x32c07c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x32c07cu;
    { uint32_t bits = FAST_READ32(0x4E9950u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c080: 0x25ef1210  addiu       $t7, $t7, 0x1210
    ctx->pc = 0x32c080u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4624));
    // 0x32c084: 0x3c0d0091  lui         $t5, 0x91
    ctx->pc = 0x32c084u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)145 << 16));
    // 0x32c088: 0x3c0c004f  lui         $t4, 0x4F
    ctx->pc = 0x32c088u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)79 << 16));
    // 0x32c08c: 0x3c0b0091  lui         $t3, 0x91
    ctx->pc = 0x32c08cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)145 << 16));
    // 0x32c090: 0x3c0a004f  lui         $t2, 0x4F
    ctx->pc = 0x32c090u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)79 << 16));
    // 0x32c094: 0x3c090091  lui         $t1, 0x91
    ctx->pc = 0x32c094u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)145 << 16));
    // 0x32c098: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x32c098u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x32c09c: 0x3c070091  lui         $a3, 0x91
    ctx->pc = 0x32c09cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)145 << 16));
    // 0x32c0a0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x32c0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x32c0a4: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x32c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x32c0a8: 0xfde20000  sd          $v0, 0x0($t7)
    ctx->pc = 0x32c0a8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x911210u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x911210u, _value); } while (0);
    // 0x32c0ac: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x32c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x32c0b0: 0x25ce9958  addiu       $t6, $t6, -0x66A8
    ctx->pc = 0x32c0b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941016));
    // 0x32c0b4: 0x3c030091  lui         $v1, 0x91
    ctx->pc = 0x32c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)145 << 16));
    // 0x32c0b8: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x32c0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911218u, _value); } while (0); }
    // 0x32c0bc: 0x25ad121c  addiu       $t5, $t5, 0x121C
    ctx->pc = 0x32c0bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4636));
    // 0x32c0c0: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x32c0c0u;
    { uint32_t bits = FAST_READ32(0x4E9958u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32c0c4: 0x258c9968  addiu       $t4, $t4, -0x6698
    ctx->pc = 0x32c0c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294941032));
    // 0x32c0c8: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x32c0c8u;
    { uint32_t bits = FAST_READ32(0x4E995Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32c0cc: 0x256b1228  addiu       $t3, $t3, 0x1228
    ctx->pc = 0x32c0ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4648));
    // 0x32c0d0: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x32c0d0u;
    { uint32_t bits = FAST_READ32(0x4E9960u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c0d4: 0x254a9978  addiu       $t2, $t2, -0x6688
    ctx->pc = 0x32c0d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941048));
    // 0x32c0d8: 0x25291234  addiu       $t1, $t1, 0x1234
    ctx->pc = 0x32c0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4660));
    // 0x32c0dc: 0x25089988  addiu       $t0, $t0, -0x6678
    ctx->pc = 0x32c0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941064));
    // 0x32c0e0: 0x24e71240  addiu       $a3, $a3, 0x1240
    ctx->pc = 0x32c0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4672));
    // 0x32c0e4: 0x24c69998  addiu       $a2, $a2, -0x6668
    ctx->pc = 0x32c0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941080));
    // 0x32c0e8: 0x24a5124c  addiu       $a1, $a1, 0x124C
    ctx->pc = 0x32c0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4684));
    // 0x32c0ec: 0x248499a8  addiu       $a0, $a0, -0x6658
    ctx->pc = 0x32c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941096));
    // 0x32c0f0: 0x24631258  addiu       $v1, $v1, 0x1258
    ctx->pc = 0x32c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4696));
    // 0x32c0f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c0f8: 0xe5a20000  swc1        $f2, 0x0($t5)
    ctx->pc = 0x32c0f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91121Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91121Cu, _value); } while (0); }
    // 0x32c0fc: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x32c0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911220u, _value); } while (0); }
    // 0x32c100: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x32c100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911224u, _value); } while (0); }
    // 0x32c104: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x32c104u;
    { uint32_t bits = FAST_READ32(0x4E9968u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32c108: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x32c108u;
    { uint32_t bits = FAST_READ32(0x4E996Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32c10c: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x32c10cu;
    { uint32_t bits = FAST_READ32(0x4E9970u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c110: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x32c110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911228u, _value); } while (0); }
    // 0x32c114: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x32c114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91122Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91122Cu, _value); } while (0); }
    // 0x32c118: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x32c118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911230u, _value); } while (0); }
    // 0x32c11c: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x32c11cu;
    { uint32_t bits = FAST_READ32(0x4E9978u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32c120: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x32c120u;
    { uint32_t bits = FAST_READ32(0x4E997Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32c124: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x32c124u;
    { uint32_t bits = FAST_READ32(0x4E9980u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c128: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x32c128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911234u, _value); } while (0); }
    // 0x32c12c: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x32c12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911238u, _value); } while (0); }
    // 0x32c130: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x32c130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91123Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91123Cu, _value); } while (0); }
    // 0x32c134: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x32c134u;
    { uint32_t bits = FAST_READ32(0x4E9988u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32c138: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x32c138u;
    { uint32_t bits = FAST_READ32(0x4E998Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32c13c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x32c13cu;
    { uint32_t bits = FAST_READ32(0x4E9990u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c140: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x32c140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911240u, _value); } while (0); }
    // 0x32c144: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x32c144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911244u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911244u, _value); } while (0); }
    // 0x32c148: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x32c148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911248u, _value); } while (0); }
    // 0x32c14c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x32c14cu;
    { uint32_t bits = FAST_READ32(0x4E9998u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32c150: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x32c150u;
    { uint32_t bits = FAST_READ32(0x4E999Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32c154: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x32c154u;
    { uint32_t bits = FAST_READ32(0x4E99A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c158: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x32c158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91124Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91124Cu, _value); } while (0); }
    // 0x32c15c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x32c15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911250u, _value); } while (0); }
    // 0x32c160: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x32c160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911254u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911254u, _value); } while (0); }
    // 0x32c164: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x32c164u;
    { uint32_t bits = FAST_READ32(0x4E99A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32c168: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x32c168u;
    { uint32_t bits = FAST_READ32(0x4E99ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32c16c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x32c16cu;
    { uint32_t bits = FAST_READ32(0x4E99B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c170: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x32c170u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911258u, _value); } while (0); }
    // 0x32c174: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x32c174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x91125Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91125Cu, _value); } while (0); }
    // 0x32c178: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x32c178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x911260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x911260u, _value); } while (0); }
    // 0x32c17c: 0xa3828b80  sb          $v0, -0x7480($gp)
    ctx->pc = 0x32c17cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937472), (uint8_t)GPR_U32(ctx, 2));
label_32c180:
    // 0x32c180: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32c180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32c184: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x32c184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x32c188: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32c188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32c18c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32C18Cu;
    {
        const bool branch_taken_0x32c18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C18Cu;
        // 0x32c190: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c18c) {
            ctx->pc = 0x32C1C8u;
            goto label_32c1c8;
        }
    }
    ctx->pc = 0x32C194u;
    // 0x32c194: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x32c194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x32c198: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x32c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x32c19c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32C19Cu;
    {
        const bool branch_taken_0x32c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c19c) {
            ctx->pc = 0x32C1C8u;
            goto label_32c1c8;
        }
    }
    ctx->pc = 0x32C1A4u;
    // 0x32c1a4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x32c1a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32c1a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32C1A8u;
    {
        const bool branch_taken_0x32c1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1A8u;
        // 0x32c1ac: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c1a8) {
            ctx->pc = 0x32C1C8u;
            goto label_32c1c8;
        }
    }
    ctx->pc = 0x32C1B0u;
    // 0x32c1b0: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32c1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x32c1b4: 0xa422cc50  sh          $v0, -0x33B0($at)
    ctx->pc = 0x32c1b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC50u, _value); } while (0);
    // 0x32c1b8: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32c1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x32c1bc: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x32c1bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC90u, _value); } while (0);
    // 0x32c1c0: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32c1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x32c1c4: 0xa422cc70  sh          $v0, -0x3390($at)
    ctx->pc = 0x32c1c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC70u, _value); } while (0);
label_32c1c8:
    // 0x32c1c8: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x32c1c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32c1cc: 0x3c020091  lui         $v0, 0x91
    ctx->pc = 0x32c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)145 << 16));
    // 0x32c1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c1d4: 0x24421210  addiu       $v0, $v0, 0x1210
    ctx->pc = 0x32c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4624));
    // 0x32c1d8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x32c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x32c1dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32c1e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32c1e4: 0xc040250  jal         func_100940
    ctx->pc = 0x32C1E4u;
    SET_GPR_U32(ctx, 31, 0x32C1ECu);
    ctx->pc = 0x32C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C1E4u;
    // 0x32c1e8: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x32C1E4u, 0x32C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C1ECu;
label_32c1ec:
    // 0x32c1ec: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x32c1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x32c1f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C1F0u;
    {
        const bool branch_taken_0x32c1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1F0u;
        // 0x32c1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c1f0) {
            ctx->pc = 0x32C200u;
            goto label_32c200;
        }
    }
    ctx->pc = 0x32C1F8u;
    // 0x32c1f8: 0xc0cb774  jal         func_32DDD0
    ctx->pc = 0x32C1F8u;
    SET_GPR_U32(ctx, 31, 0x32C200u);
    ctx->pc = 0x32DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DDD0u, 0x32C1F8u, 0x32C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C200u;
label_32c200:
    // 0x32c200: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x32c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x32c204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c20c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C20Cu;
        // 0x32c210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C214u;
}
