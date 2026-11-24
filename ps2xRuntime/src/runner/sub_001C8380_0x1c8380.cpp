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

// Function: sub_001C8380
// Address: 0x1c8380 - 0x1ca0a4
void sub_001C8380_0x1c8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8380_0x1c8380");
#endif

    switch (ctx->pc) {
        case 0x1c86a0u: goto label_1c86a0;
        case 0x1c87b8u: goto label_1c87b8;
        case 0x1c8fd0u: goto label_1c8fd0;
        default: break;
    }

    ctx->pc = 0x1c8380u;

    // 0x1c8380: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x1c8380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x1c8384: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1c8384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1c8388: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1c8388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1c838c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1c838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1c8390: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1c8390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1c8394: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1c8394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1c8398: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c8398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1c839c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1c83a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c83a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1c83a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c83a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c83a8: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x1c83a8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c83ac: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x1c83acu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c83b0: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x1c83b0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c83b4: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x1c83b4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c83b8: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1c83b8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c83bc: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1c83bcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c83c0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1c83c0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c83c4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1c83c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c83c8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1c83c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c83cc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1c83ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c83d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c83d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c83d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c83d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c83d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c83dc: 0xafa303e0  sw          $v1, 0x3E0($sp)
    ctx->pc = 0x1c83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 3));
    // 0x1c83e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c83e4: 0xafa303d0  sw          $v1, 0x3D0($sp)
    ctx->pc = 0x1c83e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 3));
    // 0x1c83e8: 0x8c94006c  lw          $s4, 0x6C($a0)
    ctx->pc = 0x1c83e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1c83ec: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x1c83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1c83f0: 0xafa303c0  sw          $v1, 0x3C0($sp)
    ctx->pc = 0x1c83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 3));
    // 0x1c83f4: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1c83f8: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1c83f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c83fc: 0x10200712  beqz        $at, . + 4 + (0x712 << 2)
    ctx->pc = 0x1C83FCu;
    {
        const bool branch_taken_0x1c83fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83FCu;
        // 0x1c8400: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83fc) {
            ctx->pc = 0x1CA048u;
            goto label_1ca048;
        }
    }
    ctx->pc = 0x1C8404u;
    // 0x1c8404: 0xafa003b0  sw          $zero, 0x3B0($sp)
    ctx->pc = 0x1c8404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 0));
    // 0x1c8408: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c8408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c840c: 0xafa003a0  sw          $zero, 0x3A0($sp)
    ctx->pc = 0x1c840cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 0));
    // 0x1c8410: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x1c8410u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8414: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c8414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8418: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c8418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c841c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x1c841cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c8420: 0x3c088050  lui         $t0, 0x8050
    ctx->pc = 0x1c8420u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32848 << 16));
    // 0x1c8424: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x1c8424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1c8428: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1c8428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1c842c: 0x3c043f99  lui         $a0, 0x3F99
    ctx->pc = 0x1c842cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16281 << 16));
    // 0x1c8430: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x1c8430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1c8434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8438: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1c8438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c843c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c843cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1c8440: 0x34634040  ori         $v1, $v1, 0x4040
    ctx->pc = 0x1c8440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16448);
    // 0x1c8444: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x1c8444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
    // 0x1c8448: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1c8448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1c844c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c844cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c8450: 0x34642020  ori         $a0, $v1, 0x2020
    ctx->pc = 0x1c8450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x1c8454: 0x3c031840  lui         $v1, 0x1840
    ctx->pc = 0x1c8454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6208 << 16));
    // 0x1c8458: 0x34674040  ori         $a3, $v1, 0x4040
    ctx->pc = 0x1c8458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16448);
    // 0x1c845c: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1c845cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1c8460: 0x34698080  ori         $t1, $v1, 0x8080
    ctx->pc = 0x1c8460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1c8464: 0x34637070  ori         $v1, $v1, 0x7070
    ctx->pc = 0x1c8464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28784);
    // 0x1c8468: 0x7fa30270  sq          $v1, 0x270($sp)
    ctx->pc = 0x1c8468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 3));
    // 0x1c846c: 0x3c032030  lui         $v1, 0x2030
    ctx->pc = 0x1c846cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8240 << 16));
    // 0x1c8470: 0x34632820  ori         $v1, $v1, 0x2820
    ctx->pc = 0x1c8470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10272);
    // 0x1c8474: 0x7fa302c0  sq          $v1, 0x2C0($sp)
    ctx->pc = 0x1c8474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 3));
    // 0x1c8478: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c8478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c847c: 0x34632820  ori         $v1, $v1, 0x2820
    ctx->pc = 0x1c847cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10272);
    // 0x1c8480: 0x7fa302b0  sq          $v1, 0x2B0($sp)
    ctx->pc = 0x1c8480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 3));
    // 0x1c8484: 0x3c030050  lui         $v1, 0x50
    ctx->pc = 0x1c8484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)80 << 16));
    // 0x1c8488: 0x34635050  ori         $v1, $v1, 0x5050
    ctx->pc = 0x1c8488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20560);
    // 0x1c848c: 0x7fa30290  sq          $v1, 0x290($sp)
    ctx->pc = 0x1c848cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 3));
    // 0x1c8490: 0x35035050  ori         $v1, $t0, 0x5050
    ctx->pc = 0x1c8490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20560);
    // 0x1c8494: 0x7fa302a0  sq          $v1, 0x2A0($sp)
    ctx->pc = 0x1c8494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 3));
    // 0x1c8498: 0x35034848  ori         $v1, $t0, 0x4848
    ctx->pc = 0x1c8498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)18504);
    // 0x1c849c: 0x7fa30280  sq          $v1, 0x280($sp)
    ctx->pc = 0x1c849cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 3));
    // 0x1c84a0: 0x3c084288  lui         $t0, 0x4288
    ctx->pc = 0x1c84a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17032 << 16));
    // 0x1c84a4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x1c84a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x1c84a8: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x1c84a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1c84ac: 0x44889800  mtc1        $t0, $f19
    ctx->pc = 0x1c84acu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1c84b0: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x1c84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x1c84b4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1c84b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c84b8: 0x3c033070  lui         $v1, 0x3070
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12400 << 16));
    // 0x1c84bc: 0x34636060  ori         $v1, $v1, 0x6060
    ctx->pc = 0x1c84bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x1c84c0: 0x7fa30260  sq          $v1, 0x260($sp)
    ctx->pc = 0x1c84c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 3));
    // 0x1c84c4: 0x3c034850  lui         $v1, 0x4850
    ctx->pc = 0x1c84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18512 << 16));
    // 0x1c84c8: 0x34635050  ori         $v1, $v1, 0x5050
    ctx->pc = 0x1c84c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20560);
    // 0x1c84cc: 0x7fa30250  sq          $v1, 0x250($sp)
    ctx->pc = 0x1c84ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 3));
    // 0x1c84d0: 0x3c033040  lui         $v1, 0x3040
    ctx->pc = 0x1c84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12352 << 16));
    // 0x1c84d4: 0x34634040  ori         $v1, $v1, 0x4040
    ctx->pc = 0x1c84d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16448);
    // 0x1c84d8: 0x7fa30240  sq          $v1, 0x240($sp)
    ctx->pc = 0x1c84d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 3));
    // 0x1c84dc: 0x3c031870  lui         $v1, 0x1870
    ctx->pc = 0x1c84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6256 << 16));
    // 0x1c84e0: 0x34637070  ori         $v1, $v1, 0x7070
    ctx->pc = 0x1c84e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28784);
    // 0x1c84e4: 0x7fa30230  sq          $v1, 0x230($sp)
    ctx->pc = 0x1c84e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 3));
    // 0x1c84e8: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1c84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1c84ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c84ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c84f0: 0x7fa30220  sq          $v1, 0x220($sp)
    ctx->pc = 0x1c84f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
    // 0x1c84f4: 0x3c036060  lui         $v1, 0x6060
    ctx->pc = 0x1c84f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24672 << 16));
    // 0x1c84f8: 0x34636060  ori         $v1, $v1, 0x6060
    ctx->pc = 0x1c84f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x1c84fc: 0x7fa30210  sq          $v1, 0x210($sp)
    ctx->pc = 0x1c84fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 3));
    // 0x1c8500: 0x3c032060  lui         $v1, 0x2060
    ctx->pc = 0x1c8500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8288 << 16));
    // 0x1c8504: 0x34636060  ori         $v1, $v1, 0x6060
    ctx->pc = 0x1c8504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x1c8508: 0x7fa30200  sq          $v1, 0x200($sp)
    ctx->pc = 0x1c8508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 3));
    // 0x1c850c: 0x3c038030  lui         $v1, 0x8030
    ctx->pc = 0x1c850cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32816 << 16));
    // 0x1c8510: 0x34633030  ori         $v1, $v1, 0x3030
    ctx->pc = 0x1c8510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12336);
    // 0x1c8514: 0x7fa301f0  sq          $v1, 0x1F0($sp)
    ctx->pc = 0x1c8514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 3));
    // 0x1c8518: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1c8518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1c851c: 0x44838800  mtc1        $v1, $f17
    ctx->pc = 0x1c851cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1c8520: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1c8520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1c8524: 0x7fa301e0  sq          $v1, 0x1E0($sp)
    ctx->pc = 0x1c8524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 3));
    // 0x1c8528: 0x3c034050  lui         $v1, 0x4050
    ctx->pc = 0x1c8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16464 << 16));
    // 0x1c852c: 0x34635050  ori         $v1, $v1, 0x5050
    ctx->pc = 0x1c852cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20560);
    // 0x1c8530: 0x7fa301d0  sq          $v1, 0x1D0($sp)
    ctx->pc = 0x1c8530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 3));
    // 0x1c8534: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1c8534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1c8538: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x1c8538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1c853c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1c853cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1c8540: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x1c8540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c8544: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1c8544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1c8548: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1c8548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c854c: 0x44887800  mtc1        $t0, $f15
    ctx->pc = 0x1c854cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c8550: 0x3c034340  lui         $v1, 0x4340
    ctx->pc = 0x1c8550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17216 << 16));
    // 0x1c8554: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c8554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8558: 0x3c084300  lui         $t0, 0x4300
    ctx->pc = 0x1c8558u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17152 << 16));
    // 0x1c855c: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x1c855cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c8560: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x1c8560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x1c8564: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x1c8564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1c8568: 0x3c0841d0  lui         $t0, 0x41D0
    ctx->pc = 0x1c8568u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16848 << 16));
    // 0x1c856c: 0x44885800  mtc1        $t0, $f11
    ctx->pc = 0x1c856cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1c8570: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1c8570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1c8574: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x1c8574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1c8578: 0x3c0841c0  lui         $t0, 0x41C0
    ctx->pc = 0x1c8578u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16832 << 16));
    // 0x1c857c: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x1c857cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1c8580: 0x3c03800c  lui         $v1, 0x800C
    ctx->pc = 0x1c8580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32780 << 16));
    // 0x1c8584: 0x34630c0c  ori         $v1, $v1, 0xC0C
    ctx->pc = 0x1c8584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3084);
    // 0x1c8588: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x1c8588u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x1c858c: 0x7fa301c0  sq          $v1, 0x1C0($sp)
    ctx->pc = 0x1c858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 3));
    // 0x1c8590: 0x2508fb50  addiu       $t0, $t0, -0x4B0
    ctx->pc = 0x1c8590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966096));
    // 0x1c8594: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c8594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c8598: 0x346acccd  ori         $t2, $v1, 0xCCCD
    ctx->pc = 0x1c8598u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c859c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c859cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c85a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c85a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c85a4: 0x448a1800  mtc1        $t2, $f3
    ctx->pc = 0x1c85a4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c85a8: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1c85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1c85ac: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x1c85acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c85b0: 0x3c0a0080  lui         $t2, 0x80
    ctx->pc = 0x1c85b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)128 << 16));
    // 0x1c85b4: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1c85b8: 0x34634040  ori         $v1, $v1, 0x4040
    ctx->pc = 0x1c85b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16448);
    // 0x1c85bc: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x1c85bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
    // 0x1c85c0: 0x35438080  ori         $v1, $t2, 0x8080
    ctx->pc = 0x1c85c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x1c85c4: 0x7fa301a0  sq          $v1, 0x1A0($sp)
    ctx->pc = 0x1c85c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
    // 0x1c85c8: 0x3c0ac61c  lui         $t2, 0xC61C
    ctx->pc = 0x1c85c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)50716 << 16));
    // 0x1c85cc: 0x3c035040  lui         $v1, 0x5040
    ctx->pc = 0x1c85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20544 << 16));
    // 0x1c85d0: 0x354a4000  ori         $t2, $t2, 0x4000
    ctx->pc = 0x1c85d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x1c85d4: 0x34634040  ori         $v1, $v1, 0x4040
    ctx->pc = 0x1c85d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16448);
    // 0x1c85d8: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x1c85d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x1c85dc: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x1c85dcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c85e0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c85e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c85e4: 0x34637060  ori         $v1, $v1, 0x7060
    ctx->pc = 0x1c85e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28768);
    // 0x1c85e8: 0x3c0a4604  lui         $t2, 0x4604
    ctx->pc = 0x1c85e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17924 << 16));
    // 0x1c85ec: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x1c85ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x1c85f0: 0x3c03c5bb  lui         $v1, 0xC5BB
    ctx->pc = 0x1c85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50619 << 16));
    // 0x1c85f4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1c85f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1c85f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c85f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c85fc: 0x3c03c57a  lui         $v1, 0xC57A
    ctx->pc = 0x1c85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50554 << 16));
    // 0x1c8600: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1c8600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8604: 0x3543d000  ori         $v1, $t2, 0xD000
    ctx->pc = 0x1c8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)53248);
    // 0x1c8608: 0xe7a600cc  swc1        $f6, 0xCC($sp)
    ctx->pc = 0x1c8608u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1c860c: 0x3c0a5555  lui         $t2, 0x5555
    ctx->pc = 0x1c860cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)21845 << 16));
    // 0x1c8610: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1c8610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8614: 0x0  nop
    ctx->pc = 0x1c8614u;
    // NOP
    // 0x1c8618: 0xe7a600d0  swc1        $f6, 0xD0($sp)
    ctx->pc = 0x1c8618u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1c861c: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x1c861cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x1c8620: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1c8620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8624: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x1c8624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x1c8628: 0xe7a600c8  swc1        $f6, 0xC8($sp)
    ctx->pc = 0x1c8628u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1c862c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1c862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1c8630: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1c8630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8634: 0x8fa303e0  lw          $v1, 0x3E0($sp)
    ctx->pc = 0x1c8634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1c8638: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x1c8638u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1c863c: 0x246dffff  addiu       $t5, $v1, -0x1
    ctx->pc = 0x1c863cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c8640: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x1c8640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1c8644: 0x246cffff  addiu       $t4, $v1, -0x1
    ctx->pc = 0x1c8644u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c8648: 0x8fa303e0  lw          $v1, 0x3E0($sp)
    ctx->pc = 0x1c8648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1c864c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1c864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1c8650: 0xafa30370  sw          $v1, 0x370($sp)
    ctx->pc = 0x1c8650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 3));
    // 0x1c8654: 0x8fa303e0  lw          $v1, 0x3E0($sp)
    ctx->pc = 0x1c8654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1c8658: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1c8658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1c865c: 0xafa30360  sw          $v1, 0x360($sp)
    ctx->pc = 0x1c865cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 3));
    // 0x1c8660: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x1c8660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1c8664: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1c8664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1c8668: 0xafa30350  sw          $v1, 0x350($sp)
    ctx->pc = 0x1c8668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 3));
    // 0x1c866c: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x1c866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1c8670: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1c8670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1c8674: 0xafa30340  sw          $v1, 0x340($sp)
    ctx->pc = 0x1c8674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 3));
    // 0x1c8678: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1c8678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1c867c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1c867cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8680: 0x35435556  ori         $v1, $t2, 0x5556
    ctx->pc = 0x1c8680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21846);
    // 0x1c8684: 0x7fa302d0  sq          $v1, 0x2D0($sp)
    ctx->pc = 0x1c8684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
    // 0x1c8688: 0xe7a600dc  swc1        $f6, 0xDC($sp)
    ctx->pc = 0x1c8688u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1c868c: 0x3c034250  lui         $v1, 0x4250
    ctx->pc = 0x1c868cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16976 << 16));
    // 0x1c8690: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1c8690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8694: 0x0  nop
    ctx->pc = 0x1c8694u;
    // NOP
    // 0x1c8698: 0xe7a600d8  swc1        $f6, 0xD8($sp)
    ctx->pc = 0x1c8698u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1c869c: 0x0  nop
    ctx->pc = 0x1c869cu;
    // NOP
label_1c86a0:
    // 0x1c86a0: 0x8fa303e0  lw          $v1, 0x3E0($sp)
    ctx->pc = 0x1c86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1c86a4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1c86a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c86a8: 0x1020065b  beqz        $at, . + 4 + (0x65B << 2)
    ctx->pc = 0x1C86A8u;
    {
        const bool branch_taken_0x1c86a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86A8u;
        // 0x1c86ac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86a8) {
            ctx->pc = 0x1CA018u;
            goto label_1ca018;
        }
    }
    ctx->pc = 0x1C86B0u;
    // 0x1c86b0: 0x2403ff10  addiu       $v1, $zero, -0xF0
    ctx->pc = 0x1c86b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967056));
    // 0x1c86b4: 0x26b3ffa0  addiu       $s3, $s5, -0x60
    ctx->pc = 0x1c86b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967200));
    // 0x1c86b8: 0xafa30380  sw          $v1, 0x380($sp)
    ctx->pc = 0x1c86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 3));
    // 0x1c86bc: 0x44953000  mtc1        $s5, $f6
    ctx->pc = 0x1c86bcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c86c0: 0x8fa303e0  lw          $v1, 0x3E0($sp)
    ctx->pc = 0x1c86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1c86c4: 0x13bfc2  srl         $s7, $s3, 31
    ctx->pc = 0x1c86c4u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x1c86c8: 0x468035e0  cvt.s.w     $f23, $f6
    ctx->pc = 0x1c86c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x1c86cc: 0xafa00390  sw          $zero, 0x390($sp)
    ctx->pc = 0x1c86ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 0));
    // 0x1c86d0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1c86d0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86d4: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1c86d4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86d8: 0x2a37018  mult        $t6, $s5, $v1
    ctx->pc = 0x1c86d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c86dc: 0xc7a600dc  lwc1        $f6, 0xDC($sp)
    ctx->pc = 0x1c86dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c86e0: 0x4616bec1  sub.s       $f27, $f23, $f22
    ctx->pc = 0x1c86e0u;
    ctx->f[27] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x1c86e4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1c86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c86e8: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1c86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1c86ec: 0x35040  sll         $t2, $v1, 1
    ctx->pc = 0x1c86ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c86f0: 0x35900  sll         $t3, $v1, 4
    ctx->pc = 0x1c86f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c86f4: 0x1439021  addu        $s2, $t2, $v1
    ctx->pc = 0x1c86f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1c86f8: 0x240a001f  addiu       $t2, $zero, 0x1F
    ctx->pc = 0x1c86f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c86fc: 0x1558823  subu        $s1, $t2, $s5
    ctx->pc = 0x1c86fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x1c8700: 0x7baa02d0  lq          $t2, 0x2D0($sp)
    ctx->pc = 0x1c8700u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1c8704: 0x4606b981  sub.s       $f6, $f23, $f6
    ctx->pc = 0x1c8704u;
    ctx->f[6] = FPU_SUB_S(ctx->f[23], ctx->f[6]);
    // 0x1c8708: 0x46153401  sub.s       $f16, $f6, $f21
    ctx->pc = 0x1c8708u;
    ctx->f[16] = FPU_SUB_S(ctx->f[6], ctx->f[21]);
    // 0x1c870c: 0x1530018  mult        $zero, $t2, $s3
    ctx->pc = 0x1c870cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c8710: 0xc7a600d8  lwc1        $f6, 0xD8($sp)
    ctx->pc = 0x1c8710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c8714: 0x4614be81  sub.s       $f26, $f23, $f20
    ctx->pc = 0x1c8714u;
    ctx->f[26] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x1c8718: 0x125080  sll         $t2, $s2, 2
    ctx->pc = 0x1c8718u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c871c: 0xafaa0320  sw          $t2, 0x320($sp)
    ctx->pc = 0x1c871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 10));
    // 0x1c8720: 0x115140  sll         $t2, $s1, 5
    ctx->pc = 0x1c8720u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1c8724: 0xafaa0310  sw          $t2, 0x310($sp)
    ctx->pc = 0x1c8724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 10));
    // 0x1c8728: 0x4617ae01  sub.s       $f24, $f21, $f23
    ctx->pc = 0x1c8728u;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x1c872c: 0x240a001a  addiu       $t2, $zero, 0x1A
    ctx->pc = 0x1c872cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c8730: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x1c8730u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x1c8734: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1c8734u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1c8738: 0xafaa0300  sw          $t2, 0x300($sp)
    ctx->pc = 0x1c8738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 10));
    // 0x1c873c: 0x4606be41  sub.s       $f25, $f23, $f6
    ctx->pc = 0x1c873cu;
    ctx->f[25] = FPU_SUB_S(ctx->f[23], ctx->f[6]);
    // 0x1c8740: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x1c8740u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c8744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8748: 0xafa302e0  sw          $v1, 0x2E0($sp)
    ctx->pc = 0x1c8748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 3));
    // 0x1c874c: 0x26a3fffa  addiu       $v1, $s5, -0x6
    ctx->pc = 0x1c874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967290));
    // 0x1c8750: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c8750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1c8754: 0xafa302f0  sw          $v1, 0x2F0($sp)
    ctx->pc = 0x1c8754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 3));
    // 0x1c8758: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8758u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c875c: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x1c875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1c8760: 0x2463002a  addiu       $v1, $v1, 0x2A
    ctx->pc = 0x1c8760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 42));
    // 0x1c8764: 0xafa30330  sw          $v1, 0x330($sp)
    ctx->pc = 0x1c8764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 3));
    // 0x1c8768: 0x2aa30029  slti        $v1, $s5, 0x29
    ctx->pc = 0x1c8768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1c876c: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x1c876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x1c8770: 0x46108402  mul.s       $f16, $f16, $f16
    ctx->pc = 0x1c8770u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x1c8774: 0x2aa30006  slti        $v1, $s5, 0x6
    ctx->pc = 0x1c8774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c8778: 0x7fa30190  sq          $v1, 0x190($sp)
    ctx->pc = 0x1c8778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 3));
    // 0x1c877c: 0x2aa30004  slti        $v1, $s5, 0x4
    ctx->pc = 0x1c877cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c8780: 0x7fa30160  sq          $v1, 0x160($sp)
    ctx->pc = 0x1c8780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
    // 0x1c8784: 0x2ac182b  sltu        $v1, $s5, $t4
    ctx->pc = 0x1c8784u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1c8788: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x1c8788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
    // 0x1c878c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x1c878cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c8790: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x1c8790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
    // 0x1c8794: 0x8fa30350  lw          $v1, 0x350($sp)
    ctx->pc = 0x1c8794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1c8798: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x1c8798u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c879c: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x1c879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
    // 0x1c87a0: 0x2aa30003  slti        $v1, $s5, 0x3
    ctx->pc = 0x1c87a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c87a4: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x1c87a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x1c87a8: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x1c87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1c87ac: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x1c87acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c87b0: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1c87b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x1c87b4: 0x0  nop
    ctx->pc = 0x1c87b4u;
    // NOP
label_1c87b8:
    // 0x1c87b8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c87b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c87bc: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c87bcu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c87c0: 0x24030309  addiu       $v1, $zero, 0x309
    ctx->pc = 0x1c87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
    // 0x1c87c4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C87C4u;
    {
        const bool branch_taken_0x1c87c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87C4u;
        // 0x1c87c8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87c4) {
            ctx->pc = 0x1C87D8u;
            goto label_1c87d8;
        }
    }
    ctx->pc = 0x1C87CCu;
    // 0x1c87cc: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C87CCu;
    {
        const bool branch_taken_0x1c87cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c87cc) {
            ctx->pc = 0x1C87E8u;
            goto label_1c87e8;
        }
    }
    ctx->pc = 0x1C87D4u;
    // 0x1c87d4: 0x0  nop
    ctx->pc = 0x1c87d4u;
    // NOP
label_1c87d8:
    // 0x1c87d8: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c87dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c87e0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c87e4: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1c87e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_1c87e8:
    // 0x1c87e8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c87e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c87ec: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c87ecu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c87f0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c87f4: 0x1623000c  bne         $s1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C87F4u;
    {
        const bool branch_taken_0x1c87f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87F4u;
        // 0x1c87f8: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87f4) {
            ctx->pc = 0x1C8828u;
            goto label_1c8828;
        }
    }
    ctx->pc = 0x1C87FCu;
    // 0x1c87fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c87fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8800: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8804: 0x7ba302c0  lq          $v1, 0x2C0($sp)
    ctx->pc = 0x1c8804u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1c8808: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8808u;
    {
        const bool branch_taken_0x1c8808 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8808u;
        // 0x1c880c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8808) {
            ctx->pc = 0x1C8820u;
            goto label_1c8820;
        }
    }
    ctx->pc = 0x1C8810u;
    // 0x1c8810: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8810u;
    {
        const bool branch_taken_0x1c8810 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8810) {
            ctx->pc = 0x1C8820u;
            goto label_1c8820;
        }
    }
    ctx->pc = 0x1C8818u;
    // 0x1c8818: 0x16cd0003  bne         $s6, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8818u;
    {
        const bool branch_taken_0x1c8818 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 13));
        if (branch_taken_0x1c8818) {
            ctx->pc = 0x1C8828u;
            goto label_1c8828;
        }
    }
    ctx->pc = 0x1C8820u;
label_1c8820:
    // 0x1c8820: 0x7ba302b0  lq          $v1, 0x2B0($sp)
    ctx->pc = 0x1c8820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1c8824: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1c8828:
    // 0x1c8828: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c882c: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c882cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8830: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x1c8830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1c8834: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8834u;
    {
        const bool branch_taken_0x1c8834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8834u;
        // 0x1c8838: 0x24030710  addiu       $v1, $zero, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8834) {
            ctx->pc = 0x1C8850u;
            goto label_1c8850;
        }
    }
    ctx->pc = 0x1C883Cu;
    // 0x1c883c: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C883Cu;
    {
        const bool branch_taken_0x1c883c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c883c) {
            ctx->pc = 0x1C8850u;
            goto label_1c8850;
        }
    }
    ctx->pc = 0x1C8844u;
    // 0x1c8844: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1c8844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1c8848: 0x1623000d  bne         $s1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8848u;
    {
        const bool branch_taken_0x1c8848 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8848) {
            ctx->pc = 0x1C8880u;
            goto label_1c8880;
        }
    }
    ctx->pc = 0x1C8850u;
label_1c8850:
    // 0x1c8850: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c8850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c8854: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8858: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c885c: 0x7ba302a0  lq          $v1, 0x2A0($sp)
    ctx->pc = 0x1c885cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1c8860: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8860u;
    {
        const bool branch_taken_0x1c8860 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8860u;
        // 0x1c8864: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8860) {
            ctx->pc = 0x1C8878u;
            goto label_1c8878;
        }
    }
    ctx->pc = 0x1C8868u;
    // 0x1c8868: 0x12cd0003  beq         $s6, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8868u;
    {
        const bool branch_taken_0x1c8868 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 13));
        if (branch_taken_0x1c8868) {
            ctx->pc = 0x1C8878u;
            goto label_1c8878;
        }
    }
    ctx->pc = 0x1C8870u;
    // 0x1c8870: 0x16ac0003  bne         $s5, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8870u;
    {
        const bool branch_taken_0x1c8870 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 12));
        if (branch_taken_0x1c8870) {
            ctx->pc = 0x1C8880u;
            goto label_1c8880;
        }
    }
    ctx->pc = 0x1C8878u;
label_1c8878:
    // 0x1c8878: 0x7ba30290  lq          $v1, 0x290($sp)
    ctx->pc = 0x1c8878u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1c887c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c887cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1c8880:
    // 0x1c8880: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8884: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8884u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8888: 0x2403070c  addiu       $v1, $zero, 0x70C
    ctx->pc = 0x1c8888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1804));
    // 0x1c888c: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C888Cu;
    {
        const bool branch_taken_0x1c888c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C888Cu;
        // 0x1c8890: 0x2403007c  addiu       $v1, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c888c) {
            ctx->pc = 0x1C88A0u;
            goto label_1c88a0;
        }
    }
    ctx->pc = 0x1C8894u;
    // 0x1c8894: 0x16230012  bne         $s1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8894u;
    {
        const bool branch_taken_0x1c8894 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8894) {
            ctx->pc = 0x1C88E0u;
            goto label_1c88e0;
        }
    }
    ctx->pc = 0x1C889Cu;
    // 0x1c889c: 0x0  nop
    ctx->pc = 0x1c889cu;
    // NOP
label_1c88a0:
    // 0x1c88a0: 0x2ce9021  addu        $s2, $s6, $t6
    ctx->pc = 0x1c88a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c88a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1c88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c88a8: 0x2ac10070  slti        $at, $s6, 0x70
    ctx->pc = 0x1c88a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x1c88ac: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c88acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c88b0: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x1c88b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1c88b4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C88B4u;
    {
        const bool branch_taken_0x1c88b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88B4u;
        // 0x1c88b8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88b4) {
            ctx->pc = 0x1C88E0u;
            goto label_1c88e0;
        }
    }
    ctx->pc = 0x1C88BCu;
    // 0x1c88bc: 0x2aa10068  slti        $at, $s5, 0x68
    ctx->pc = 0x1c88bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)104) ? 1 : 0);
    // 0x1c88c0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C88C0u;
    {
        const bool branch_taken_0x1c88c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c88c0) {
            ctx->pc = 0x1C88E0u;
            goto label_1c88e0;
        }
    }
    ctx->pc = 0x1C88C8u;
    // 0x1c88c8: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x1c88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1c88cc: 0x1288c0  sll         $s1, $s2, 3
    ctx->pc = 0x1c88ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c88d0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c88d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c88d8: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x1c88d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c88dc: 0x0  nop
    ctx->pc = 0x1c88dcu;
    // NOP
label_1c88e0:
    // 0x1c88e0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c88e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c88e4: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c88e4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c88e8: 0x24030701  addiu       $v1, $zero, 0x701
    ctx->pc = 0x1c88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x1c88ec: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C88ECu;
    {
        const bool branch_taken_0x1c88ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88ECu;
        // 0x1c88f0: 0x24030711  addiu       $v1, $zero, 0x711 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1809));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88ec) {
            ctx->pc = 0x1C8908u;
            goto label_1c8908;
        }
    }
    ctx->pc = 0x1C88F4u;
    // 0x1c88f4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C88F4u;
    {
        const bool branch_taken_0x1c88f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c88f4) {
            ctx->pc = 0x1C8908u;
            goto label_1c8908;
        }
    }
    ctx->pc = 0x1C88FCu;
    // 0x1c88fc: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x1c88fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x1c8900: 0x16230021  bne         $s1, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C8900u;
    {
        const bool branch_taken_0x1c8900 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8900) {
            ctx->pc = 0x1C8988u;
            goto label_1c8988;
        }
    }
    ctx->pc = 0x1C8908u;
label_1c8908:
    // 0x1c8908: 0x44963000  mtc1        $s6, $f6
    ctx->pc = 0x1c8908u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c890c: 0x0  nop
    ctx->pc = 0x1c890cu;
    // NOP
    // 0x1c8910: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1c8910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1c8914: 0x46163181  sub.s       $f6, $f6, $f22
    ctx->pc = 0x1c8914u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[22]);
    // 0x1c8918: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x1c8918u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x1c891c: 0x461bd99c  madd.s      $f6, $f27, $f27
    ctx->pc = 0x1c891cu;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[27]));
    // 0x1c8920: 0x46060184  c1          0x60184
    ctx->pc = 0x1c8920u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[6]);
    // 0x1c8924: 0x0  nop
    ctx->pc = 0x1c8924u;
    // NOP
    // 0x1c8928: 0x0  nop
    ctx->pc = 0x1c8928u;
    // NOP
    // 0x1c892c: 0x46133036  c.le.s      $f6, $f19
    ctx->pc = 0x1c892cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8930: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8930u;
    {
        const bool branch_taken_0x1c8930 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8930u;
        // 0x1c8934: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8930) {
            ctx->pc = 0x1C8950u;
            goto label_1c8950;
        }
    }
    ctx->pc = 0x1C8938u;
    // 0x1c8938: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1c8938u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c893c: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x1c893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1c8940: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x1c8940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c8944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8948: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x1c8948u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c894c: 0x0  nop
    ctx->pc = 0x1c894cu;
    // NOP
label_1c8950:
    // 0x1c8950: 0x46143034  c.lt.s      $f6, $f20
    ctx->pc = 0x1c8950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8954: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8954u;
    {
        const bool branch_taken_0x1c8954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8954u;
        // 0x1c8958: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8954) {
            ctx->pc = 0x1C8970u;
            goto label_1c8970;
        }
    }
    ctx->pc = 0x1C895Cu;
    // 0x1c895c: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1c895cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c8960: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x1c8960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1c8964: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x1c8964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c8968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c896c: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x1c896cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_1c8970:
    // 0x1c8970: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c8970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c8974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8978: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c897c: 0x7ba30270  lq          $v1, 0x270($sp)
    ctx->pc = 0x1c897cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1c8980: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c8984: 0x0  nop
    ctx->pc = 0x1c8984u;
    // NOP
label_1c8988:
    // 0x1c8988: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c898c: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c898cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8990: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1c8990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c8994: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8994u;
    {
        const bool branch_taken_0x1c8994 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8994u;
        // 0x1c8998: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8994) {
            ctx->pc = 0x1C89B0u;
            goto label_1c89b0;
        }
    }
    ctx->pc = 0x1C899Cu;
    // 0x1c899c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c899cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c89a0: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c89a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c89a4: 0x7ba30260  lq          $v1, 0x260($sp)
    ctx->pc = 0x1c89a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1c89a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c89ac: 0x0  nop
    ctx->pc = 0x1c89acu;
    // NOP
label_1c89b0:
    // 0x1c89b0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c89b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c89b4: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c89b4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c89b8: 0x24030702  addiu       $v1, $zero, 0x702
    ctx->pc = 0x1c89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
    // 0x1c89bc: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C89BCu;
    {
        const bool branch_taken_0x1c89bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89BCu;
        // 0x1c89c0: 0x24030712  addiu       $v1, $zero, 0x712 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1810));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89bc) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C89C4u;
    // 0x1c89c4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C89C4u;
    {
        const bool branch_taken_0x1c89c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c89c4) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C89CCu;
    // 0x1c89cc: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x1c89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1c89d0: 0x1623007d  bne         $s1, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x1C89D0u;
    {
        const bool branch_taken_0x1c89d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c89d0) {
            ctx->pc = 0x1C8BC8u;
            goto label_1c8bc8;
        }
    }
    ctx->pc = 0x1C89D8u;
label_1c89d8:
    // 0x1c89d8: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x1c89d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c89dc: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c89dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c89e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c89e4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c89e8: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C89E8u;
    {
        const bool branch_taken_0x1c89e8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89E8u;
        // 0x1c89ec: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89e8) {
            ctx->pc = 0x1C8A00u;
            goto label_1c8a00;
        }
    }
    ctx->pc = 0x1C89F0u;
    // 0x1c89f0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c89f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c89f4: 0x118a3c  dsll32      $s1, $s1, 8
    ctx->pc = 0x1c89f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 8));
    // 0x1c89f8: 0x118a3e  dsrl32      $s1, $s1, 8
    ctx->pc = 0x1c89f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 8));
    // 0x1c89fc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c8a00:
    // 0x1c8a00: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c8a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8a04: 0x16d1000a  bne         $s6, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8A04u;
    {
        const bool branch_taken_0x1c8a04 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A04u;
        // 0x1c8a08: 0x2ce8821  addu        $s1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a04) {
            ctx->pc = 0x1C8A30u;
            goto label_1c8a30;
        }
    }
    ctx->pc = 0x1C8A0Cu;
    // 0x1c8a0c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c8a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c8a10: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c8a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c8a14: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8a18: 0x129a3c  dsll32      $s3, $s2, 8
    ctx->pc = 0x1c8a18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1c8a1c: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x1c8a1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
    // 0x1c8a20: 0x3c122000  lui         $s2, 0x2000
    ctx->pc = 0x1c8a20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8192 << 16));
    // 0x1c8a24: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x1c8a24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x1c8a28: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c8a2c: 0x0  nop
    ctx->pc = 0x1c8a2cu;
    // NOP
label_1c8a30:
    // 0x1c8a30: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1c8a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8a34: 0x16d1000a  bne         $s6, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8A34u;
    {
        const bool branch_taken_0x1c8a34 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A34u;
        // 0x1c8a38: 0x2ce8821  addu        $s1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a34) {
            ctx->pc = 0x1C8A60u;
            goto label_1c8a60;
        }
    }
    ctx->pc = 0x1C8A3Cu;
    // 0x1c8a3c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c8a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c8a40: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c8a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c8a44: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c8a44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8a48: 0x129a3c  dsll32      $s3, $s2, 8
    ctx->pc = 0x1c8a48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1c8a4c: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x1c8a4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
    // 0x1c8a50: 0x3c122400  lui         $s2, 0x2400
    ctx->pc = 0x1c8a50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)9216 << 16));
    // 0x1c8a54: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x1c8a54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x1c8a58: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c8a5c: 0x0  nop
    ctx->pc = 0x1c8a5cu;
    // NOP
label_1c8a60:
    // 0x1c8a60: 0x16cd0005  bne         $s6, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8A60u;
    {
        const bool branch_taken_0x1c8a60 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 13));
        if (branch_taken_0x1c8a60) {
            ctx->pc = 0x1C8A78u;
            goto label_1c8a78;
        }
    }
    ctx->pc = 0x1C8A68u;
    // 0x1c8a68: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c8a68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8a6c: 0x118a3c  dsll32      $s1, $s1, 8
    ctx->pc = 0x1c8a6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 8));
    // 0x1c8a70: 0x118a3e  dsrl32      $s1, $s1, 8
    ctx->pc = 0x1c8a70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 8));
    // 0x1c8a74: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c8a78:
    // 0x1c8a78: 0x8fb10370  lw          $s1, 0x370($sp)
    ctx->pc = 0x1c8a78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1c8a7c: 0x16d1000a  bne         $s6, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8A7Cu;
    {
        const bool branch_taken_0x1c8a7c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A7Cu;
        // 0x1c8a80: 0x2ce8821  addu        $s1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a7c) {
            ctx->pc = 0x1C8AA8u;
            goto label_1c8aa8;
        }
    }
    ctx->pc = 0x1C8A84u;
    // 0x1c8a84: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c8a84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c8a88: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c8a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c8a8c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c8a8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8a90: 0x129a3c  dsll32      $s3, $s2, 8
    ctx->pc = 0x1c8a90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1c8a94: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x1c8a94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
    // 0x1c8a98: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x1c8a98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x1c8a9c: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x1c8a9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x1c8aa0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c8aa4: 0x0  nop
    ctx->pc = 0x1c8aa4u;
    // NOP
label_1c8aa8:
    // 0x1c8aa8: 0x8fb10360  lw          $s1, 0x360($sp)
    ctx->pc = 0x1c8aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1c8aac: 0x16d1000a  bne         $s6, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8AACu;
    {
        const bool branch_taken_0x1c8aac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AACu;
        // 0x1c8ab0: 0x2ce8821  addu        $s1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8aac) {
            ctx->pc = 0x1C8AD8u;
            goto label_1c8ad8;
        }
    }
    ctx->pc = 0x1C8AB4u;
    // 0x1c8ab4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c8ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c8ab8: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c8ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c8abc: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c8abcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8ac0: 0x129a3c  dsll32      $s3, $s2, 8
    ctx->pc = 0x1c8ac0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1c8ac4: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x1c8ac4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
    // 0x1c8ac8: 0x3c122000  lui         $s2, 0x2000
    ctx->pc = 0x1c8ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8192 << 16));
    // 0x1c8acc: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x1c8accu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x1c8ad0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c8ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c8ad4: 0x0  nop
    ctx->pc = 0x1c8ad4u;
    // NOP
label_1c8ad8:
    // 0x1c8ad8: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8AD8u;
    {
        const bool branch_taken_0x1c8ad8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ad8) {
            ctx->pc = 0x1C8AF0u;
            goto label_1c8af0;
        }
    }
    ctx->pc = 0x1C8AE0u;
    // 0x1c8ae0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c8ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8ae4: 0x118a3c  dsll32      $s1, $s1, 8
    ctx->pc = 0x1c8ae4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 8));
    // 0x1c8ae8: 0x118a3e  dsrl32      $s1, $s1, 8
    ctx->pc = 0x1c8ae8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 8));
    // 0x1c8aec: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c8af0:
    // 0x1c8af0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c8af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8af4: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8AF4u;
    {
        const bool branch_taken_0x1c8af4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AF4u;
        // 0x1c8af8: 0x2ce8821  addu        $s1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8af4) {
            ctx->pc = 0x1C8B20u;
            goto label_1c8b20;
        }
    }
    ctx->pc = 0x1C8AFCu;
    // 0x1c8afc: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c8afcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c8b00: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c8b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c8b04: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c8b04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8b08: 0x129a3c  dsll32      $s3, $s2, 8
    ctx->pc = 0x1c8b08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1c8b0c: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x1c8b0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
    // 0x1c8b10: 0x3c122000  lui         $s2, 0x2000
    ctx->pc = 0x1c8b10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8192 << 16));
    // 0x1c8b14: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x1c8b14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x1c8b18: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c8b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c8b1c: 0x0  nop
    ctx->pc = 0x1c8b1cu;
    // NOP
label_1c8b20:
    // 0x1c8b20: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1c8b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8b24: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8B24u;
    {
        const bool branch_taken_0x1c8b24 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B24u;
        // 0x1c8b28: 0x2ce8821  addu        $s1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b24) {
            ctx->pc = 0x1C8B50u;
            goto label_1c8b50;
        }
    }
    ctx->pc = 0x1C8B2Cu;
    // 0x1c8b2c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c8b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c8b30: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c8b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c8b34: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c8b34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8b38: 0x129a3c  dsll32      $s3, $s2, 8
    ctx->pc = 0x1c8b38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1c8b3c: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x1c8b3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
    // 0x1c8b40: 0x3c122400  lui         $s2, 0x2400
    ctx->pc = 0x1c8b40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)9216 << 16));
    // 0x1c8b44: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x1c8b44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x1c8b48: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c8b4c: 0x0  nop
    ctx->pc = 0x1c8b4cu;
    // NOP
label_1c8b50:
    // 0x1c8b50: 0x16ac0005  bne         $s5, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8B50u;
    {
        const bool branch_taken_0x1c8b50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 12));
        if (branch_taken_0x1c8b50) {
            ctx->pc = 0x1C8B68u;
            goto label_1c8b68;
        }
    }
    ctx->pc = 0x1C8B58u;
    // 0x1c8b58: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c8b58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8b5c: 0x118a3c  dsll32      $s1, $s1, 8
    ctx->pc = 0x1c8b5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 8));
    // 0x1c8b60: 0x118a3e  dsrl32      $s1, $s1, 8
    ctx->pc = 0x1c8b60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 8));
    // 0x1c8b64: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c8b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c8b68:
    // 0x1c8b68: 0x8fa30350  lw          $v1, 0x350($sp)
    ctx->pc = 0x1c8b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1c8b6c: 0x16a3000a  bne         $s5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8B6Cu;
    {
        const bool branch_taken_0x1c8b6c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B6Cu;
        // 0x1c8b70: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b6c) {
            ctx->pc = 0x1C8B98u;
            goto label_1c8b98;
        }
    }
    ctx->pc = 0x1C8B74u;
    // 0x1c8b74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8b78: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c8b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8b7c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c8b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8b80: 0x11923c  dsll32      $s2, $s1, 8
    ctx->pc = 0x1c8b80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 8));
    // 0x1c8b84: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x1c8b84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
    // 0x1c8b88: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x1c8b88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x1c8b8c: 0x2518825  or          $s1, $s2, $s1
    ctx->pc = 0x1c8b8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x1c8b90: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c8b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1c8b94: 0x0  nop
    ctx->pc = 0x1c8b94u;
    // NOP
label_1c8b98:
    // 0x1c8b98: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x1c8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1c8b9c: 0x16a3000a  bne         $s5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8B9Cu;
    {
        const bool branch_taken_0x1c8b9c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B9Cu;
        // 0x1c8ba0: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b9c) {
            ctx->pc = 0x1C8BC8u;
            goto label_1c8bc8;
        }
    }
    ctx->pc = 0x1C8BA4u;
    // 0x1c8ba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8ba8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8bac: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c8bacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8bb0: 0x11923c  dsll32      $s2, $s1, 8
    ctx->pc = 0x1c8bb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 8));
    // 0x1c8bb4: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x1c8bb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
    // 0x1c8bb8: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x1c8bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x1c8bbc: 0x2518825  or          $s1, $s2, $s1
    ctx->pc = 0x1c8bbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x1c8bc0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c8bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1c8bc4: 0x0  nop
    ctx->pc = 0x1c8bc4u;
    // NOP
label_1c8bc8:
    // 0x1c8bc8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8bcc: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8bccu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8bd0: 0x24030715  addiu       $v1, $zero, 0x715
    ctx->pc = 0x1c8bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1813));
    // 0x1c8bd4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8BD4u;
    {
        const bool branch_taken_0x1c8bd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BD4u;
        // 0x1c8bd8: 0x24030075  addiu       $v1, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8bd4) {
            ctx->pc = 0x1C8BE8u;
            goto label_1c8be8;
        }
    }
    ctx->pc = 0x1C8BDCu;
    // 0x1c8bdc: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8BDCu;
    {
        const bool branch_taken_0x1c8bdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8bdc) {
            ctx->pc = 0x1C8C00u;
            goto label_1c8c00;
        }
    }
    ctx->pc = 0x1C8BE4u;
    // 0x1c8be4: 0x0  nop
    ctx->pc = 0x1c8be4u;
    // NOP
label_1c8be8:
    // 0x1c8be8: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c8bec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8bf0: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8bf4: 0x7ba30240  lq          $v1, 0x240($sp)
    ctx->pc = 0x1c8bf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c8bf8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c8bfc: 0x0  nop
    ctx->pc = 0x1c8bfcu;
    // NOP
label_1c8c00:
    // 0x1c8c00: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8c04: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8c04u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8c08: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x1c8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1c8c0c: 0x16230020  bne         $s1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C8C0Cu;
    {
        const bool branch_taken_0x1c8c0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C0Cu;
        // 0x1c8c10: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c0c) {
            ctx->pc = 0x1C8C90u;
            goto label_1c8c90;
        }
    }
    ctx->pc = 0x1C8C14u;
    // 0x1c8c14: 0x2aa10060  slti        $at, $s5, 0x60
    ctx->pc = 0x1c8c14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1c8c18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8c1c: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8c20: 0x7ba30230  lq          $v1, 0x230($sp)
    ctx->pc = 0x1c8c20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c8c24: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8C24u;
    {
        const bool branch_taken_0x1c8c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C24u;
        // 0x1c8c28: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c24) {
            ctx->pc = 0x1C8C48u;
            goto label_1c8c48;
        }
    }
    ctx->pc = 0x1C8C2Cu;
    // 0x1c8c2c: 0x2ac1002b  slti        $at, $s6, 0x2B
    ctx->pc = 0x1c8c2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)43) ? 1 : 0);
    // 0x1c8c30: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C8C30u;
    {
        const bool branch_taken_0x1c8c30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c30) {
            ctx->pc = 0x1C8C90u;
            goto label_1c8c90;
        }
    }
    ctx->pc = 0x1C8C38u;
    // 0x1c8c38: 0x7ba30220  lq          $v1, 0x220($sp)
    ctx->pc = 0x1c8c38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c8c3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8C3Cu;
    {
        const bool branch_taken_0x1c8c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C3Cu;
        // 0x1c8c40: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c3c) {
            ctx->pc = 0x1C8C90u;
            goto label_1c8c90;
        }
    }
    ctx->pc = 0x1C8C44u;
    // 0x1c8c44: 0x0  nop
    ctx->pc = 0x1c8c44u;
    // NOP
label_1c8c48:
    // 0x1c8c48: 0x8fb20330  lw          $s2, 0x330($sp)
    ctx->pc = 0x1c8c48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1c8c4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8c50: 0x2d29023  subu        $s2, $s6, $s2
    ctx->pc = 0x1c8c50u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1c8c54: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1c8c54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1c8c58: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1c8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1c8c5c: 0x729023  subu        $s2, $v1, $s2
    ctx->pc = 0x1c8c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1c8c60: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8C60u;
    {
        const bool branch_taken_0x1c8c60 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1c8c60) {
            ctx->pc = 0x1C8C70u;
            goto label_1c8c70;
        }
    }
    ctx->pc = 0x1C8C68u;
    // 0x1c8c68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c8c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c6c: 0x0  nop
    ctx->pc = 0x1c8c6cu;
    // NOP
label_1c8c70:
    // 0x1c8c70: 0x8fa30330  lw          $v1, 0x330($sp)
    ctx->pc = 0x1c8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1c8c74: 0x76082b  sltu        $at, $v1, $s6
    ctx->pc = 0x1c8c74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1c8c78: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8C78u;
    {
        const bool branch_taken_0x1c8c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c78) {
            ctx->pc = 0x1C8C90u;
            goto label_1c8c90;
        }
    }
    ctx->pc = 0x1C8C80u;
    // 0x1c8c80: 0x7ba30220  lq          $v1, 0x220($sp)
    ctx->pc = 0x1c8c80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c8c84: 0x129600  sll         $s2, $s2, 24
    ctx->pc = 0x1c8c84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x1c8c88: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x1c8c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1c8c8c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1c8c90:
    // 0x1c8c90: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8c94: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8c94u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8c98: 0x24030716  addiu       $v1, $zero, 0x716
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1814));
    // 0x1c8c9c: 0x16230010  bne         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C8C9Cu;
    {
        const bool branch_taken_0x1c8c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8c9c) {
            ctx->pc = 0x1C8CE0u;
            goto label_1c8ce0;
        }
    }
    ctx->pc = 0x1C8CA4u;
    // 0x1c8ca4: 0x8fb10390  lw          $s1, 0x390($sp)
    ctx->pc = 0x1c8ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1c8ca8: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c8cac: 0x7bb20210  lq          $s2, 0x210($sp)
    ctx->pc = 0x1c8cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c8cb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8cb4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8cb8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1c8cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1c8cbc: 0x8fb20390  lw          $s2, 0x390($sp)
    ctx->pc = 0x1c8cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1c8cc0: 0x2e410021  sltiu       $at, $s2, 0x21
    ctx->pc = 0x1c8cc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x1c8cc4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8CC4u;
    {
        const bool branch_taken_0x1c8cc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8cc4) {
            ctx->pc = 0x1C8CD0u;
            goto label_1c8cd0;
        }
    }
    ctx->pc = 0x1C8CCCu;
    // 0x1c8ccc: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c8cd0:
    // 0x1c8cd0: 0x119600  sll         $s2, $s1, 24
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x1c8cd4: 0x7bb10290  lq          $s1, 0x290($sp)
    ctx->pc = 0x1c8cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1c8cd8: 0x2518825  or          $s1, $s2, $s1
    ctx->pc = 0x1c8cd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x1c8cdc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c8cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c8ce0:
    // 0x1c8ce0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8ce4: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8ce4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8ce8: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x1c8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1c8cec: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8CECu;
    {
        const bool branch_taken_0x1c8cec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CECu;
        // 0x1c8cf0: 0x24030718  addiu       $v1, $zero, 0x718 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cec) {
            ctx->pc = 0x1C8D08u;
            goto label_1c8d08;
        }
    }
    ctx->pc = 0x1C8CF4u;
    // 0x1c8cf4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8CF4u;
    {
        const bool branch_taken_0x1c8cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8cf4) {
            ctx->pc = 0x1C8D08u;
            goto label_1c8d08;
        }
    }
    ctx->pc = 0x1C8CFCu;
    // 0x1c8cfc: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1c8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1c8d00: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8D00u;
    {
        const bool branch_taken_0x1c8d00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8d00) {
            ctx->pc = 0x1C8D20u;
            goto label_1c8d20;
        }
    }
    ctx->pc = 0x1C8D08u;
label_1c8d08:
    // 0x1c8d08: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c8d0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8d10: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8d14: 0x7ba30200  lq          $v1, 0x200($sp)
    ctx->pc = 0x1c8d14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1c8d18: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c8d1c: 0x0  nop
    ctx->pc = 0x1c8d1cu;
    // NOP
label_1c8d20:
    // 0x1c8d20: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8d24: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8d24u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8d28: 0x2403071b  addiu       $v1, $zero, 0x71B
    ctx->pc = 0x1c8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1819));
    // 0x1c8d2c: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8D2Cu;
    {
        const bool branch_taken_0x1c8d2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D2Cu;
        // 0x1c8d30: 0x2403007b  addiu       $v1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d2c) {
            ctx->pc = 0x1C8D40u;
            goto label_1c8d40;
        }
    }
    ctx->pc = 0x1C8D34u;
    // 0x1c8d34: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8D34u;
    {
        const bool branch_taken_0x1c8d34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8d34) {
            ctx->pc = 0x1C8D58u;
            goto label_1c8d58;
        }
    }
    ctx->pc = 0x1C8D3Cu;
    // 0x1c8d3c: 0x0  nop
    ctx->pc = 0x1c8d3cu;
    // NOP
label_1c8d40:
    // 0x1c8d40: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c8d44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8d48: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8d4c: 0x7ba30240  lq          $v1, 0x240($sp)
    ctx->pc = 0x1c8d4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c8d50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c8d54: 0x0  nop
    ctx->pc = 0x1c8d54u;
    // NOP
label_1c8d58:
    // 0x1c8d58: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8d5c: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8d5cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8d60: 0x24030804  addiu       $v1, $zero, 0x804
    ctx->pc = 0x1c8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    // 0x1c8d64: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8D64u;
    {
        const bool branch_taken_0x1c8d64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D64u;
        // 0x1c8d68: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d64) {
            ctx->pc = 0x1C8D80u;
            goto label_1c8d80;
        }
    }
    ctx->pc = 0x1C8D6Cu;
    // 0x1c8d6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8d70: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8d74: 0x7ba301f0  lq          $v1, 0x1F0($sp)
    ctx->pc = 0x1c8d74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1c8d78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c8d7c: 0x0  nop
    ctx->pc = 0x1c8d7cu;
    // NOP
label_1c8d80:
    // 0x1c8d80: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8d84: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8d84u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8d88: 0x24030805  addiu       $v1, $zero, 0x805
    ctx->pc = 0x1c8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    // 0x1c8d8c: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8D8Cu;
    {
        const bool branch_taken_0x1c8d8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D8Cu;
        // 0x1c8d90: 0x2403080c  addiu       $v1, $zero, 0x80C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d8c) {
            ctx->pc = 0x1C8DA0u;
            goto label_1c8da0;
        }
    }
    ctx->pc = 0x1C8D94u;
    // 0x1c8d94: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8D94u;
    {
        const bool branch_taken_0x1c8d94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8d94) {
            ctx->pc = 0x1C8DB8u;
            goto label_1c8db8;
        }
    }
    ctx->pc = 0x1C8D9Cu;
    // 0x1c8d9c: 0x0  nop
    ctx->pc = 0x1c8d9cu;
    // NOP
label_1c8da0:
    // 0x1c8da0: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c8da4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8da8: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8dac: 0x7ba30210  lq          $v1, 0x210($sp)
    ctx->pc = 0x1c8dacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c8db0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c8db4: 0x0  nop
    ctx->pc = 0x1c8db4u;
    // NOP
label_1c8db8:
    // 0x1c8db8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8dbc: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8dbcu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8dc0: 0x24030204  addiu       $v1, $zero, 0x204
    ctx->pc = 0x1c8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x1c8dc4: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8DC4u;
    {
        const bool branch_taken_0x1c8dc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DC4u;
        // 0x1c8dc8: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dc4) {
            ctx->pc = 0x1C8DE0u;
            goto label_1c8de0;
        }
    }
    ctx->pc = 0x1C8DCCu;
    // 0x1c8dcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8dd0: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8dd4: 0x7ba301e0  lq          $v1, 0x1E0($sp)
    ctx->pc = 0x1c8dd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1c8dd8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c8ddc: 0x0  nop
    ctx->pc = 0x1c8ddcu;
    // NOP
label_1c8de0:
    // 0x1c8de0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8de4: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8de4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8de8: 0x2403050a  addiu       $v1, $zero, 0x50A
    ctx->pc = 0x1c8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x1c8dec: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8DECu;
    {
        const bool branch_taken_0x1c8dec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DECu;
        // 0x1c8df0: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dec) {
            ctx->pc = 0x1C8E00u;
            goto label_1c8e00;
        }
    }
    ctx->pc = 0x1C8DF4u;
    // 0x1c8df4: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8DF4u;
    {
        const bool branch_taken_0x1c8df4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8df4) {
            ctx->pc = 0x1C8E18u;
            goto label_1c8e18;
        }
    }
    ctx->pc = 0x1C8DFCu;
    // 0x1c8dfc: 0x0  nop
    ctx->pc = 0x1c8dfcu;
    // NOP
label_1c8e00:
    // 0x1c8e00: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c8e04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8e08: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x1c8e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8e0c: 0x7ba301d0  lq          $v1, 0x1D0($sp)
    ctx->pc = 0x1c8e0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1c8e10: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c8e14: 0x0  nop
    ctx->pc = 0x1c8e14u;
    // NOP
label_1c8e18:
    // 0x1c8e18: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8e1c: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8e1cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8e20: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1c8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1c8e24: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8E24u;
    {
        const bool branch_taken_0x1c8e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E24u;
        // 0x1c8e28: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e24) {
            ctx->pc = 0x1C8E38u;
            goto label_1c8e38;
        }
    }
    ctx->pc = 0x1C8E2Cu;
    // 0x1c8e2c: 0x16230046  bne         $s1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1C8E2Cu;
    {
        const bool branch_taken_0x1c8e2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8e2c) {
            ctx->pc = 0x1C8F48u;
            goto label_1c8f48;
        }
    }
    ctx->pc = 0x1C8E34u;
    // 0x1c8e34: 0x0  nop
    ctx->pc = 0x1c8e34u;
    // NOP
label_1c8e38:
    // 0x1c8e38: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c8e3c: 0x44963000  mtc1        $s6, $f6
    ctx->pc = 0x1c8e3cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8e40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8e44: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8e48: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1c8e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1c8e4c: 0x46123181  sub.s       $f6, $f6, $f18
    ctx->pc = 0x1c8e4cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[18]);
    // 0x1c8e50: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x1c8e50u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1c8e54: 0x4606881a  mula.s      $f17, $f6
    ctx->pc = 0x1c8e54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[17], ctx->f[6]));
    // 0x1c8e58: 0x4610799c  madd.s      $f6, $f15, $f16
    ctx->pc = 0x1c8e58u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[15], ctx->f[16]));
    // 0x1c8e5c: 0x46060184  c1          0x60184
    ctx->pc = 0x1c8e5cu;
    ctx->f[6] = FPU_SQRT_S(ctx->f[6]);
    // 0x1c8e60: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x1c8e60u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x1c8e64: 0x46066981  sub.s       $f6, $f13, $f6
    ctx->pc = 0x1c8e64u;
    ctx->f[6] = FPU_SUB_S(ctx->f[13], ctx->f[6]);
    // 0x1c8e68: 0x46066180  add.s       $f6, $f12, $f6
    ctx->pc = 0x1c8e68u;
    ctx->f[6] = FPU_ADD_S(ctx->f[12], ctx->f[6]);
    // 0x1c8e6c: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c8e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x1c8e70: 0x44123000  mfc1        $s2, $f6
    ctx->pc = 0x1c8e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1c8e74: 0x0  nop
    ctx->pc = 0x1c8e74u;
    // NOP
    // 0x1c8e78: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8E78u;
    {
        const bool branch_taken_0x1c8e78 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1C8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E78u;
        // 0x1c8e7c: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e78) {
            ctx->pc = 0x1C8E88u;
            goto label_1c8e88;
        }
    }
    ctx->pc = 0x1C8E80u;
    // 0x1c8e80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c8e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e84: 0x0  nop
    ctx->pc = 0x1c8e84u;
    // NOP
label_1c8e88:
    // 0x1c8e88: 0x44963000  mtc1        $s6, $f6
    ctx->pc = 0x1c8e88u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8e8c: 0x0  nop
    ctx->pc = 0x1c8e8cu;
    // NOP
    // 0x1c8e90: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1c8e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1c8e94: 0x460b3181  sub.s       $f6, $f6, $f11
    ctx->pc = 0x1c8e94u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[11]);
    // 0x1c8e98: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x1c8e98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x1c8e9c: 0x461ad19c  madd.s      $f6, $f26, $f26
    ctx->pc = 0x1c8e9cu;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[26], ctx->f[26]));
    // 0x1c8ea0: 0x46060184  c1          0x60184
    ctx->pc = 0x1c8ea0u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[6]);
    // 0x1c8ea4: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x1c8ea4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x1c8ea8: 0x46066981  sub.s       $f6, $f13, $f6
    ctx->pc = 0x1c8ea8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[13], ctx->f[6]);
    // 0x1c8eac: 0x46065180  add.s       $f6, $f10, $f6
    ctx->pc = 0x1c8eacu;
    ctx->f[6] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x1c8eb0: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c8eb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x1c8eb4: 0x44113000  mfc1        $s1, $f6
    ctx->pc = 0x1c8eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1c8eb8: 0x0  nop
    ctx->pc = 0x1c8eb8u;
    // NOP
    // 0x1c8ebc: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8EBCu;
    {
        const bool branch_taken_0x1c8ebc = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1c8ebc) {
            ctx->pc = 0x1C8EC8u;
            goto label_1c8ec8;
        }
    }
    ctx->pc = 0x1C8EC4u;
    // 0x1c8ec4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8ec8:
    // 0x1c8ec8: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x1c8ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1c8ecc: 0x44963000  mtc1        $s6, $f6
    ctx->pc = 0x1c8eccu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8ed0: 0x0  nop
    ctx->pc = 0x1c8ed0u;
    // NOP
    // 0x1c8ed4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1c8ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1c8ed8: 0x46093181  sub.s       $f6, $f6, $f9
    ctx->pc = 0x1c8ed8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x1c8edc: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x1c8edcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x1c8ee0: 0x4619c99c  madd.s      $f6, $f25, $f25
    ctx->pc = 0x1c8ee0u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x1c8ee4: 0x46060184  c1          0x60184
    ctx->pc = 0x1c8ee4u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[6]);
    // 0x1c8ee8: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x1c8ee8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x1c8eec: 0x46066981  sub.s       $f6, $f13, $f6
    ctx->pc = 0x1c8eecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[13], ctx->f[6]);
    // 0x1c8ef0: 0x46064180  add.s       $f6, $f8, $f6
    ctx->pc = 0x1c8ef0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x1c8ef4: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c8ef4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x1c8ef8: 0x44113000  mfc1        $s1, $f6
    ctx->pc = 0x1c8ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1c8efc: 0x0  nop
    ctx->pc = 0x1c8efcu;
    // NOP
    // 0x1c8f00: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8F00u;
    {
        const bool branch_taken_0x1c8f00 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1c8f00) {
            ctx->pc = 0x1C8F10u;
            goto label_1c8f10;
        }
    }
    ctx->pc = 0x1C8F08u;
    // 0x1c8f08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f0c: 0x0  nop
    ctx->pc = 0x1c8f0cu;
    // NOP
label_1c8f10:
    // 0x1c8f10: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x1c8f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1c8f14: 0x2a410081  slti        $at, $s2, 0x81
    ctx->pc = 0x1c8f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c8f18: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8F18u;
    {
        const bool branch_taken_0x1c8f18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f18) {
            ctx->pc = 0x1C8F28u;
            goto label_1c8f28;
        }
    }
    ctx->pc = 0x1C8F20u;
    // 0x1c8f20: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1c8f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c8f24: 0x0  nop
    ctx->pc = 0x1c8f24u;
    // NOP
label_1c8f28:
    // 0x1c8f28: 0x128940  sll         $s1, $s2, 5
    ctx->pc = 0x1c8f28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1c8f2c: 0x1191c3  sra         $s2, $s1, 7
    ctx->pc = 0x1c8f2cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 17), 7));
    // 0x1c8f30: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c8f30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8f34: 0x129600  sll         $s2, $s2, 24
    ctx->pc = 0x1c8f34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x1c8f38: 0x118a3c  dsll32      $s1, $s1, 8
    ctx->pc = 0x1c8f38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 8));
    // 0x1c8f3c: 0x118a3e  dsrl32      $s1, $s1, 8
    ctx->pc = 0x1c8f3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 8));
    // 0x1c8f40: 0x2518825  or          $s1, $s2, $s1
    ctx->pc = 0x1c8f40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x1c8f44: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c8f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c8f48:
    // 0x1c8f48: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8f4c: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c8f4cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8f50: 0x2403030a  addiu       $v1, $zero, 0x30A
    ctx->pc = 0x1c8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x1c8f54: 0x16230056  bne         $s1, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1C8F54u;
    {
        const bool branch_taken_0x1c8f54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F54u;
        // 0x1c8f58: 0x2ce1821  addu        $v1, $s6, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f54) {
            ctx->pc = 0x1C90B0u;
            goto label_1c90b0;
        }
    }
    ctx->pc = 0x1C8F5Cu;
    // 0x1c8f5c: 0x79110000  lq          $s1, 0x0($t0)
    ctx->pc = 0x1c8f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c8f60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8f64: 0x79170010  lq          $s7, 0x10($t0)
    ctx->pc = 0x1c8f64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1c8f68: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x1c8f68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c8f6c: 0x791e0020  lq          $fp, 0x20($t0)
    ctx->pc = 0x1c8f6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1c8f70: 0xdd030030  ld          $v1, 0x30($t0)
    ctx->pc = 0x1c8f70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1c8f74: 0x27b303f0  addiu       $s3, $sp, 0x3F0
    ctx->pc = 0x1c8f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x1c8f78: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x1c8f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x1c8f7c: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x1c8f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x1c8f80: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1c8f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f84: 0x7c710000  sq          $s1, 0x0($v1)
    ctx->pc = 0x1c8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 17));
    // 0x1c8f88: 0x7c770010  sq          $s7, 0x10($v1)
    ctx->pc = 0x1c8f88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 23));
    // 0x1c8f8c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1c8f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f90: 0x7c7e0020  sq          $fp, 0x20($v1)
    ctx->pc = 0x1c8f90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 30));
    // 0x1c8f94: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x1c8f94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c8f98: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x1c8f98u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x1c8f9c: 0xc5060038  lwc1        $f6, 0x38($t0)
    ctx->pc = 0x1c8f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c8fa0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1c8fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fa4: 0xe4660038  swc1        $f6, 0x38($v1)
    ctx->pc = 0x1c8fa4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1c8fa8: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x1c8fa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c8fac: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1c8facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1c8fb0: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x1c8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x1c8fb4: 0xc7a603f0  lwc1        $f6, 0x3F0($sp)
    ctx->pc = 0x1c8fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c8fb8: 0x46063832  c.eq.s      $f7, $f6
    ctx->pc = 0x1c8fb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8fbc: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x1C8FBCu;
    {
        const bool branch_taken_0x1c8fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8fbc) {
            ctx->pc = 0x1C9058u;
            goto label_1c9058;
        }
    }
    ctx->pc = 0x1C8FC4u;
    // 0x1c8fc4: 0x44963000  mtc1        $s6, $f6
    ctx->pc = 0x1c8fc4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c8fc8: 0x0  nop
    ctx->pc = 0x1c8fc8u;
    // NOP
    // 0x1c8fcc: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1c8fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_1c8fd0:
    // 0x1c8fd0: 0xc67e0000  lwc1        $f30, 0x0($s3)
    ctx->pc = 0x1c8fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1c8fd4: 0xc67c0004  lwc1        $f28, 0x4($s3)
    ctx->pc = 0x1c8fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1c8fd8: 0xc67f0008  lwc1        $f31, 0x8($s3)
    ctx->pc = 0x1c8fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x1c8fdc: 0x4606f781  sub.s       $f30, $f30, $f6
    ctx->pc = 0x1c8fdcu;
    ctx->f[30] = FPU_SUB_S(ctx->f[30], ctx->f[6]);
    // 0x1c8fe0: 0x461ef01a  mula.s      $f30, $f30
    ctx->pc = 0x1c8fe0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[30], ctx->f[30]));
    // 0x1c8fe4: 0x4617e701  sub.s       $f28, $f28, $f23
    ctx->pc = 0x1c8fe4u;
    ctx->f[28] = FPU_SUB_S(ctx->f[28], ctx->f[23]);
    // 0x1c8fe8: 0x461ce71c  madd.s      $f28, $f28, $f28
    ctx->pc = 0x1c8fe8u;
    ctx->f[28] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[28], ctx->f[28]));
    // 0x1c8fec: 0x461c0704  c1          0x1C0704
    ctx->pc = 0x1c8fecu;
    ctx->f[28] = FPU_SQRT_S(ctx->f[28]);
    // 0x1c8ff0: 0xc7be00d4  lwc1        $f30, 0xD4($sp)
    ctx->pc = 0x1c8ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1c8ff4: 0x461ff782  mul.s       $f30, $f30, $f31
    ctx->pc = 0x1c8ff4u;
    ctx->f[30] = FPU_MUL_S(ctx->f[30], ctx->f[31]);
    // 0x1c8ff8: 0x461ee703  div.s       $f28, $f28, $f30
    ctx->pc = 0x1c8ff8u;
    { if (ctx->f[30] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[28] = FPU_DIV_S(ctx->f[28], ctx->f[30]); }
    // 0x1c8ffc: 0x0  nop
    ctx->pc = 0x1c8ffcu;
    // NOP
    // 0x1c9000: 0x461c2f01  sub.s       $f28, $f5, $f28
    ctx->pc = 0x1c9000u;
    ctx->f[28] = FPU_SUB_S(ctx->f[5], ctx->f[28]);
    // 0x1c9004: 0x4604e034  c.lt.s      $f28, $f4
    ctx->pc = 0x1c9004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9008: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9008u;
    {
        const bool branch_taken_0x1c9008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9008) {
            ctx->pc = 0x1C9018u;
            goto label_1c9018;
        }
    }
    ctx->pc = 0x1C9010u;
    // 0x1c9010: 0x46002706  mov.s       $f28, $f4
    ctx->pc = 0x1c9010u;
    ctx->f[28] = FPU_MOV_S(ctx->f[4]);
    // 0x1c9014: 0x0  nop
    ctx->pc = 0x1c9014u;
    // NOP
label_1c9018:
    // 0x1c9018: 0x4605e036  c.le.s      $f28, $f5
    ctx->pc = 0x1c9018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[28], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c901c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C901Cu;
    {
        const bool branch_taken_0x1c901c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c901c) {
            ctx->pc = 0x1C9028u;
            goto label_1c9028;
        }
    }
    ctx->pc = 0x1C9024u;
    // 0x1c9024: 0x46002f06  mov.s       $f28, $f5
    ctx->pc = 0x1c9024u;
    ctx->f[28] = FPU_MOV_S(ctx->f[5]);
label_1c9028:
    // 0x1c9028: 0x461cef40  add.s       $f29, $f29, $f28
    ctx->pc = 0x1c9028u;
    ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[28]);
    // 0x1c902c: 0x4605e836  c.le.s      $f29, $f5
    ctx->pc = 0x1c902cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[29], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9030: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9030u;
    {
        const bool branch_taken_0x1c9030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9030) {
            ctx->pc = 0x1C9040u;
            goto label_1c9040;
        }
    }
    ctx->pc = 0x1C9038u;
    // 0x1c9038: 0x46002f46  mov.s       $f29, $f5
    ctx->pc = 0x1c9038u;
    ctx->f[29] = FPU_MOV_S(ctx->f[5]);
    // 0x1c903c: 0x0  nop
    ctx->pc = 0x1c903cu;
    // NOP
label_1c9040:
    // 0x1c9040: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1c9040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1c9044: 0xc67c0000  lwc1        $f28, 0x0($s3)
    ctx->pc = 0x1c9044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1c9048: 0x461c3832  c.eq.s      $f7, $f28
    ctx->pc = 0x1c9048u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c904c: 0x4500ffe0  bc1f        . + 4 + (-0x20 << 2)
    ctx->pc = 0x1C904Cu;
    {
        const bool branch_taken_0x1c904c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c904c) {
            ctx->pc = 0x1C8FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8fd0;
        }
    }
    ctx->pc = 0x1C9054u;
    // 0x1c9054: 0x0  nop
    ctx->pc = 0x1c9054u;
    // NOP
label_1c9058:
    // 0x1c9058: 0x4603ef42  mul.s       $f29, $f29, $f3
    ctx->pc = 0x1c9058u;
    ctx->f[29] = FPU_MUL_S(ctx->f[29], ctx->f[3]);
    // 0x1c905c: 0x461d6982  mul.s       $f6, $f13, $f29
    ctx->pc = 0x1c905cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[13], ctx->f[29]);
    // 0x1c9060: 0x46061036  c.le.s      $f2, $f6
    ctx->pc = 0x1c9060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9064: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9064u;
    {
        const bool branch_taken_0x1c9064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9064) {
            ctx->pc = 0x1C907Cu;
            goto label_1c907c;
        }
    }
    ctx->pc = 0x1C906Cu;
    // 0x1c906c: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c906cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x1c9070: 0x44113000  mfc1        $s1, $f6
    ctx->pc = 0x1c9070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1c9074: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9074u;
    {
        const bool branch_taken_0x1c9074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9074u;
        // 0x1c9078: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9074) {
            ctx->pc = 0x1C9098u;
            goto label_1c9098;
        }
    }
    ctx->pc = 0x1C907Cu;
label_1c907c:
    // 0x1c907c: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x1c907cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x1c9080: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c9080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c9084: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x1c9088: 0x44113000  mfc1        $s1, $f6
    ctx->pc = 0x1c9088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1c908c: 0x0  nop
    ctx->pc = 0x1c908cu;
    // NOP
    // 0x1c9090: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x1c9090u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1c9094: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c9094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c9098:
    // 0x1c9098: 0x118e00  sll         $s1, $s1, 24
    ctx->pc = 0x1c9098u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x1c909c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1c90a0: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c90a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1c90a4: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x1c90a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1c90a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1c90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1c90ac: 0x0  nop
    ctx->pc = 0x1c90acu;
    // NOP
label_1c90b0:
    // 0x1c90b0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c90b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c90b4: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c90b4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c90b8: 0x24030306  addiu       $v1, $zero, 0x306
    ctx->pc = 0x1c90b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    // 0x1c90bc: 0x16230020  bne         $s1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C90BCu;
    {
        const bool branch_taken_0x1c90bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c90bc) {
            ctx->pc = 0x1C9140u;
            goto label_1c9140;
        }
    }
    ctx->pc = 0x1C90C4u;
    // 0x1c90c4: 0x44963000  mtc1        $s6, $f6
    ctx->pc = 0x1c90c4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c90c8: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c90cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c90d0: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1c90d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1c90d4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c90d8: 0x4606a981  sub.s       $f6, $f21, $f6
    ctx->pc = 0x1c90d8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[21], ctx->f[6]);
    // 0x1c90dc: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x1c90dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x1c90e0: 0x4618c19c  madd.s      $f6, $f24, $f24
    ctx->pc = 0x1c90e0u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[24], ctx->f[24]));
    // 0x1c90e4: 0x46060184  c1          0x60184
    ctx->pc = 0x1c90e4u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[6]);
    // 0x1c90e8: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x1c90e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
    // 0x1c90ec: 0x46066981  sub.s       $f6, $f13, $f6
    ctx->pc = 0x1c90ecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[13], ctx->f[6]);
    // 0x1c90f0: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c90f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x1c90f4: 0x44113000  mfc1        $s1, $f6
    ctx->pc = 0x1c90f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1c90f8: 0x0  nop
    ctx->pc = 0x1c90f8u;
    // NOP
    // 0x1c90fc: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C90FCu;
    {
        const bool branch_taken_0x1c90fc = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1C9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90FCu;
        // 0x1c9100: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90fc) {
            ctx->pc = 0x1C9108u;
            goto label_1c9108;
        }
    }
    ctx->pc = 0x1C9104u;
    // 0x1c9104: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9108:
    // 0x1c9108: 0x2318818  mult        $s1, $s1, $s1
    ctx->pc = 0x1c9108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c910c: 0x1189c3  sra         $s1, $s1, 7
    ctx->pc = 0x1c910cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 7));
    // 0x1c9110: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1c9110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c9114: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c9114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9118: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9118u;
    {
        const bool branch_taken_0x1c9118 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9118) {
            ctx->pc = 0x1C9128u;
            goto label_1c9128;
        }
    }
    ctx->pc = 0x1C9120u;
    // 0x1c9120: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9124: 0x0  nop
    ctx->pc = 0x1c9124u;
    // NOP
label_1c9128:
    // 0x1c9128: 0x119600  sll         $s2, $s1, 24
    ctx->pc = 0x1c9128u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x1c912c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c912cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9130: 0x118a3c  dsll32      $s1, $s1, 8
    ctx->pc = 0x1c9130u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 8));
    // 0x1c9134: 0x118a3e  dsrl32      $s1, $s1, 8
    ctx->pc = 0x1c9134u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 8));
    // 0x1c9138: 0x2518825  or          $s1, $s2, $s1
    ctx->pc = 0x1c9138u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 17));
    // 0x1c913c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c913cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c9140:
    // 0x1c9140: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c9140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c9144: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c9144u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c9148: 0x2623fcfa  addiu       $v1, $s1, -0x306
    ctx->pc = 0x1c9148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966522));
    // 0x1c914c: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x1c914cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c9150: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9150u;
    {
        const bool branch_taken_0x1c9150 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9150u;
        // 0x1c9154: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9150) {
            ctx->pc = 0x1C9170u;
            goto label_1c9170;
        }
    }
    ctx->pc = 0x1C9158u;
    // 0x1c9158: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9158u;
    {
        const bool branch_taken_0x1c9158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9158) {
            ctx->pc = 0x1C9170u;
            goto label_1c9170;
        }
    }
    ctx->pc = 0x1C9160u;
    // 0x1c9160: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1c9160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c9164: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9164u;
    {
        const bool branch_taken_0x1c9164 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9164) {
            ctx->pc = 0x1C9180u;
            goto label_1c9180;
        }
    }
    ctx->pc = 0x1C916Cu;
    // 0x1c916c: 0x0  nop
    ctx->pc = 0x1c916cu;
    // NOP
label_1c9170:
    // 0x1c9170: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c9170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9178: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c9178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c917c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1c917cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_1c9180:
    // 0x1c9180: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c9180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c9184: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c9184u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c9188: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1c9188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1c918c: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C918Cu;
    {
        const bool branch_taken_0x1c918c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C918Cu;
        // 0x1c9190: 0x24030410  addiu       $v1, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c918c) {
            ctx->pc = 0x1C91A0u;
            goto label_1c91a0;
        }
    }
    ctx->pc = 0x1C9194u;
    // 0x1c9194: 0x16230082  bne         $s1, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1C9194u;
    {
        const bool branch_taken_0x1c9194 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9194) {
            ctx->pc = 0x1C93A0u;
            goto label_1c93a0;
        }
    }
    ctx->pc = 0x1C919Cu;
    // 0x1c919c: 0x0  nop
    ctx->pc = 0x1c919cu;
    // NOP
label_1c91a0:
    // 0x1c91a0: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1c91a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c91a4: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c91a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c91a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c91ac: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c91acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c91b0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c91b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1c91b4: 0x8cb2001c  lw          $s2, 0x1C($a1)
    ctx->pc = 0x1c91b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1c91b8: 0x8cb10020  lw          $s1, 0x20($a1)
    ctx->pc = 0x1c91b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1c91bc: 0x251082b  sltu        $at, $s2, $s1
    ctx->pc = 0x1c91bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c91c0: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x1C91C0u;
    {
        const bool branch_taken_0x1c91c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c91c0) {
            ctx->pc = 0x1C9350u;
            goto label_1c9350;
        }
    }
    ctx->pc = 0x1C91C8u;
    // 0x1c91c8: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C91C8u;
    {
        const bool branch_taken_0x1c91c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c91c8) {
            ctx->pc = 0x1C91D8u;
            goto label_1c91d8;
        }
    }
    ctx->pc = 0x1C91D0u;
    // 0x1c91d0: 0x16cd0003  bne         $s6, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C91D0u;
    {
        const bool branch_taken_0x1c91d0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 13));
        if (branch_taken_0x1c91d0) {
            ctx->pc = 0x1C91E0u;
            goto label_1c91e0;
        }
    }
    ctx->pc = 0x1C91D8u;
label_1c91d8:
    // 0x1c91d8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1c91dc: 0x0  nop
    ctx->pc = 0x1c91dcu;
    // NOP
label_1c91e0:
    // 0x1c91e0: 0x2411006d  addiu       $s1, $zero, 0x6D
    ctx->pc = 0x1c91e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x1c91e4: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C91E4u;
    {
        const bool branch_taken_0x1c91e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91E4u;
        // 0x1c91e8: 0x2411006e  addiu       $s1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91e4) {
            ctx->pc = 0x1C91F8u;
            goto label_1c91f8;
        }
    }
    ctx->pc = 0x1C91ECu;
    // 0x1c91ec: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C91ECu;
    {
        const bool branch_taken_0x1c91ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c91ec) {
            ctx->pc = 0x1C9218u;
            goto label_1c9218;
        }
    }
    ctx->pc = 0x1C91F4u;
    // 0x1c91f4: 0x0  nop
    ctx->pc = 0x1c91f4u;
    // NOP
label_1c91f8:
    // 0x1c91f8: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c91f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c91fc: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c91fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9200: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9204: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c9204u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9208: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c9208u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c920c: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c920cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c9210: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c9210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c9214: 0x0  nop
    ctx->pc = 0x1c9214u;
    // NOP
label_1c9218:
    // 0x1c9218: 0x2411007b  addiu       $s1, $zero, 0x7B
    ctx->pc = 0x1c9218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x1c921c: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C921Cu;
    {
        const bool branch_taken_0x1c921c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C921Cu;
        // 0x1c9220: 0x2411007c  addiu       $s1, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c921c) {
            ctx->pc = 0x1C9230u;
            goto label_1c9230;
        }
    }
    ctx->pc = 0x1C9224u;
    // 0x1c9224: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9224u;
    {
        const bool branch_taken_0x1c9224 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c9224) {
            ctx->pc = 0x1C9250u;
            goto label_1c9250;
        }
    }
    ctx->pc = 0x1C922Cu;
    // 0x1c922c: 0x0  nop
    ctx->pc = 0x1c922cu;
    // NOP
label_1c9230:
    // 0x1c9230: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9234: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c9234u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9238: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c923c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c923cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9240: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c9240u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c9244: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c9244u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c9248: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c9248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c924c: 0x0  nop
    ctx->pc = 0x1c924cu;
    // NOP
label_1c9250:
    // 0x1c9250: 0x2411008a  addiu       $s1, $zero, 0x8A
    ctx->pc = 0x1c9250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x1c9254: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9254u;
    {
        const bool branch_taken_0x1c9254 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9254u;
        // 0x1c9258: 0x2411008b  addiu       $s1, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9254) {
            ctx->pc = 0x1C9268u;
            goto label_1c9268;
        }
    }
    ctx->pc = 0x1C925Cu;
    // 0x1c925c: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C925Cu;
    {
        const bool branch_taken_0x1c925c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c925c) {
            ctx->pc = 0x1C9288u;
            goto label_1c9288;
        }
    }
    ctx->pc = 0x1C9264u;
    // 0x1c9264: 0x0  nop
    ctx->pc = 0x1c9264u;
    // NOP
label_1c9268:
    // 0x1c9268: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c926c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c926cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9270: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9274: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c9274u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9278: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c9278u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c927c: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c927cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c9280: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c9280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c9284: 0x0  nop
    ctx->pc = 0x1c9284u;
    // NOP
label_1c9288:
    // 0x1c9288: 0x24110098  addiu       $s1, $zero, 0x98
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1c928c: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C928Cu;
    {
        const bool branch_taken_0x1c928c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C928Cu;
        // 0x1c9290: 0x24110099  addiu       $s1, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c928c) {
            ctx->pc = 0x1C92A0u;
            goto label_1c92a0;
        }
    }
    ctx->pc = 0x1C9294u;
    // 0x1c9294: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9294u;
    {
        const bool branch_taken_0x1c9294 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c9294) {
            ctx->pc = 0x1C92C0u;
            goto label_1c92c0;
        }
    }
    ctx->pc = 0x1C929Cu;
    // 0x1c929c: 0x0  nop
    ctx->pc = 0x1c929cu;
    // NOP
label_1c92a0:
    // 0x1c92a0: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c92a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c92a4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c92a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c92a8: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c92a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c92ac: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c92acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c92b0: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c92b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c92b4: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c92b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c92b8: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c92bc: 0x0  nop
    ctx->pc = 0x1c92bcu;
    // NOP
label_1c92c0:
    // 0x1c92c0: 0x241100a7  addiu       $s1, $zero, 0xA7
    ctx->pc = 0x1c92c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x1c92c4: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C92C4u;
    {
        const bool branch_taken_0x1c92c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92C4u;
        // 0x1c92c8: 0x241100a8  addiu       $s1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92c4) {
            ctx->pc = 0x1C92D8u;
            goto label_1c92d8;
        }
    }
    ctx->pc = 0x1C92CCu;
    // 0x1c92cc: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C92CCu;
    {
        const bool branch_taken_0x1c92cc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c92cc) {
            ctx->pc = 0x1C92F8u;
            goto label_1c92f8;
        }
    }
    ctx->pc = 0x1C92D4u;
    // 0x1c92d4: 0x0  nop
    ctx->pc = 0x1c92d4u;
    // NOP
label_1c92d8:
    // 0x1c92d8: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c92d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c92dc: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c92dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c92e0: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c92e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c92e4: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c92e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c92e8: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c92e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c92ec: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c92ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c92f0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c92f4: 0x0  nop
    ctx->pc = 0x1c92f4u;
    // NOP
label_1c92f8:
    // 0x1c92f8: 0x2ad10002  slti        $s1, $s6, 0x2
    ctx->pc = 0x1c92f8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c92fc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C92FCu;
    {
        const bool branch_taken_0x1c92fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c92fc) {
            ctx->pc = 0x1C9318u;
            goto label_1c9318;
        }
    }
    ctx->pc = 0x1C9304u;
    // 0x1c9304: 0x8fb10370  lw          $s1, 0x370($sp)
    ctx->pc = 0x1c9304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1c9308: 0x2d1882b  sltu        $s1, $s6, $s1
    ctx->pc = 0x1c9308u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c930c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C930Cu;
    {
        const bool branch_taken_0x1c930c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c930c) {
            ctx->pc = 0x1C9338u;
            goto label_1c9338;
        }
    }
    ctx->pc = 0x1C9314u;
    // 0x1c9314: 0x0  nop
    ctx->pc = 0x1c9314u;
    // NOP
label_1c9318:
    // 0x1c9318: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c931c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c931cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9320: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9324: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c9324u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9328: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c9328u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c932c: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c932cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c9330: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c9330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c9334: 0x0  nop
    ctx->pc = 0x1c9334u;
    // NOP
label_1c9338:
    // 0x1c9338: 0x16ac0019  bne         $s5, $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C9338u;
    {
        const bool branch_taken_0x1c9338 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 12));
        if (branch_taken_0x1c9338) {
            ctx->pc = 0x1C93A0u;
            goto label_1c93a0;
        }
    }
    ctx->pc = 0x1C9340u;
    // 0x1c9340: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x1c9340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1c9344: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C9344u;
    {
        const bool branch_taken_0x1c9344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9344u;
        // 0x1c9348: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9344) {
            ctx->pc = 0x1C93A0u;
            goto label_1c93a0;
        }
    }
    ctx->pc = 0x1C934Cu;
    // 0x1c934c: 0x0  nop
    ctx->pc = 0x1c934cu;
    // NOP
label_1c9350:
    // 0x1c9350: 0x2ac10081  slti        $at, $s6, 0x81
    ctx->pc = 0x1c9350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9354: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9354u;
    {
        const bool branch_taken_0x1c9354 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9354u;
        // 0x1c9358: 0x2ac10092  slti        $at, $s6, 0x92 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)146) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9354) {
            ctx->pc = 0x1C9380u;
            goto label_1c9380;
        }
    }
    ctx->pc = 0x1C935Cu;
    // 0x1c935c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C935Cu;
    {
        const bool branch_taken_0x1c935c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c935c) {
            ctx->pc = 0x1C9380u;
            goto label_1c9380;
        }
    }
    ctx->pc = 0x1C9364u;
    // 0x1c9364: 0x1aa00004  blez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9364u;
    {
        const bool branch_taken_0x1c9364 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x1c9364) {
            ctx->pc = 0x1C9378u;
            goto label_1c9378;
        }
    }
    ctx->pc = 0x1C936Cu;
    // 0x1c936c: 0x16ac000c  bne         $s5, $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x1C936Cu;
    {
        const bool branch_taken_0x1c936c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 12));
        if (branch_taken_0x1c936c) {
            ctx->pc = 0x1C93A0u;
            goto label_1c93a0;
        }
    }
    ctx->pc = 0x1C9374u;
    // 0x1c9374: 0x0  nop
    ctx->pc = 0x1c9374u;
    // NOP
label_1c9378:
    // 0x1c9378: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9378u;
    {
        const bool branch_taken_0x1c9378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9378u;
        // 0x1c937c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9378) {
            ctx->pc = 0x1C93A0u;
            goto label_1c93a0;
        }
    }
    ctx->pc = 0x1C9380u;
label_1c9380:
    // 0x1c9380: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x1c9380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c9384: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9384u;
    {
        const bool branch_taken_0x1c9384 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9384) {
            ctx->pc = 0x1C9398u;
            goto label_1c9398;
        }
    }
    ctx->pc = 0x1C938Cu;
    // 0x1c938c: 0x16ac0004  bne         $s5, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C938Cu;
    {
        const bool branch_taken_0x1c938c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 12));
        if (branch_taken_0x1c938c) {
            ctx->pc = 0x1C93A0u;
            goto label_1c93a0;
        }
    }
    ctx->pc = 0x1C9394u;
    // 0x1c9394: 0x0  nop
    ctx->pc = 0x1c9394u;
    // NOP
label_1c9398:
    // 0x1c9398: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c9398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1c939c: 0x0  nop
    ctx->pc = 0x1c939cu;
    // NOP
label_1c93a0:
    // 0x1c93a0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c93a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c93a4: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c93a4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c93a8: 0x24030403  addiu       $v1, $zero, 0x403
    ctx->pc = 0x1c93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x1c93ac: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C93ACu;
    {
        const bool branch_taken_0x1c93ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93ACu;
        // 0x1c93b0: 0x24030413  addiu       $v1, $zero, 0x413 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93ac) {
            ctx->pc = 0x1C93C0u;
            goto label_1c93c0;
        }
    }
    ctx->pc = 0x1C93B4u;
    // 0x1c93b4: 0x16230082  bne         $s1, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1C93B4u;
    {
        const bool branch_taken_0x1c93b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c93b4) {
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C93BCu;
    // 0x1c93bc: 0x0  nop
    ctx->pc = 0x1c93bcu;
    // NOP
label_1c93c0:
    // 0x1c93c0: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1c93c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c93c4: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c93c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c93cc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c93d0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c93d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1c93d4: 0x8cb2001c  lw          $s2, 0x1C($a1)
    ctx->pc = 0x1c93d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1c93d8: 0x8cb10020  lw          $s1, 0x20($a1)
    ctx->pc = 0x1c93d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1c93dc: 0x251082b  sltu        $at, $s2, $s1
    ctx->pc = 0x1c93dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c93e0: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x1C93E0u;
    {
        const bool branch_taken_0x1c93e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93e0) {
            ctx->pc = 0x1C9570u;
            goto label_1c9570;
        }
    }
    ctx->pc = 0x1C93E8u;
    // 0x1c93e8: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C93E8u;
    {
        const bool branch_taken_0x1c93e8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93e8) {
            ctx->pc = 0x1C93F8u;
            goto label_1c93f8;
        }
    }
    ctx->pc = 0x1C93F0u;
    // 0x1c93f0: 0x16cd0003  bne         $s6, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C93F0u;
    {
        const bool branch_taken_0x1c93f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 13));
        if (branch_taken_0x1c93f0) {
            ctx->pc = 0x1C9400u;
            goto label_1c9400;
        }
    }
    ctx->pc = 0x1C93F8u;
label_1c93f8:
    // 0x1c93f8: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x1c93f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c93fc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c93fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c9400:
    // 0x1c9400: 0x2411006d  addiu       $s1, $zero, 0x6D
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x1c9404: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9404u;
    {
        const bool branch_taken_0x1c9404 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9404u;
        // 0x1c9408: 0x2411006e  addiu       $s1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9404) {
            ctx->pc = 0x1C9418u;
            goto label_1c9418;
        }
    }
    ctx->pc = 0x1C940Cu;
    // 0x1c940c: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C940Cu;
    {
        const bool branch_taken_0x1c940c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c940c) {
            ctx->pc = 0x1C9438u;
            goto label_1c9438;
        }
    }
    ctx->pc = 0x1C9414u;
    // 0x1c9414: 0x0  nop
    ctx->pc = 0x1c9414u;
    // NOP
label_1c9418:
    // 0x1c9418: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c941c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c941cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9420: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9424: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c9424u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9428: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c9428u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c942c: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c942cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c9430: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c9430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c9434: 0x0  nop
    ctx->pc = 0x1c9434u;
    // NOP
label_1c9438:
    // 0x1c9438: 0x2411007b  addiu       $s1, $zero, 0x7B
    ctx->pc = 0x1c9438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x1c943c: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C943Cu;
    {
        const bool branch_taken_0x1c943c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C943Cu;
        // 0x1c9440: 0x2411007c  addiu       $s1, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c943c) {
            ctx->pc = 0x1C9450u;
            goto label_1c9450;
        }
    }
    ctx->pc = 0x1C9444u;
    // 0x1c9444: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9444u;
    {
        const bool branch_taken_0x1c9444 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c9444) {
            ctx->pc = 0x1C9470u;
            goto label_1c9470;
        }
    }
    ctx->pc = 0x1C944Cu;
    // 0x1c944c: 0x0  nop
    ctx->pc = 0x1c944cu;
    // NOP
label_1c9450:
    // 0x1c9450: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9454: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c9454u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9458: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c945c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c945cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9460: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c9460u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c9464: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c9464u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c9468: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c9468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c946c: 0x0  nop
    ctx->pc = 0x1c946cu;
    // NOP
label_1c9470:
    // 0x1c9470: 0x2411008a  addiu       $s1, $zero, 0x8A
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x1c9474: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9474u;
    {
        const bool branch_taken_0x1c9474 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9474u;
        // 0x1c9478: 0x2411008b  addiu       $s1, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9474) {
            ctx->pc = 0x1C9488u;
            goto label_1c9488;
        }
    }
    ctx->pc = 0x1C947Cu;
    // 0x1c947c: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C947Cu;
    {
        const bool branch_taken_0x1c947c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c947c) {
            ctx->pc = 0x1C94A8u;
            goto label_1c94a8;
        }
    }
    ctx->pc = 0x1C9484u;
    // 0x1c9484: 0x0  nop
    ctx->pc = 0x1c9484u;
    // NOP
label_1c9488:
    // 0x1c9488: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c948c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9490: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9494: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c9494u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9498: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c9498u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c949c: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c949cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c94a0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c94a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c94a4: 0x0  nop
    ctx->pc = 0x1c94a4u;
    // NOP
label_1c94a8:
    // 0x1c94a8: 0x24110098  addiu       $s1, $zero, 0x98
    ctx->pc = 0x1c94a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1c94ac: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C94ACu;
    {
        const bool branch_taken_0x1c94ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94ACu;
        // 0x1c94b0: 0x24110099  addiu       $s1, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94ac) {
            ctx->pc = 0x1C94C0u;
            goto label_1c94c0;
        }
    }
    ctx->pc = 0x1C94B4u;
    // 0x1c94b4: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C94B4u;
    {
        const bool branch_taken_0x1c94b4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c94b4) {
            ctx->pc = 0x1C94E0u;
            goto label_1c94e0;
        }
    }
    ctx->pc = 0x1C94BCu;
    // 0x1c94bc: 0x0  nop
    ctx->pc = 0x1c94bcu;
    // NOP
label_1c94c0:
    // 0x1c94c0: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c94c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c94c4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c94c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c94c8: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c94c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c94cc: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c94ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c94d0: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c94d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c94d4: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c94d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c94d8: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c94d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c94dc: 0x0  nop
    ctx->pc = 0x1c94dcu;
    // NOP
label_1c94e0:
    // 0x1c94e0: 0x241100a7  addiu       $s1, $zero, 0xA7
    ctx->pc = 0x1c94e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x1c94e4: 0x12b10004  beq         $s5, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C94E4u;
    {
        const bool branch_taken_0x1c94e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94E4u;
        // 0x1c94e8: 0x241100a8  addiu       $s1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94e4) {
            ctx->pc = 0x1C94F8u;
            goto label_1c94f8;
        }
    }
    ctx->pc = 0x1C94ECu;
    // 0x1c94ec: 0x16b1000a  bne         $s5, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C94ECu;
    {
        const bool branch_taken_0x1c94ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c94ec) {
            ctx->pc = 0x1C9518u;
            goto label_1c9518;
        }
    }
    ctx->pc = 0x1C94F4u;
    // 0x1c94f4: 0x0  nop
    ctx->pc = 0x1c94f4u;
    // NOP
label_1c94f8:
    // 0x1c94f8: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c94f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c94fc: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c94fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9500: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9504: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c9504u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9508: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c9508u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c950c: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c950cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c9510: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c9510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c9514: 0x0  nop
    ctx->pc = 0x1c9514u;
    // NOP
label_1c9518:
    // 0x1c9518: 0x2ad10002  slti        $s1, $s6, 0x2
    ctx->pc = 0x1c9518u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c951c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C951Cu;
    {
        const bool branch_taken_0x1c951c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c951c) {
            ctx->pc = 0x1C9538u;
            goto label_1c9538;
        }
    }
    ctx->pc = 0x1C9524u;
    // 0x1c9524: 0x8fb10370  lw          $s1, 0x370($sp)
    ctx->pc = 0x1c9524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1c9528: 0x2d1882b  sltu        $s1, $s6, $s1
    ctx->pc = 0x1c9528u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c952c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C952Cu;
    {
        const bool branch_taken_0x1c952c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c952c) {
            ctx->pc = 0x1C9558u;
            goto label_1c9558;
        }
    }
    ctx->pc = 0x1C9534u;
    // 0x1c9534: 0x0  nop
    ctx->pc = 0x1c9534u;
    // NOP
label_1c9538:
    // 0x1c9538: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c953c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c953cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9540: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9544: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c9544u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9548: 0x2469024  and         $s2, $s2, $a2
    ctx->pc = 0x1c9548u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x1c954c: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1c954cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c9550: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c9550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c9554: 0x0  nop
    ctx->pc = 0x1c9554u;
    // NOP
label_1c9558:
    // 0x1c9558: 0x16ac0019  bne         $s5, $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C9558u;
    {
        const bool branch_taken_0x1c9558 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 12));
        if (branch_taken_0x1c9558) {
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C9560u;
    // 0x1c9560: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x1c9560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c9564: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C9564u;
    {
        const bool branch_taken_0x1c9564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9564u;
        // 0x1c9568: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9564) {
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C956Cu;
    // 0x1c956c: 0x0  nop
    ctx->pc = 0x1c956cu;
    // NOP
label_1c9570:
    // 0x1c9570: 0x2ac10036  slti        $at, $s6, 0x36
    ctx->pc = 0x1c9570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)54) ? 1 : 0);
    // 0x1c9574: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9574u;
    {
        const bool branch_taken_0x1c9574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9574u;
        // 0x1c9578: 0x2ac1004b  slti        $at, $s6, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9574) {
            ctx->pc = 0x1C95A0u;
            goto label_1c95a0;
        }
    }
    ctx->pc = 0x1C957Cu;
    // 0x1c957c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C957Cu;
    {
        const bool branch_taken_0x1c957c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c957c) {
            ctx->pc = 0x1C95A0u;
            goto label_1c95a0;
        }
    }
    ctx->pc = 0x1C9584u;
    // 0x1c9584: 0x1aa00004  blez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9584u;
    {
        const bool branch_taken_0x1c9584 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x1c9584) {
            ctx->pc = 0x1C9598u;
            goto label_1c9598;
        }
    }
    ctx->pc = 0x1C958Cu;
    // 0x1c958c: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1c958cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c9590: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9590u;
    {
        const bool branch_taken_0x1c9590 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9590) {
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C9598u;
label_1c9598:
    // 0x1c9598: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9598u;
    {
        const bool branch_taken_0x1c9598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9598u;
        // 0x1c959c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9598) {
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C95A0u;
label_1c95a0:
    // 0x1c95a0: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x1c95a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1c95a4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C95A4u;
    {
        const bool branch_taken_0x1c95a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c95a4) {
            ctx->pc = 0x1C95B8u;
            goto label_1c95b8;
        }
    }
    ctx->pc = 0x1C95ACu;
    // 0x1c95ac: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1c95acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c95b0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C95B0u;
    {
        const bool branch_taken_0x1c95b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c95b0) {
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C95B8u;
label_1c95b8:
    // 0x1c95b8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1c95bc: 0x0  nop
    ctx->pc = 0x1c95bcu;
    // NOP
label_1c95c0:
    // 0x1c95c0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c95c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c95c4: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c95c4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c95c8: 0x24030404  addiu       $v1, $zero, 0x404
    ctx->pc = 0x1c95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x1c95cc: 0x1623000e  bne         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C95CCu;
    {
        const bool branch_taken_0x1c95cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c95cc) {
            ctx->pc = 0x1C9608u;
            goto label_1c9608;
        }
    }
    ctx->pc = 0x1C95D4u;
    // 0x1c95d4: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1c95d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c95d8: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c95dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c95e0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c95e4: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1c95e8: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1c95e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1c95ec: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C95ECu;
    {
        const bool branch_taken_0x1c95ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c95ec) {
            ctx->pc = 0x1C9600u;
            goto label_1c9600;
        }
    }
    ctx->pc = 0x1C95F4u;
    // 0x1c95f4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1c95f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c95f8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C95F8u;
    {
        const bool branch_taken_0x1c95f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c95f8) {
            ctx->pc = 0x1C9608u;
            goto label_1c9608;
        }
    }
    ctx->pc = 0x1C9600u;
label_1c9600:
    // 0x1c9600: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1c9600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c9604: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c9604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1c9608:
    // 0x1c9608: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c9608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c960c: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c960cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c9610: 0x24030405  addiu       $v1, $zero, 0x405
    ctx->pc = 0x1c9610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x1c9614: 0x16230026  bne         $s1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C9614u;
    {
        const bool branch_taken_0x1c9614 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9614) {
            ctx->pc = 0x1C96B0u;
            goto label_1c96b0;
        }
    }
    ctx->pc = 0x1C961Cu;
    // 0x1c961c: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1c961cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c9620: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c9620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9624: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9628: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c9628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c962c: 0x16cd0002  bne         $s6, $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C962Cu;
    {
        const bool branch_taken_0x1c962c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 13));
        ctx->pc = 0x1C9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C962Cu;
        // 0x1c9630: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c962c) {
            ctx->pc = 0x1C9638u;
            goto label_1c9638;
        }
    }
    ctx->pc = 0x1C9634u;
    // 0x1c9634: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c9634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1c9638:
    // 0x1c9638: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1c9638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c963c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C963Cu;
    {
        const bool branch_taken_0x1c963c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c963c) {
            ctx->pc = 0x1C9650u;
            goto label_1c9650;
        }
    }
    ctx->pc = 0x1C9644u;
    // 0x1c9644: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1c9644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c9648: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9648u;
    {
        const bool branch_taken_0x1c9648 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9648) {
            ctx->pc = 0x1C9660u;
            goto label_1c9660;
        }
    }
    ctx->pc = 0x1C9650u;
label_1c9650:
    // 0x1c9650: 0x2ac100a5  slti        $at, $s6, 0xA5
    ctx->pc = 0x1c9650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)165) ? 1 : 0);
    // 0x1c9654: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9654u;
    {
        const bool branch_taken_0x1c9654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9654) {
            ctx->pc = 0x1C9660u;
            goto label_1c9660;
        }
    }
    ctx->pc = 0x1C965Cu;
    // 0x1c965c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c965cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1c9660:
    // 0x1c9660: 0x1aa00005  blez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9660u;
    {
        const bool branch_taken_0x1c9660 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x1c9660) {
            ctx->pc = 0x1C9678u;
            goto label_1c9678;
        }
    }
    ctx->pc = 0x1C9668u;
    // 0x1c9668: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1c9668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1c966c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C966Cu;
    {
        const bool branch_taken_0x1c966c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c966c) {
            ctx->pc = 0x1C9680u;
            goto label_1c9680;
        }
    }
    ctx->pc = 0x1C9674u;
    // 0x1c9674: 0x0  nop
    ctx->pc = 0x1c9674u;
    // NOP
label_1c9678:
    // 0x1c9678: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c9678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1c967c: 0x0  nop
    ctx->pc = 0x1c967cu;
    // NOP
label_1c9680:
    // 0x1c9680: 0x2aa10003  slti        $at, $s5, 0x3
    ctx->pc = 0x1c9680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c9684: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9684u;
    {
        const bool branch_taken_0x1c9684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9684u;
        // 0x1c9688: 0x2ac100db  slti        $at, $s6, 0xDB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)219) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9684) {
            ctx->pc = 0x1C9698u;
            goto label_1c9698;
        }
    }
    ctx->pc = 0x1C968Cu;
    // 0x1c968c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C968Cu;
    {
        const bool branch_taken_0x1c968c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c968c) {
            ctx->pc = 0x1C9698u;
            goto label_1c9698;
        }
    }
    ctx->pc = 0x1C9694u;
    // 0x1c9694: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c9694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1c9698:
    // 0x1c9698: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1c9698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c969c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C969Cu;
    {
        const bool branch_taken_0x1c969c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C969Cu;
        // 0x1c96a0: 0x2ac100db  slti        $at, $s6, 0xDB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)219) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c969c) {
            ctx->pc = 0x1C96B0u;
            goto label_1c96b0;
        }
    }
    ctx->pc = 0x1C96A4u;
    // 0x1c96a4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C96A4u;
    {
        const bool branch_taken_0x1c96a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c96a4) {
            ctx->pc = 0x1C96B0u;
            goto label_1c96b0;
        }
    }
    ctx->pc = 0x1C96ACu;
    // 0x1c96ac: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c96acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1c96b0:
    // 0x1c96b0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c96b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c96b4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x1c96b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c96b8: 0x2471fb00  addiu       $s1, $v1, -0x500
    ctx->pc = 0x1c96b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966016));
    // 0x1c96bc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1c96bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c96c0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C96C0u;
    {
        const bool branch_taken_0x1c96c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96C0u;
        // 0x1c96c4: 0x2471faf0  addiu       $s1, $v1, -0x510 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96c0) {
            ctx->pc = 0x1C96E8u;
            goto label_1c96e8;
        }
    }
    ctx->pc = 0x1C96C8u;
    // 0x1c96c8: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1c96c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c96cc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C96CCu;
    {
        const bool branch_taken_0x1c96cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c96cc) {
            ctx->pc = 0x1C96E8u;
            goto label_1c96e8;
        }
    }
    ctx->pc = 0x1C96D4u;
    // 0x1c96d4: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x1c96d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c96d8: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C96D8u;
    {
        const bool branch_taken_0x1c96d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96D8u;
        // 0x1c96dc: 0x24110051  addiu       $s1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96d8) {
            ctx->pc = 0x1C96E8u;
            goto label_1c96e8;
        }
    }
    ctx->pc = 0x1C96E0u;
    // 0x1c96e0: 0x1471004b  bne         $v1, $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C96E0u;
    {
        const bool branch_taken_0x1c96e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c96e0) {
            ctx->pc = 0x1C9810u;
            goto label_1c9810;
        }
    }
    ctx->pc = 0x1C96E8u;
label_1c96e8:
    // 0x1c96e8: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x1c96e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c96ec: 0x46060832  c.eq.s      $f1, $f6
    ctx->pc = 0x1c96ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c96f0: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x1C96F0u;
    {
        const bool branch_taken_0x1c96f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c96f0) {
            ctx->pc = 0x1C97C8u;
            goto label_1c97c8;
        }
    }
    ctx->pc = 0x1C96F8u;
    // 0x1c96f8: 0x8fb10380  lw          $s1, 0x380($sp)
    ctx->pc = 0x1c96f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x1c96fc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1c96fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9700: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9700u;
    {
        const bool branch_taken_0x1c9700 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1c9700) {
            ctx->pc = 0x1C9710u;
            goto label_1c9710;
        }
    }
    ctx->pc = 0x1C9708u;
    // 0x1c9708: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c970c: 0x0  nop
    ctx->pc = 0x1c970cu;
    // NOP
label_1c9710:
    // 0x1c9710: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c9710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9714: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9714u;
    {
        const bool branch_taken_0x1c9714 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9714) {
            ctx->pc = 0x1C9720u;
            goto label_1c9720;
        }
    }
    ctx->pc = 0x1C971Cu;
    // 0x1c971c: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c971cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9720:
    // 0x1c9720: 0x26c3ffd5  addiu       $v1, $s6, -0x2B
    ctx->pc = 0x1c9720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967253));
    // 0x1c9724: 0x39180  sll         $s2, $v1, 6
    ctx->pc = 0x1c9724u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1c9728: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c9728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c972c: 0x729023  subu        $s2, $v1, $s2
    ctx->pc = 0x1c972cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1c9730: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9730u;
    {
        const bool branch_taken_0x1c9730 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1c9730) {
            ctx->pc = 0x1C9740u;
            goto label_1c9740;
        }
    }
    ctx->pc = 0x1C9738u;
    // 0x1c9738: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c9738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c973c: 0x0  nop
    ctx->pc = 0x1c973cu;
    // NOP
label_1c9740:
    // 0x1c9740: 0x2a410081  slti        $at, $s2, 0x81
    ctx->pc = 0x1c9740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9744: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9744u;
    {
        const bool branch_taken_0x1c9744 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9744) {
            ctx->pc = 0x1C9750u;
            goto label_1c9750;
        }
    }
    ctx->pc = 0x1C974Cu;
    // 0x1c974c: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1c974cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9750:
    // 0x1c9750: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1c9750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1c9754: 0x2328818  mult        $s1, $s1, $s2
    ctx->pc = 0x1c9754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c9758: 0x1199c3  sra         $s3, $s1, 7
    ctx->pc = 0x1c9758u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 7));
    // 0x1c975c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1c975cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9760: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9760u;
    {
        const bool branch_taken_0x1c9760 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1c9760) {
            ctx->pc = 0x1C9770u;
            goto label_1c9770;
        }
    }
    ctx->pc = 0x1C9768u;
    // 0x1c9768: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c9768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c976c: 0x0  nop
    ctx->pc = 0x1c976cu;
    // NOP
label_1c9770:
    // 0x1c9770: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x1c9770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9774: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9774u;
    {
        const bool branch_taken_0x1c9774 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9774) {
            ctx->pc = 0x1C9780u;
            goto label_1c9780;
        }
    }
    ctx->pc = 0x1C977Cu;
    // 0x1c977c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9780:
    // 0x1c9780: 0x169043  sra         $s2, $s6, 1
    ctx->pc = 0x1c9780u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
    // 0x1c9784: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x1c9784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c9788: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9788u;
    {
        const bool branch_taken_0x1c9788 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x1C978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9788u;
        // 0x1c978c: 0x319c3  sra         $v1, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9788) {
            ctx->pc = 0x1C9798u;
            goto label_1c9798;
        }
    }
    ctx->pc = 0x1C9790u;
    // 0x1c9790: 0x26d10001  addiu       $s1, $s6, 0x1
    ctx->pc = 0x1c9790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c9794: 0x119043  sra         $s2, $s1, 1
    ctx->pc = 0x1c9794u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 17), 1));
label_1c9798:
    // 0x1c9798: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c979c: 0x39e00  sll         $s3, $v1, 24
    ctx->pc = 0x1c979cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c97a0: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x1c97a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1c97a4: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c97a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c97a8: 0x119400  sll         $s2, $s1, 16
    ctx->pc = 0x1c97a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x1c97ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c97acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c97b0: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x1c97b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x1c97b4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c97b8: 0x36527000  ori         $s2, $s2, 0x7000
    ctx->pc = 0x1c97b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)28672);
    // 0x1c97bc: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x1c97bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x1c97c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C97C0u;
    {
        const bool branch_taken_0x1c97c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97C0u;
        // 0x1c97c4: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97c0) {
            ctx->pc = 0x1C9810u;
            goto label_1c9810;
        }
    }
    ctx->pc = 0x1C97C8u;
label_1c97c8:
    // 0x1c97c8: 0x8fb103b0  lw          $s1, 0x3B0($sp)
    ctx->pc = 0x1c97c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1c97cc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1c97ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C97D0u;
    {
        const bool branch_taken_0x1c97d0 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1c97d0) {
            ctx->pc = 0x1C97E0u;
            goto label_1c97e0;
        }
    }
    ctx->pc = 0x1C97D8u;
    // 0x1c97d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c97d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97dc: 0x0  nop
    ctx->pc = 0x1c97dcu;
    // NOP
label_1c97e0:
    // 0x1c97e0: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c97e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c97e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C97E4u;
    {
        const bool branch_taken_0x1c97e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c97e4) {
            ctx->pc = 0x1C97F0u;
            goto label_1c97f0;
        }
    }
    ctx->pc = 0x1C97ECu;
    // 0x1c97ec: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c97ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c97f0:
    // 0x1c97f0: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x1c97f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c97f4: 0x118e00  sll         $s1, $s1, 24
    ctx->pc = 0x1c97f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x1c97f8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x1c97f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1c97fc: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c97fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9800: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9804: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c9804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c9808: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c9808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1c980c: 0x0  nop
    ctx->pc = 0x1c980cu;
    // NOP
label_1c9810:
    // 0x1c9810: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c9810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c9814: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c9814u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c9818: 0x24030504  addiu       $v1, $zero, 0x504
    ctx->pc = 0x1c9818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x1c981c: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C981Cu;
    {
        const bool branch_taken_0x1c981c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C981Cu;
        // 0x1c9820: 0x24030054  addiu       $v1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c981c) {
            ctx->pc = 0x1C9830u;
            goto label_1c9830;
        }
    }
    ctx->pc = 0x1C9824u;
    // 0x1c9824: 0x16230080  bne         $s1, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x1C9824u;
    {
        const bool branch_taken_0x1c9824 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9824) {
            ctx->pc = 0x1C9A28u;
            goto label_1c9a28;
        }
    }
    ctx->pc = 0x1C982Cu;
    // 0x1c982c: 0x0  nop
    ctx->pc = 0x1c982cu;
    // NOP
label_1c9830:
    // 0x1c9830: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x1c9830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c9834: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x1c9834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9838: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x1C9838u;
    {
        const bool branch_taken_0x1c9838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9838) {
            ctx->pc = 0x1C9978u;
            goto label_1c9978;
        }
    }
    ctx->pc = 0x1C9840u;
    // 0x1c9840: 0x8fb203a0  lw          $s2, 0x3A0($sp)
    ctx->pc = 0x1c9840u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x1c9844: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1c9844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9848: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9848u;
    {
        const bool branch_taken_0x1c9848 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1c9848) {
            ctx->pc = 0x1C9858u;
            goto label_1c9858;
        }
    }
    ctx->pc = 0x1C9850u;
    // 0x1c9850: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c9850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9854: 0x0  nop
    ctx->pc = 0x1c9854u;
    // NOP
label_1c9858:
    // 0x1c9858: 0x2a410081  slti        $at, $s2, 0x81
    ctx->pc = 0x1c9858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c985c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C985Cu;
    {
        const bool branch_taken_0x1c985c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c985c) {
            ctx->pc = 0x1C9868u;
            goto label_1c9868;
        }
    }
    ctx->pc = 0x1C9864u;
    // 0x1c9864: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1c9864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9868:
    // 0x1c9868: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1c9868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c986c: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x1c986cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1c9870: 0x38900  sll         $s1, $v1, 4
    ctx->pc = 0x1c9870u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c9874: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9874u;
    {
        const bool branch_taken_0x1c9874 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1c9874) {
            ctx->pc = 0x1C9880u;
            goto label_1c9880;
        }
    }
    ctx->pc = 0x1C987Cu;
    // 0x1c987c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c987cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9880:
    // 0x1c9880: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c9880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9884: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9884u;
    {
        const bool branch_taken_0x1c9884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9884) {
            ctx->pc = 0x1C9890u;
            goto label_1c9890;
        }
    }
    ctx->pc = 0x1C988Cu;
    // 0x1c988c: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c988cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9890:
    // 0x1c9890: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c9890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9894: 0x2aa10027  slti        $at, $s5, 0x27
    ctx->pc = 0x1c9894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x1c9898: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C9898u;
    {
        const bool branch_taken_0x1c9898 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9898u;
        // 0x1c989c: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9898) {
            ctx->pc = 0x1C98E0u;
            goto label_1c98e0;
        }
    }
    ctx->pc = 0x1C98A0u;
    // 0x1c98a0: 0x2aa1002a  slti        $at, $s5, 0x2A
    ctx->pc = 0x1c98a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)42) ? 1 : 0);
    // 0x1c98a4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C98A4u;
    {
        const bool branch_taken_0x1c98a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98A4u;
        // 0x1c98a8: 0x2ac10018  slti        $at, $s6, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98a4) {
            ctx->pc = 0x1C98C8u;
            goto label_1c98c8;
        }
    }
    ctx->pc = 0x1C98ACu;
    // 0x1c98ac: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1C98ACu;
    {
        const bool branch_taken_0x1c98ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c98ac) {
            ctx->pc = 0x1C98E0u;
            goto label_1c98e0;
        }
    }
    ctx->pc = 0x1C98B4u;
    // 0x1c98b4: 0x2ac1001a  slti        $at, $s6, 0x1A
    ctx->pc = 0x1c98b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1c98b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C98B8u;
    {
        const bool branch_taken_0x1c98b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c98b8) {
            ctx->pc = 0x1C98E0u;
            goto label_1c98e0;
        }
    }
    ctx->pc = 0x1C98C0u;
    // 0x1c98c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C98C0u;
    {
        const bool branch_taken_0x1c98c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98C0u;
        // 0x1c98c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98c0) {
            ctx->pc = 0x1C98E0u;
            goto label_1c98e0;
        }
    }
    ctx->pc = 0x1C98C8u;
label_1c98c8:
    // 0x1c98c8: 0x2ac10017  slti        $at, $s6, 0x17
    ctx->pc = 0x1c98c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1c98cc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C98CCu;
    {
        const bool branch_taken_0x1c98cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C98D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98CCu;
        // 0x1c98d0: 0x2ac1001a  slti        $at, $s6, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98cc) {
            ctx->pc = 0x1C98E0u;
            goto label_1c98e0;
        }
    }
    ctx->pc = 0x1C98D4u;
    // 0x1c98d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C98D4u;
    {
        const bool branch_taken_0x1c98d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c98d4) {
            ctx->pc = 0x1C98E0u;
            goto label_1c98e0;
        }
    }
    ctx->pc = 0x1C98DCu;
    // 0x1c98dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c98dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c98e0:
    // 0x1c98e0: 0x2b010081  slti        $at, $t8, 0x81
    ctx->pc = 0x1c98e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c98e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C98E4u;
    {
        const bool branch_taken_0x1c98e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98E4u;
        // 0x1c98e8: 0x300f02d  daddu       $fp, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98e4) {
            ctx->pc = 0x1C98F0u;
            goto label_1c98f0;
        }
    }
    ctx->pc = 0x1C98ECu;
    // 0x1c98ec: 0x241e0080  addiu       $fp, $zero, 0x80
    ctx->pc = 0x1c98ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c98f0:
    // 0x1c98f0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1c98f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c98f4: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C98F4u;
    {
        const bool branch_taken_0x1c98f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98F4u;
        // 0x1c98f8: 0x2aa1002c  slti        $at, $s5, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)44) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98f4) {
            ctx->pc = 0x1C9918u;
            goto label_1c9918;
        }
    }
    ctx->pc = 0x1C98FCu;
    // 0x1c98fc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C98FCu;
    {
        const bool branch_taken_0x1c98fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98FCu;
        // 0x1c9900: 0x2ad30012  slti        $s3, $s6, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98fc) {
            ctx->pc = 0x1C9918u;
            goto label_1c9918;
        }
    }
    ctx->pc = 0x1C9904u;
    // 0x1c9904: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9904u;
    {
        const bool branch_taken_0x1c9904 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9904u;
        // 0x1c9908: 0x2ac10019  slti        $at, $s6, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9904) {
            ctx->pc = 0x1C9918u;
            goto label_1c9918;
        }
    }
    ctx->pc = 0x1C990Cu;
    // 0x1c990c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C990Cu;
    {
        const bool branch_taken_0x1c990c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c990c) {
            ctx->pc = 0x1C9918u;
            goto label_1c9918;
        }
    }
    ctx->pc = 0x1C9914u;
    // 0x1c9914: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c9914u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9918:
    // 0x1c9918: 0x169843  sra         $s3, $s6, 1
    ctx->pc = 0x1c9918u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 22), 1));
    // 0x1c991c: 0x2518818  mult        $s1, $s2, $s1
    ctx->pc = 0x1c991cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c9920: 0x1189c3  sra         $s1, $s1, 7
    ctx->pc = 0x1c9920u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 7));
    // 0x1c9924: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1c9924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c9928: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1c9928u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1c992c: 0x771818  mult        $v1, $v1, $s7
    ctx->pc = 0x1c992cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c9930: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1c9934: 0x7e1818  mult        $v1, $v1, $fp
    ctx->pc = 0x1c9934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c9938: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9938u;
    {
        const bool branch_taken_0x1c9938 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x1C993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9938u;
        // 0x1c993c: 0x319c3  sra         $v1, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9938) {
            ctx->pc = 0x1C9948u;
            goto label_1c9948;
        }
    }
    ctx->pc = 0x1C9940u;
    // 0x1c9940: 0x26d10001  addiu       $s1, $s6, 0x1
    ctx->pc = 0x1c9940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c9944: 0x119843  sra         $s3, $s1, 1
    ctx->pc = 0x1c9944u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 1));
label_1c9948:
    // 0x1c9948: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c994c: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x1c994cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1c9950: 0x39e00  sll         $s3, $v1, 24
    ctx->pc = 0x1c9950u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c9954: 0x119400  sll         $s2, $s1, 16
    ctx->pc = 0x1c9954u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x1c9958: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c995c: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x1c995cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x1c9960: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9964: 0x36527000  ori         $s2, $s2, 0x7000
    ctx->pc = 0x1c9964u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)28672);
    // 0x1c9968: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c9968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c996c: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x1c996cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x1c9970: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1C9970u;
    {
        const bool branch_taken_0x1c9970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9970u;
        // 0x1c9974: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9970) {
            ctx->pc = 0x1C9A28u;
            goto label_1c9a28;
        }
    }
    ctx->pc = 0x1C9978u;
label_1c9978:
    // 0x1c9978: 0x2aa10016  slti        $at, $s5, 0x16
    ctx->pc = 0x1c9978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1c997c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C997Cu;
    {
        const bool branch_taken_0x1c997c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C997Cu;
        // 0x1c9980: 0x24030068  addiu       $v1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c997c) {
            ctx->pc = 0x1C9994u;
            goto label_1c9994;
        }
    }
    ctx->pc = 0x1C9984u;
    // 0x1c9984: 0x24110038  addiu       $s1, $zero, 0x38
    ctx->pc = 0x1c9984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c9988: 0x2368823  subu        $s1, $s1, $s6
    ctx->pc = 0x1c9988u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c998c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C998Cu;
    {
        const bool branch_taken_0x1c998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C998Cu;
        // 0x1c9990: 0x119140  sll         $s2, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c998c) {
            ctx->pc = 0x1C99A0u;
            goto label_1c99a0;
        }
    }
    ctx->pc = 0x1C9994u;
label_1c9994:
    // 0x1c9994: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1c9994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c9998: 0x2368823  subu        $s1, $s1, $s6
    ctx->pc = 0x1c9998u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c999c: 0x119140  sll         $s2, $s1, 5
    ctx->pc = 0x1c999cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_1c99a0:
    // 0x1c99a0: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C99A0u;
    {
        const bool branch_taken_0x1c99a0 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1c99a0) {
            ctx->pc = 0x1C99B0u;
            goto label_1c99b0;
        }
    }
    ctx->pc = 0x1C99A8u;
    // 0x1c99a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c99a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99ac: 0x0  nop
    ctx->pc = 0x1c99acu;
    // NOP
label_1c99b0:
    // 0x1c99b0: 0x2a410049  slti        $at, $s2, 0x49
    ctx->pc = 0x1c99b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)73) ? 1 : 0);
    // 0x1c99b4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C99B4u;
    {
        const bool branch_taken_0x1c99b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c99b4) {
            ctx->pc = 0x1C99C0u;
            goto label_1c99c0;
        }
    }
    ctx->pc = 0x1C99BCu;
    // 0x1c99bc: 0x24120048  addiu       $s2, $zero, 0x48
    ctx->pc = 0x1c99bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c99c0:
    // 0x1c99c0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C99C0u;
    {
        const bool branch_taken_0x1c99c0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x1C99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99C0u;
        // 0x1c99c4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99c0) {
            ctx->pc = 0x1C99D0u;
            goto label_1c99d0;
        }
    }
    ctx->pc = 0x1C99C8u;
    // 0x1c99c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c99c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99cc: 0x0  nop
    ctx->pc = 0x1c99ccu;
    // NOP
label_1c99d0:
    // 0x1c99d0: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c99d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c99d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C99D4u;
    {
        const bool branch_taken_0x1c99d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c99d4) {
            ctx->pc = 0x1C99E0u;
            goto label_1c99e0;
        }
    }
    ctx->pc = 0x1C99DCu;
    // 0x1c99dc: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c99dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c99e0:
    // 0x1c99e0: 0x2aa1001b  slti        $at, $s5, 0x1B
    ctx->pc = 0x1c99e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c99e4: 0x2518818  mult        $s1, $s2, $s1
    ctx->pc = 0x1c99e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c99e8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C99E8u;
    {
        const bool branch_taken_0x1c99e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99E8u;
        // 0x1c99ec: 0x1189c3  sra         $s1, $s1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99e8) {
            ctx->pc = 0x1C9A00u;
            goto label_1c9a00;
        }
    }
    ctx->pc = 0x1C99F0u;
    // 0x1c99f0: 0x2ac10039  slti        $at, $s6, 0x39
    ctx->pc = 0x1c99f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x1c99f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C99F4u;
    {
        const bool branch_taken_0x1c99f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c99f4) {
            ctx->pc = 0x1C9A00u;
            goto label_1c9a00;
        }
    }
    ctx->pc = 0x1C99FCu;
    // 0x1c99fc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1c99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1c9a00:
    // 0x1c9a00: 0x119e00  sll         $s3, $s1, 24
    ctx->pc = 0x1c9a00u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x1c9a04: 0x38c00  sll         $s1, $v1, 16
    ctx->pc = 0x1c9a04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9a08: 0x39200  sll         $s2, $v1, 8
    ctx->pc = 0x1c9a08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1c9a0c: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x1c9a0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
    // 0x1c9a10: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9a14: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x1c9a14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
    // 0x1c9a18: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c9a18u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9a1c: 0x729025  or          $s2, $v1, $s2
    ctx->pc = 0x1c9a1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1c9a20: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x1c9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9a24: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1c9a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_1c9a28:
    // 0x1c9a28: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c9a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c9a2c: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c9a2cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c9a30: 0x24030503  addiu       $v1, $zero, 0x503
    ctx->pc = 0x1c9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1c9a34: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9A34u;
    {
        const bool branch_taken_0x1c9a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A34u;
        // 0x1c9a38: 0x24030053  addiu       $v1, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a34) {
            ctx->pc = 0x1C9A48u;
            goto label_1c9a48;
        }
    }
    ctx->pc = 0x1C9A3Cu;
    // 0x1c9a3c: 0x16230076  bne         $s1, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x1C9A3Cu;
    {
        const bool branch_taken_0x1c9a3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9a3c) {
            ctx->pc = 0x1C9C18u;
            goto label_1c9c18;
        }
    }
    ctx->pc = 0x1C9A44u;
    // 0x1c9a44: 0x0  nop
    ctx->pc = 0x1c9a44u;
    // NOP
label_1c9a48:
    // 0x1c9a48: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x1c9a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c9a4c: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x1c9a4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9a50: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x1C9A50u;
    {
        const bool branch_taken_0x1c9a50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A50u;
        // 0x1c9a54: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a50) {
            ctx->pc = 0x1C9B18u;
            goto label_1c9b18;
        }
    }
    ctx->pc = 0x1C9A58u;
    // 0x1c9a58: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x1c9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1c9a5c: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1c9a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c9a60: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9A60u;
    {
        const bool branch_taken_0x1c9a60 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x1c9a60) {
            ctx->pc = 0x1C9A70u;
            goto label_1c9a70;
        }
    }
    ctx->pc = 0x1C9A68u;
    // 0x1c9a68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c9a68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a6c: 0x0  nop
    ctx->pc = 0x1c9a6cu;
    // NOP
label_1c9a70:
    // 0x1c9a70: 0x2a610081  slti        $at, $s3, 0x81
    ctx->pc = 0x1c9a70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9a74: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9A74u;
    {
        const bool branch_taken_0x1c9a74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a74) {
            ctx->pc = 0x1C9A80u;
            goto label_1c9a80;
        }
    }
    ctx->pc = 0x1C9A7Cu;
    // 0x1c9a7c: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x1c9a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9a80:
    // 0x1c9a80: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9A80u;
    {
        const bool branch_taken_0x1c9a80 = (GPR_S64(ctx, 11) >= 0);
        ctx->pc = 0x1C9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A80u;
        // 0x1c9a84: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a80) {
            ctx->pc = 0x1C9A90u;
            goto label_1c9a90;
        }
    }
    ctx->pc = 0x1C9A88u;
    // 0x1c9a88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c9a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a8c: 0x0  nop
    ctx->pc = 0x1c9a8cu;
    // NOP
label_1c9a90:
    // 0x1c9a90: 0x2a410081  slti        $at, $s2, 0x81
    ctx->pc = 0x1c9a90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9a94: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9A94u;
    {
        const bool branch_taken_0x1c9a94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a94) {
            ctx->pc = 0x1C9AA0u;
            goto label_1c9aa0;
        }
    }
    ctx->pc = 0x1C9A9Cu;
    // 0x1c9a9c: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1c9a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9aa0:
    // 0x1c9aa0: 0x2b010081  slti        $at, $t8, 0x81
    ctx->pc = 0x1c9aa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9aa4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9AA4u;
    {
        const bool branch_taken_0x1c9aa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AA4u;
        // 0x1c9aa8: 0x300882d  daddu       $s1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9aa4) {
            ctx->pc = 0x1C9AB0u;
            goto label_1c9ab0;
        }
    }
    ctx->pc = 0x1C9AACu;
    // 0x1c9aac: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9ab0:
    // 0x1c9ab0: 0x2b210081  slti        $at, $t9, 0x81
    ctx->pc = 0x1c9ab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9ab4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9AB4u;
    {
        const bool branch_taken_0x1c9ab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AB4u;
        // 0x1c9ab8: 0x320182d  daddu       $v1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ab4) {
            ctx->pc = 0x1C9AC0u;
            goto label_1c9ac0;
        }
    }
    ctx->pc = 0x1C9ABCu;
    // 0x1c9abc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9ac0:
    // 0x1c9ac0: 0x16b843  sra         $s7, $s6, 1
    ctx->pc = 0x1c9ac0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 22), 1));
    // 0x1c9ac4: 0x2729018  mult        $s2, $s3, $s2
    ctx->pc = 0x1c9ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1c9ac8: 0x1291c3  sra         $s2, $s2, 7
    ctx->pc = 0x1c9ac8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 7));
    // 0x1c9acc: 0x2518818  mult        $s1, $s2, $s1
    ctx->pc = 0x1c9accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c9ad0: 0x1189c3  sra         $s1, $s1, 7
    ctx->pc = 0x1c9ad0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 7));
    // 0x1c9ad4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1c9ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c9ad8: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9AD8u;
    {
        const bool branch_taken_0x1c9ad8 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x1C9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD8u;
        // 0x1c9adc: 0x319c3  sra         $v1, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ad8) {
            ctx->pc = 0x1C9AE8u;
            goto label_1c9ae8;
        }
    }
    ctx->pc = 0x1C9AE0u;
    // 0x1c9ae0: 0x26d10001  addiu       $s1, $s6, 0x1
    ctx->pc = 0x1c9ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c9ae4: 0x11b843  sra         $s7, $s1, 1
    ctx->pc = 0x1c9ae4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 17), 1));
label_1c9ae8:
    // 0x1c9ae8: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9aec: 0x39e00  sll         $s3, $v1, 24
    ctx->pc = 0x1c9aecu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c9af0: 0x2378823  subu        $s1, $s1, $s7
    ctx->pc = 0x1c9af0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1c9af4: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c9af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9af8: 0x119400  sll         $s2, $s1, 16
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x1c9afc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9b00: 0x2729025  or          $s2, $s3, $s2
    ctx->pc = 0x1c9b00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x1c9b04: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c9b08: 0x36527000  ori         $s2, $s2, 0x7000
    ctx->pc = 0x1c9b08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)28672);
    // 0x1c9b0c: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x1c9b0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x1c9b10: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1C9B10u;
    {
        const bool branch_taken_0x1c9b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B10u;
        // 0x1c9b14: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b10) {
            ctx->pc = 0x1C9C18u;
            goto label_1c9c18;
        }
    }
    ctx->pc = 0x1C9B18u;
label_1c9b18:
    // 0x1c9b18: 0x2ac1003a  slti        $at, $s6, 0x3A
    ctx->pc = 0x1c9b18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x1c9b1c: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9b20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9B20u;
    {
        const bool branch_taken_0x1c9b20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B20u;
        // 0x1c9b24: 0x24030068  addiu       $v1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b20) {
            ctx->pc = 0x1C9B30u;
            goto label_1c9b30;
        }
    }
    ctx->pc = 0x1C9B28u;
    // 0x1c9b28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C9B28u;
    {
        const bool branch_taken_0x1c9b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B28u;
        // 0x1c9b2c: 0x8fb10310  lw          $s1, 0x310($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b28) {
            ctx->pc = 0x1C9B58u;
            goto label_1c9b58;
        }
    }
    ctx->pc = 0x1C9B30u;
label_1c9b30:
    // 0x1c9b30: 0x2ac1002a  slti        $at, $s6, 0x2A
    ctx->pc = 0x1c9b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)42) ? 1 : 0);
    // 0x1c9b34: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9B34u;
    {
        const bool branch_taken_0x1c9b34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b34) {
            ctx->pc = 0x1C9B48u;
            goto label_1c9b48;
        }
    }
    ctx->pc = 0x1C9B3Cu;
    // 0x1c9b3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9B3Cu;
    {
        const bool branch_taken_0x1c9b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B3Cu;
        // 0x1c9b40: 0x8fb10300  lw          $s1, 0x300($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b3c) {
            ctx->pc = 0x1C9B58u;
            goto label_1c9b58;
        }
    }
    ctx->pc = 0x1C9B44u;
    // 0x1c9b44: 0x0  nop
    ctx->pc = 0x1c9b44u;
    // NOP
label_1c9b48:
    // 0x1c9b48: 0x2ac10012  slti        $at, $s6, 0x12
    ctx->pc = 0x1c9b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1c9b4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9B4Cu;
    {
        const bool branch_taken_0x1c9b4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b4c) {
            ctx->pc = 0x1C9B58u;
            goto label_1c9b58;
        }
    }
    ctx->pc = 0x1C9B54u;
    // 0x1c9b54: 0x8fb10300  lw          $s1, 0x300($sp)
    ctx->pc = 0x1c9b54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_1c9b58:
    // 0x1c9b58: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9B58u;
    {
        const bool branch_taken_0x1c9b58 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1c9b58) {
            ctx->pc = 0x1C9B68u;
            goto label_1c9b68;
        }
    }
    ctx->pc = 0x1C9B60u;
    // 0x1c9b60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b64: 0x0  nop
    ctx->pc = 0x1c9b64u;
    // NOP
label_1c9b68:
    // 0x1c9b68: 0x2a210049  slti        $at, $s1, 0x49
    ctx->pc = 0x1c9b68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)73) ? 1 : 0);
    // 0x1c9b6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9B6Cu;
    {
        const bool branch_taken_0x1c9b6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b6c) {
            ctx->pc = 0x1C9B78u;
            goto label_1c9b78;
        }
    }
    ctx->pc = 0x1C9B74u;
    // 0x1c9b74: 0x24110048  addiu       $s1, $zero, 0x48
    ctx->pc = 0x1c9b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c9b78:
    // 0x1c9b78: 0x2ac10013  slti        $at, $s6, 0x13
    ctx->pc = 0x1c9b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x1c9b7c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9B7Cu;
    {
        const bool branch_taken_0x1c9b7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B7Cu;
        // 0x1c9b80: 0x2ac10039  slti        $at, $s6, 0x39 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)57) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b7c) {
            ctx->pc = 0x1C9BA0u;
            goto label_1c9ba0;
        }
    }
    ctx->pc = 0x1C9B84u;
    // 0x1c9b84: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9B84u;
    {
        const bool branch_taken_0x1c9b84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b84) {
            ctx->pc = 0x1C9BA0u;
            goto label_1c9ba0;
        }
    }
    ctx->pc = 0x1C9B8Cu;
    // 0x1c9b8c: 0x2aa1001b  slti        $at, $s5, 0x1B
    ctx->pc = 0x1c9b8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c9b90: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9B90u;
    {
        const bool branch_taken_0x1c9b90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b90) {
            ctx->pc = 0x1C9BA0u;
            goto label_1c9ba0;
        }
    }
    ctx->pc = 0x1C9B98u;
    // 0x1c9b98: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1c9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c9b9c: 0x0  nop
    ctx->pc = 0x1c9b9cu;
    // NOP
label_1c9ba0:
    // 0x1c9ba0: 0x2ac10024  slti        $at, $s6, 0x24
    ctx->pc = 0x1c9ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x1c9ba4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9BA4u;
    {
        const bool branch_taken_0x1c9ba4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BA4u;
        // 0x1c9ba8: 0x2ac10029  slti        $at, $s6, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ba4) {
            ctx->pc = 0x1C9BC8u;
            goto label_1c9bc8;
        }
    }
    ctx->pc = 0x1C9BACu;
    // 0x1c9bac: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9BACu;
    {
        const bool branch_taken_0x1c9bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9bac) {
            ctx->pc = 0x1C9BC8u;
            goto label_1c9bc8;
        }
    }
    ctx->pc = 0x1C9BB4u;
    // 0x1c9bb4: 0x2aa10011  slti        $at, $s5, 0x11
    ctx->pc = 0x1c9bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c9bb8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9BB8u;
    {
        const bool branch_taken_0x1c9bb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9bb8) {
            ctx->pc = 0x1C9BC8u;
            goto label_1c9bc8;
        }
    }
    ctx->pc = 0x1C9BC0u;
    // 0x1c9bc0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1c9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c9bc4: 0x0  nop
    ctx->pc = 0x1c9bc4u;
    // NOP
label_1c9bc8:
    // 0x1c9bc8: 0x2ac10014  slti        $at, $s6, 0x14
    ctx->pc = 0x1c9bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1c9bcc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9BCCu;
    {
        const bool branch_taken_0x1c9bcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BCCu;
        // 0x1c9bd0: 0x2ac10019  slti        $at, $s6, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bcc) {
            ctx->pc = 0x1C9BF0u;
            goto label_1c9bf0;
        }
    }
    ctx->pc = 0x1C9BD4u;
    // 0x1c9bd4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9BD4u;
    {
        const bool branch_taken_0x1c9bd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9bd4) {
            ctx->pc = 0x1C9BF0u;
            goto label_1c9bf0;
        }
    }
    ctx->pc = 0x1C9BDCu;
    // 0x1c9bdc: 0x2aa10011  slti        $at, $s5, 0x11
    ctx->pc = 0x1c9bdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c9be0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9BE0u;
    {
        const bool branch_taken_0x1c9be0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9be0) {
            ctx->pc = 0x1C9BF0u;
            goto label_1c9bf0;
        }
    }
    ctx->pc = 0x1C9BE8u;
    // 0x1c9be8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1c9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c9bec: 0x0  nop
    ctx->pc = 0x1c9becu;
    // NOP
label_1c9bf0:
    // 0x1c9bf0: 0x119e00  sll         $s3, $s1, 24
    ctx->pc = 0x1c9bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x1c9bf4: 0x38c00  sll         $s1, $v1, 16
    ctx->pc = 0x1c9bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9bf8: 0x39200  sll         $s2, $v1, 8
    ctx->pc = 0x1c9bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1c9bfc: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x1c9bfcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
    // 0x1c9c00: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9c04: 0x2539025  or          $s2, $s2, $s3
    ctx->pc = 0x1c9c04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 19));
    // 0x1c9c08: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c9c08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9c0c: 0x729025  or          $s2, $v1, $s2
    ctx->pc = 0x1c9c0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1c9c10: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x1c9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9c14: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1c9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_1c9c18:
    // 0x1c9c18: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c9c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c9c1c: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c9c1cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c9c20: 0x24030a00  addiu       $v1, $zero, 0xA00
    ctx->pc = 0x1c9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x1c9c24: 0x16230032  bne         $s1, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C9C24u;
    {
        const bool branch_taken_0x1c9c24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C24u;
        // 0x1c9c28: 0x320982d  daddu       $s3, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c24) {
            ctx->pc = 0x1C9CF0u;
            goto label_1c9cf0;
        }
    }
    ctx->pc = 0x1C9C2Cu;
    // 0x1c9c2c: 0x7210002  bgez        $t9, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9C2Cu;
    {
        const bool branch_taken_0x1c9c2c = (GPR_S64(ctx, 25) >= 0);
        if (branch_taken_0x1c9c2c) {
            ctx->pc = 0x1C9C38u;
            goto label_1c9c38;
        }
    }
    ctx->pc = 0x1C9C34u;
    // 0x1c9c34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c9c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9c38:
    // 0x1c9c38: 0x2a610081  slti        $at, $s3, 0x81
    ctx->pc = 0x1c9c38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9c3c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9C3Cu;
    {
        const bool branch_taken_0x1c9c3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c3c) {
            ctx->pc = 0x1C9C48u;
            goto label_1c9c48;
        }
    }
    ctx->pc = 0x1C9C44u;
    // 0x1c9c44: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9c48:
    // 0x1c9c48: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9C48u;
    {
        const bool branch_taken_0x1c9c48 = (GPR_S64(ctx, 10) >= 0);
        ctx->pc = 0x1C9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C48u;
        // 0x1c9c4c: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c48) {
            ctx->pc = 0x1C9C58u;
            goto label_1c9c58;
        }
    }
    ctx->pc = 0x1C9C50u;
    // 0x1c9c50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c9c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c54: 0x0  nop
    ctx->pc = 0x1c9c54u;
    // NOP
label_1c9c58:
    // 0x1c9c58: 0x2a410081  slti        $at, $s2, 0x81
    ctx->pc = 0x1c9c58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9c5c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9C5Cu;
    {
        const bool branch_taken_0x1c9c5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c5c) {
            ctx->pc = 0x1C9C68u;
            goto label_1c9c68;
        }
    }
    ctx->pc = 0x1C9C64u;
    // 0x1c9c64: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9c68:
    // 0x1c9c68: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9C68u;
    {
        const bool branch_taken_0x1c9c68 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1C9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C68u;
        // 0x1c9c6c: 0x1e0882d  daddu       $s1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c68) {
            ctx->pc = 0x1C9C78u;
            goto label_1c9c78;
        }
    }
    ctx->pc = 0x1C9C70u;
    // 0x1c9c70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c74: 0x0  nop
    ctx->pc = 0x1c9c74u;
    // NOP
label_1c9c78:
    // 0x1c9c78: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c9c78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9c7c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9C7Cu;
    {
        const bool branch_taken_0x1c9c7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c7c) {
            ctx->pc = 0x1C9C88u;
            goto label_1c9c88;
        }
    }
    ctx->pc = 0x1C9C84u;
    // 0x1c9c84: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9c84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9c88:
    // 0x1c9c88: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1c9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c9c8c: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x1c9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1c9c90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c9c94: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9C94u;
    {
        const bool branch_taken_0x1c9c94 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1c9c94) {
            ctx->pc = 0x1C9CA0u;
            goto label_1c9ca0;
        }
    }
    ctx->pc = 0x1C9C9Cu;
    // 0x1c9c9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c9c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9ca0:
    // 0x1c9ca0: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x1c9ca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9ca4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9CA4u;
    {
        const bool branch_taken_0x1c9ca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ca4) {
            ctx->pc = 0x1C9CB0u;
            goto label_1c9cb0;
        }
    }
    ctx->pc = 0x1C9CACu;
    // 0x1c9cac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9cb0:
    // 0x1c9cb0: 0x2ceb821  addu        $s7, $s6, $t6
    ctx->pc = 0x1c9cb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9cb4: 0x2718818  mult        $s1, $s3, $s1
    ctx->pc = 0x1c9cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c9cb8: 0x1189c3  sra         $s1, $s1, 7
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 7));
    // 0x1c9cbc: 0x179880  sll         $s3, $s7, 2
    ctx->pc = 0x1c9cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1c9cc0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1c9cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c9cc4: 0x2939821  addu        $s3, $s4, $s3
    ctx->pc = 0x1c9cc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1c9cc8: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x1c9cc8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c9ccc: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1c9cccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1c9cd0: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x1c9cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c9cd4: 0x178a3c  dsll32      $s1, $s7, 8
    ctx->pc = 0x1c9cd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 23) << (32 + 8));
    // 0x1c9cd8: 0x118a3e  dsrl32      $s1, $s1, 8
    ctx->pc = 0x1c9cd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 8));
    // 0x1c9cdc: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1c9cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1c9ce0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c9ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c9ce4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1c9ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1c9ce8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1c9ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1c9cec: 0x0  nop
    ctx->pc = 0x1c9cecu;
    // NOP
label_1c9cf0:
    // 0x1c9cf0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c9cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c9cf4: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c9cf4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c9cf8: 0x2623f5ff  addiu       $v1, $s1, -0xA01
    ctx->pc = 0x1c9cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964735));
    // 0x1c9cfc: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1c9cfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c9d00: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9D00u;
    {
        const bool branch_taken_0x1c9d00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D00u;
        // 0x1c9d04: 0x24030a06  addiu       $v1, $zero, 0xA06 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2566));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d00) {
            ctx->pc = 0x1C9D20u;
            goto label_1c9d20;
        }
    }
    ctx->pc = 0x1C9D08u;
    // 0x1c9d08: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9D08u;
    {
        const bool branch_taken_0x1c9d08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9d08) {
            ctx->pc = 0x1C9D20u;
            goto label_1c9d20;
        }
    }
    ctx->pc = 0x1C9D10u;
    // 0x1c9d10: 0x24030a07  addiu       $v1, $zero, 0xA07
    ctx->pc = 0x1c9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2567));
    // 0x1c9d14: 0x16230034  bne         $s1, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C9D14u;
    {
        const bool branch_taken_0x1c9d14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9d14) {
            ctx->pc = 0x1C9DE8u;
            goto label_1c9de8;
        }
    }
    ctx->pc = 0x1C9D1Cu;
    // 0x1c9d1c: 0x0  nop
    ctx->pc = 0x1c9d1cu;
    // NOP
label_1c9d20:
    // 0x1c9d20: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9D20u;
    {
        const bool branch_taken_0x1c9d20 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x1C9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D20u;
        // 0x1c9d24: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d20) {
            ctx->pc = 0x1C9D30u;
            goto label_1c9d30;
        }
    }
    ctx->pc = 0x1C9D28u;
    // 0x1c9d28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c9d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d2c: 0x0  nop
    ctx->pc = 0x1c9d2cu;
    // NOP
label_1c9d30:
    // 0x1c9d30: 0x2a610081  slti        $at, $s3, 0x81
    ctx->pc = 0x1c9d30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9d34: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9D34u;
    {
        const bool branch_taken_0x1c9d34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d34) {
            ctx->pc = 0x1C9D40u;
            goto label_1c9d40;
        }
    }
    ctx->pc = 0x1C9D3Cu;
    // 0x1c9d3c: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x1c9d3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9d40:
    // 0x1c9d40: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9D40u;
    {
        const bool branch_taken_0x1c9d40 = (GPR_S64(ctx, 11) >= 0);
        ctx->pc = 0x1C9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D40u;
        // 0x1c9d44: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d40) {
            ctx->pc = 0x1C9D50u;
            goto label_1c9d50;
        }
    }
    ctx->pc = 0x1C9D48u;
    // 0x1c9d48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c9d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d4c: 0x0  nop
    ctx->pc = 0x1c9d4cu;
    // NOP
label_1c9d50:
    // 0x1c9d50: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x1c9d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9d54: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9D54u;
    {
        const bool branch_taken_0x1c9d54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d54) {
            ctx->pc = 0x1C9D60u;
            goto label_1c9d60;
        }
    }
    ctx->pc = 0x1C9D5Cu;
    // 0x1c9d5c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9d60:
    // 0x1c9d60: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9D60u;
    {
        const bool branch_taken_0x1c9d60 = (GPR_S64(ctx, 24) >= 0);
        ctx->pc = 0x1C9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D60u;
        // 0x1c9d64: 0x300902d  daddu       $s2, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d60) {
            ctx->pc = 0x1C9D70u;
            goto label_1c9d70;
        }
    }
    ctx->pc = 0x1C9D68u;
    // 0x1c9d68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c9d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d6c: 0x0  nop
    ctx->pc = 0x1c9d6cu;
    // NOP
label_1c9d70:
    // 0x1c9d70: 0x2a410081  slti        $at, $s2, 0x81
    ctx->pc = 0x1c9d70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9d74: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9D74u;
    {
        const bool branch_taken_0x1c9d74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d74) {
            ctx->pc = 0x1C9D80u;
            goto label_1c9d80;
        }
    }
    ctx->pc = 0x1C9D7Cu;
    // 0x1c9d7c: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1c9d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9d80:
    // 0x1c9d80: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1c9d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c9d84: 0x2368823  subu        $s1, $s1, $s6
    ctx->pc = 0x1c9d84u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c9d88: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x1c9d88u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c9d8c: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9D8Cu;
    {
        const bool branch_taken_0x1c9d8c = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1c9d8c) {
            ctx->pc = 0x1C9D98u;
            goto label_1c9d98;
        }
    }
    ctx->pc = 0x1C9D94u;
    // 0x1c9d94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9d98:
    // 0x1c9d98: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c9d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9d9c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9D9Cu;
    {
        const bool branch_taken_0x1c9d9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d9c) {
            ctx->pc = 0x1C9DA8u;
            goto label_1c9da8;
        }
    }
    ctx->pc = 0x1C9DA4u;
    // 0x1c9da4: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9da8:
    // 0x1c9da8: 0x2ceb821  addu        $s7, $s6, $t6
    ctx->pc = 0x1c9da8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9dac: 0x2729018  mult        $s2, $s3, $s2
    ctx->pc = 0x1c9dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1c9db0: 0x1291c3  sra         $s2, $s2, 7
    ctx->pc = 0x1c9db0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 7));
    // 0x1c9db4: 0x179880  sll         $s3, $s7, 2
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1c9db8: 0x2518818  mult        $s1, $s2, $s1
    ctx->pc = 0x1c9db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c9dbc: 0x2939821  addu        $s3, $s4, $s3
    ctx->pc = 0x1c9dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1c9dc0: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x1c9dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c9dc4: 0x1189c3  sra         $s1, $s1, 7
    ctx->pc = 0x1c9dc4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 7));
    // 0x1c9dc8: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1c9dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c9dcc: 0x17923c  dsll32      $s2, $s7, 8
    ctx->pc = 0x1c9dccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 23) << (32 + 8));
    // 0x1c9dd0: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x1c9dd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
    // 0x1c9dd4: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1c9dd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1c9dd8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c9ddc: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x1c9ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1c9de0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1c9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1c9de4: 0x0  nop
    ctx->pc = 0x1c9de4u;
    // NOP
label_1c9de8:
    // 0x1c9de8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c9dec: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c9decu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c9df0: 0x24030a03  addiu       $v1, $zero, 0xA03
    ctx->pc = 0x1c9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2563));
    // 0x1c9df4: 0x16230042  bne         $s1, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1C9DF4u;
    {
        const bool branch_taken_0x1c9df4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9df4) {
            ctx->pc = 0x1C9F00u;
            goto label_1c9f00;
        }
    }
    ctx->pc = 0x1C9DFCu;
    // 0x1c9dfc: 0x8fb702f0  lw          $s7, 0x2F0($sp)
    ctx->pc = 0x1c9dfcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1c9e00: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x1c9e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9e04: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1c9e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e08: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x1c9e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e0c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9E0Cu;
    {
        const bool branch_taken_0x1c9e0c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E0Cu;
        // 0x1c9e10: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e0c) {
            ctx->pc = 0x1C9E18u;
            goto label_1c9e18;
        }
    }
    ctx->pc = 0x1C9E14u;
    // 0x1c9e14: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c9e14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e18:
    // 0x1c9e18: 0x2ae10081  slti        $at, $s7, 0x81
    ctx->pc = 0x1c9e18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9e1c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9E1Cu;
    {
        const bool branch_taken_0x1c9e1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e1c) {
            ctx->pc = 0x1C9E28u;
            goto label_1c9e28;
        }
    }
    ctx->pc = 0x1C9E24u;
    // 0x1c9e24: 0x24170080  addiu       $s7, $zero, 0x80
    ctx->pc = 0x1c9e24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9e28:
    // 0x1c9e28: 0xc4bc0018  lwc1        $f28, 0x18($a1)
    ctx->pc = 0x1c9e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1c9e2c: 0xc7a600d0  lwc1        $f6, 0xD0($sp)
    ctx->pc = 0x1c9e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c9e30: 0x461c3032  c.eq.s      $f6, $f28
    ctx->pc = 0x1c9e30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9e34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9E34u;
    {
        const bool branch_taken_0x1c9e34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9e34) {
            ctx->pc = 0x1C9E58u;
            goto label_1c9e58;
        }
    }
    ctx->pc = 0x1C9E3Cu;
    // 0x1c9e3c: 0x5410002  bgez        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9E3Cu;
    {
        const bool branch_taken_0x1c9e3c = (GPR_S64(ctx, 10) >= 0);
        ctx->pc = 0x1C9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E3Cu;
        // 0x1c9e40: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e3c) {
            ctx->pc = 0x1C9E48u;
            goto label_1c9e48;
        }
    }
    ctx->pc = 0x1C9E44u;
    // 0x1c9e44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e48:
    // 0x1c9e48: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c9e48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9e4c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9E4Cu;
    {
        const bool branch_taken_0x1c9e4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e4c) {
            ctx->pc = 0x1C9E58u;
            goto label_1c9e58;
        }
    }
    ctx->pc = 0x1C9E54u;
    // 0x1c9e54: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9e58:
    // 0x1c9e58: 0xc4bc0004  lwc1        $f28, 0x4($a1)
    ctx->pc = 0x1c9e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1c9e5c: 0xc7a600cc  lwc1        $f6, 0xCC($sp)
    ctx->pc = 0x1c9e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c9e60: 0x461c3032  c.eq.s      $f6, $f28
    ctx->pc = 0x1c9e60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9e64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9E64u;
    {
        const bool branch_taken_0x1c9e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9e64) {
            ctx->pc = 0x1C9E88u;
            goto label_1c9e88;
        }
    }
    ctx->pc = 0x1C9E6Cu;
    // 0x1c9e6c: 0x5e10002  bgez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9E6Cu;
    {
        const bool branch_taken_0x1c9e6c = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x1C9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E6Cu;
        // 0x1c9e70: 0x1e0982d  daddu       $s3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e6c) {
            ctx->pc = 0x1C9E78u;
            goto label_1c9e78;
        }
    }
    ctx->pc = 0x1C9E74u;
    // 0x1c9e74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c9e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e78:
    // 0x1c9e78: 0x2a610081  slti        $at, $s3, 0x81
    ctx->pc = 0x1c9e78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9e7c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9E7Cu;
    {
        const bool branch_taken_0x1c9e7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e7c) {
            ctx->pc = 0x1C9E88u;
            goto label_1c9e88;
        }
    }
    ctx->pc = 0x1C9E84u;
    // 0x1c9e84: 0x24130080  addiu       $s3, $zero, 0x80
    ctx->pc = 0x1c9e84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9e88:
    // 0x1c9e88: 0xc4bc0010  lwc1        $f28, 0x10($a1)
    ctx->pc = 0x1c9e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1c9e8c: 0xc7a600c8  lwc1        $f6, 0xC8($sp)
    ctx->pc = 0x1c9e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c9e90: 0x461c3032  c.eq.s      $f6, $f28
    ctx->pc = 0x1c9e90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9e94: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C9E94u;
    {
        const bool branch_taken_0x1c9e94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E94u;
        // 0x1c9e98: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e94) {
            ctx->pc = 0x1C9EC0u;
            goto label_1c9ec0;
        }
    }
    ctx->pc = 0x1C9E9Cu;
    // 0x1c9e9c: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x1c9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1c9ea0: 0x390c0  sll         $s2, $v1, 3
    ctx->pc = 0x1c9ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c9ea4: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9EA4u;
    {
        const bool branch_taken_0x1c9ea4 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1c9ea4) {
            ctx->pc = 0x1C9EB0u;
            goto label_1c9eb0;
        }
    }
    ctx->pc = 0x1C9EACu;
    // 0x1c9eac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c9eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9eb0:
    // 0x1c9eb0: 0x2a410081  slti        $at, $s2, 0x81
    ctx->pc = 0x1c9eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9eb4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9EB4u;
    {
        const bool branch_taken_0x1c9eb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9eb4) {
            ctx->pc = 0x1C9EC0u;
            goto label_1c9ec0;
        }
    }
    ctx->pc = 0x1C9EBCu;
    // 0x1c9ebc: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1c9ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9ec0:
    // 0x1c9ec0: 0x2ce1821  addu        $v1, $s6, $t6
    ctx->pc = 0x1c9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9ec4: 0x2f39818  mult        $s3, $s7, $s3
    ctx->pc = 0x1c9ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1c9ec8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9ecc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c9ed0: 0x1399c3  sra         $s3, $s3, 7
    ctx->pc = 0x1c9ed0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 7));
    // 0x1c9ed4: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x1c9ed4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9ed8: 0x2729018  mult        $s2, $s3, $s2
    ctx->pc = 0x1c9ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1c9edc: 0x1291c3  sra         $s2, $s2, 7
    ctx->pc = 0x1c9edcu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 7));
    // 0x1c9ee0: 0x2518818  mult        $s1, $s2, $s1
    ctx->pc = 0x1c9ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c9ee4: 0x179a3c  dsll32      $s3, $s7, 8
    ctx->pc = 0x1c9ee4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 23) << (32 + 8));
    // 0x1c9ee8: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x1c9ee8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
    // 0x1c9eec: 0x1189c3  sra         $s1, $s1, 7
    ctx->pc = 0x1c9eecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 7));
    // 0x1c9ef0: 0x118e00  sll         $s1, $s1, 24
    ctx->pc = 0x1c9ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x1c9ef4: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x1c9ef4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x1c9ef8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1c9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1c9efc: 0x0  nop
    ctx->pc = 0x1c9efcu;
    // NOP
label_1c9f00:
    // 0x1c9f00: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c9f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c9f04: 0x94316ac4  lhu         $s1, 0x6AC4($at)
    ctx->pc = 0x1c9f04u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c9f08: 0x24030506  addiu       $v1, $zero, 0x506
    ctx->pc = 0x1c9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x1c9f0c: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9F0Cu;
    {
        const bool branch_taken_0x1c9f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F0Cu;
        // 0x1c9f10: 0x24030056  addiu       $v1, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f0c) {
            ctx->pc = 0x1C9F20u;
            goto label_1c9f20;
        }
    }
    ctx->pc = 0x1C9F14u;
    // 0x1c9f14: 0x16230034  bne         $s1, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C9F14u;
    {
        const bool branch_taken_0x1c9f14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9f14) {
            ctx->pc = 0x1C9FE8u;
            goto label_1c9fe8;
        }
    }
    ctx->pc = 0x1C9F1Cu;
    // 0x1c9f1c: 0x0  nop
    ctx->pc = 0x1c9f1cu;
    // NOP
label_1c9f20:
    // 0x1c9f20: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x1c9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c9f24: 0x46060832  c.eq.s      $f1, $f6
    ctx->pc = 0x1c9f24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9f28: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9F28u;
    {
        const bool branch_taken_0x1c9f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F28u;
        // 0x1c9f2c: 0x24110080  addiu       $s1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f28) {
            ctx->pc = 0x1C9F50u;
            goto label_1c9f50;
        }
    }
    ctx->pc = 0x1C9F30u;
    // 0x1c9f30: 0x7210003  bgez        $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9F30u;
    {
        const bool branch_taken_0x1c9f30 = (GPR_S64(ctx, 25) >= 0);
        ctx->pc = 0x1C9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F30u;
        // 0x1c9f34: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f30) {
            ctx->pc = 0x1C9F40u;
            goto label_1c9f40;
        }
    }
    ctx->pc = 0x1C9F38u;
    // 0x1c9f38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f3c: 0x0  nop
    ctx->pc = 0x1c9f3cu;
    // NOP
label_1c9f40:
    // 0x1c9f40: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c9f40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9f44: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9F44u;
    {
        const bool branch_taken_0x1c9f44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f44) {
            ctx->pc = 0x1C9F50u;
            goto label_1c9f50;
        }
    }
    ctx->pc = 0x1C9F4Cu;
    // 0x1c9f4c: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9f50:
    // 0x1c9f50: 0xc4bc0018  lwc1        $f28, 0x18($a1)
    ctx->pc = 0x1c9f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1c9f54: 0xc7a600c4  lwc1        $f6, 0xC4($sp)
    ctx->pc = 0x1c9f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c9f58: 0x461c3032  c.eq.s      $f6, $f28
    ctx->pc = 0x1c9f58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9f5c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C9F5Cu;
    {
        const bool branch_taken_0x1c9f5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9f5c) {
            ctx->pc = 0x1C9F88u;
            goto label_1c9f88;
        }
    }
    ctx->pc = 0x1C9F64u;
    // 0x1c9f64: 0x8fb102e0  lw          $s1, 0x2E0($sp)
    ctx->pc = 0x1c9f64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1c9f68: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1c9f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f6c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9F6Cu;
    {
        const bool branch_taken_0x1c9f6c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1c9f6c) {
            ctx->pc = 0x1C9F78u;
            goto label_1c9f78;
        }
    }
    ctx->pc = 0x1C9F74u;
    // 0x1c9f74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9f78:
    // 0x1c9f78: 0x2a210081  slti        $at, $s1, 0x81
    ctx->pc = 0x1c9f78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9f7c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9F7Cu;
    {
        const bool branch_taken_0x1c9f7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f7c) {
            ctx->pc = 0x1C9F88u;
            goto label_1c9f88;
        }
    }
    ctx->pc = 0x1C9F84u;
    // 0x1c9f84: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9f88:
    // 0x1c9f88: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c9f8c: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x1c9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1c9f90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9f94: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9F94u;
    {
        const bool branch_taken_0x1c9f94 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1c9f94) {
            ctx->pc = 0x1C9FA0u;
            goto label_1c9fa0;
        }
    }
    ctx->pc = 0x1C9F9Cu;
    // 0x1c9f9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c9f9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9fa0:
    // 0x1c9fa0: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x1c9fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c9fa4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9FA4u;
    {
        const bool branch_taken_0x1c9fa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9fa4) {
            ctx->pc = 0x1C9FB0u;
            goto label_1c9fb0;
        }
    }
    ctx->pc = 0x1C9FACu;
    // 0x1c9fac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c9facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9fb0:
    // 0x1c9fb0: 0x319fc  dsll32      $v1, $v1, 7
    ctx->pc = 0x1c9fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 7));
    // 0x1c9fb4: 0x319ff  dsra32      $v1, $v1, 7
    ctx->pc = 0x1c9fb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 7));
    // 0x1c9fb8: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x1c9fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c9fbc: 0x2ce8821  addu        $s1, $s6, $t6
    ctx->pc = 0x1c9fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x1c9fc0: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1c9fc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1c9fc4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c9fc8: 0x39e00  sll         $s3, $v1, 24
    ctx->pc = 0x1c9fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c9fcc: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1c9fccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1c9fd0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c9fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9fd4: 0x121a3c  dsll32      $v1, $s2, 8
    ctx->pc = 0x1c9fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1c9fd8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c9fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1c9fdc: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x1c9fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1c9fe0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c9fe4: 0x0  nop
    ctx->pc = 0x1c9fe4u;
    // NOP
label_1c9fe8:
    // 0x1c9fe8: 0x8fa30390  lw          $v1, 0x390($sp)
    ctx->pc = 0x1c9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1c9fec: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1c9fecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c9ff0: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x1c9ff0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x1c9ff4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c9ff8: 0xafa30390  sw          $v1, 0x390($sp)
    ctx->pc = 0x1c9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 3));
    // 0x1c9ffc: 0x8fa30380  lw          $v1, 0x380($sp)
    ctx->pc = 0x1c9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x1ca000: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1ca000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1ca004: 0xafa30380  sw          $v1, 0x380($sp)
    ctx->pc = 0x1ca004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 3));
    // 0x1ca008: 0x8fa303e0  lw          $v1, 0x3E0($sp)
    ctx->pc = 0x1ca008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1ca00c: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x1ca00cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ca010: 0x1460f9e9  bnez        $v1, . + 4 + (-0x617 << 2)
    ctx->pc = 0x1CA010u;
    {
        const bool branch_taken_0x1ca010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA010u;
        // 0x1ca014: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca010) {
            ctx->pc = 0x1C87B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c87b8;
        }
    }
    ctx->pc = 0x1CA018u;
label_1ca018:
    // 0x1ca018: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x1ca018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1ca01c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ca01cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ca020: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ca020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ca024: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1ca024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1ca028: 0xafa303b0  sw          $v1, 0x3B0($sp)
    ctx->pc = 0x1ca028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 3));
    // 0x1ca02c: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1ca02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x1ca030: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ca030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ca034: 0xafa303a0  sw          $v1, 0x3A0($sp)
    ctx->pc = 0x1ca034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 3));
    // 0x1ca038: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x1ca038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1ca03c: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x1ca03cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ca040: 0x1460f997  bnez        $v1, . + 4 + (-0x669 << 2)
    ctx->pc = 0x1CA040u;
    {
        const bool branch_taken_0x1ca040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA040u;
        // 0x1ca044: 0x27390004  addiu       $t9, $t9, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca040) {
            ctx->pc = 0x1C86A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c86a0;
        }
    }
    ctx->pc = 0x1CA048u;
label_1ca048:
    // 0x1ca048: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1ca048u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ca04c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1ca04cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca050: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x1ca050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x1ca054: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1ca054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca058: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x1ca058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1ca05c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1ca05cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ca060: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x1ca060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1ca064: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1ca064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca068: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x1ca068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1ca06c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1ca06cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ca070: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1ca070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1ca074: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ca074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca078: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1ca078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1ca07c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ca07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca080: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1ca080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ca084: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ca084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca088: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1ca088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ca08c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1ca08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ca090: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1ca090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ca094: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ca094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ca098: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ca098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca09c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA09Cu;
        // 0x1ca0a0: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA0A4u;
}
