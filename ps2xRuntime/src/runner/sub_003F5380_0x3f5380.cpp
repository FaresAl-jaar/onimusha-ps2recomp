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

// Function: sub_003F5380
// Address: 0x3f5380 - 0x3f5610
void sub_003F5380_0x3f5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5380_0x3f5380");
#endif

    switch (ctx->pc) {
        case 0x3f53acu: goto label_3f53ac;
        case 0x3f5448u: goto label_3f5448;
        case 0x3f54d4u: goto label_3f54d4;
        case 0x3f5568u: goto label_3f5568;
        case 0x3f55f8u: goto label_3f55f8;
        default: break;
    }

    ctx->pc = 0x3f5380u;

    // 0x3f5380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f5384: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f5384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f5388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f5388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f538c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f5390: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f5390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5394: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f5398: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f5398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f539c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f539cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f53a0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3f53a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3f53a4: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3F53A4u;
    SET_GPR_U32(ctx, 31, 0x3F53ACu);
    ctx->pc = 0x3F53A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F53A4u;
    // 0x3f53a8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3F53A4u, 0x3F53ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F53ACu;
label_3f53ac:
    // 0x3f53ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f53acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f53b0: 0x12200091  beqz        $s1, . + 4 + (0x91 << 2)
    ctx->pc = 0x3F53B0u;
    {
        const bool branch_taken_0x3f53b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f53b0) {
            ctx->pc = 0x3F55F8u;
            goto label_3f55f8;
        }
    }
    ctx->pc = 0x3F53B8u;
    // 0x3f53b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f53bc: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3f53bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3f53c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3f53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3f53c4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f53c8: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x3f53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x3f53cc: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x3f53ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3f53d0: 0x3443004c  ori         $v1, $v0, 0x4C
    ctx->pc = 0x3f53d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x3f53d4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3f53d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3f53d8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3f53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3f53dc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3f53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3f53e0: 0x8e2b0004  lw          $t3, 0x4($s1)
    ctx->pc = 0x3f53e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3f53e4: 0x344a2000  ori         $t2, $v0, 0x2000
    ctx->pc = 0x3f53e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3f53e8: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x3f53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x3f53ec: 0x3c027960  lui         $v0, 0x7960
    ctx->pc = 0x3f53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31072 << 16));
    // 0x3f53f0: 0x34687000  ori         $t0, $v1, 0x7000
    ctx->pc = 0x3f53f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x3f53f4: 0x34679000  ori         $a3, $v1, 0x9000
    ctx->pc = 0x3f53f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x3f53f8: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x3f53f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3f53fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f53fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5400: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x3f5400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3f5404: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5408: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x3f5408u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x3f540c: 0xae2a0004  sw          $t2, 0x4($s1)
    ctx->pc = 0x3f540cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 10));
    // 0x3f5410: 0xa229000f  sb          $t1, 0xF($s1)
    ctx->pc = 0x3f5410u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 9));
    // 0x3f5414: 0xae280018  sw          $t0, 0x18($s1)
    ctx->pc = 0x3f5414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 8));
    // 0x3f5418: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x3f5418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x3f541c: 0xae270020  sw          $a3, 0x20($s1)
    ctx->pc = 0x3f541cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 7));
    // 0x3f5420: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x3f5420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
    // 0x3f5424: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x3f5424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x3f5428: 0xae320034  sw          $s2, 0x34($s1)
    ctx->pc = 0x3f5428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 18));
    // 0x3f542c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x3f542cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x3f5430: 0xae32003c  sw          $s2, 0x3C($s1)
    ctx->pc = 0x3f5430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 18));
    // 0x3f5434: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3f5434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3f5438: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3f5438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x3f543c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x3f543cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x3f5440: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3F5440u;
    SET_GPR_U32(ctx, 31, 0x3F5448u);
    ctx->pc = 0x3F5444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5440u;
    // 0x3f5444: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3F5440u, 0x3F5448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5448u;
label_3f5448:
    // 0x3f5448: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3f5448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3f544c: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x3f544cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x3f5450: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x3f5450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x3f5454: 0x3442004c  ori         $v0, $v0, 0x4C
    ctx->pc = 0x3f5454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x3f5458: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x3f5458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x3f545c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f5460: 0x8e2b0044  lw          $t3, 0x44($s1)
    ctx->pc = 0x3f5460u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x3f5464: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3f5464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3f5468: 0x344a2000  ori         $t2, $v0, 0x2000
    ctx->pc = 0x3f5468u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3f546c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x3f546cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3f5470: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x3f5470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x3f5474: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3f5474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3f5478: 0x34487000  ori         $t0, $v0, 0x7000
    ctx->pc = 0x3f5478u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3f547c: 0x34479000  ori         $a3, $v0, 0x9000
    ctx->pc = 0x3f547cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3f5480: 0x3c0286a0  lui         $v0, 0x86A0
    ctx->pc = 0x3f5480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34464 << 16));
    // 0x3f5484: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x3f5484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3f5488: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x3f5488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3f548c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f548cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5490: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x3f5490u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x3f5494: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x3f5494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3f5498: 0xae2a0044  sw          $t2, 0x44($s1)
    ctx->pc = 0x3f5498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 10));
    // 0x3f549c: 0xa229004f  sb          $t1, 0x4F($s1)
    ctx->pc = 0x3f549cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 9));
    // 0x3f54a0: 0xae280058  sw          $t0, 0x58($s1)
    ctx->pc = 0x3f54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 8));
    // 0x3f54a4: 0xae32005c  sw          $s2, 0x5C($s1)
    ctx->pc = 0x3f54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 18));
    // 0x3f54a8: 0xae270060  sw          $a3, 0x60($s1)
    ctx->pc = 0x3f54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 7));
    // 0x3f54ac: 0xae320064  sw          $s2, 0x64($s1)
    ctx->pc = 0x3f54acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 18));
    // 0x3f54b0: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x3f54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x3f54b4: 0xae320074  sw          $s2, 0x74($s1)
    ctx->pc = 0x3f54b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 18));
    // 0x3f54b8: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x3f54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x3f54bc: 0xae32007c  sw          $s2, 0x7C($s1)
    ctx->pc = 0x3f54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 18));
    // 0x3f54c0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3f54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x3f54c4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3f54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x3f54c8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x3f54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x3f54cc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3F54CCu;
    SET_GPR_U32(ctx, 31, 0x3F54D4u);
    ctx->pc = 0x3F54D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F54CCu;
    // 0x3f54d0: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3F54CCu, 0x3F54D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F54D4u;
label_3f54d4:
    // 0x3f54d4: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x3f54d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3f54d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f54dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3f54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3f54e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f54e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f54e4: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x3f54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x3f54e8: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3f54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3f54ec: 0x3443004c  ori         $v1, $v0, 0x4C
    ctx->pc = 0x3f54ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x3f54f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f54f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f54f4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3f54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3f54f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3f54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3f54fc: 0x8e2c0004  lw          $t4, 0x4($s1)
    ctx->pc = 0x3f54fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3f5500: 0x344b2000  ori         $t3, $v0, 0x2000
    ctx->pc = 0x3f5500u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3f5504: 0x3c0284e0  lui         $v0, 0x84E0
    ctx->pc = 0x3f5504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34016 << 16));
    // 0x3f5508: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f5508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3f550c: 0x344a7000  ori         $t2, $v0, 0x7000
    ctx->pc = 0x3f550cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3f5510: 0x34499000  ori         $t1, $v0, 0x9000
    ctx->pc = 0x3f5510u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3f5514: 0x3c0286a0  lui         $v0, 0x86A0
    ctx->pc = 0x3f5514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34464 << 16));
    // 0x3f5518: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f551c: 0x34487000  ori         $t0, $v0, 0x7000
    ctx->pc = 0x3f551cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3f5520: 0x34479000  ori         $a3, $v0, 0x9000
    ctx->pc = 0x3f5520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3f5524: 0x3c028001  lui         $v0, 0x8001
    ctx->pc = 0x3f5524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32769 << 16));
    // 0x3f5528: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x3f5528u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x3f552c: 0xae2b0004  sw          $t3, 0x4($s1)
    ctx->pc = 0x3f552cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 11));
    // 0x3f5530: 0xa220000f  sb          $zero, 0xF($s1)
    ctx->pc = 0x3f5530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f5534: 0xae2a0018  sw          $t2, 0x18($s1)
    ctx->pc = 0x3f5534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 10));
    // 0x3f5538: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x3f5538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
    // 0x3f553c: 0xae290020  sw          $t1, 0x20($s1)
    ctx->pc = 0x3f553cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 9));
    // 0x3f5540: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x3f5540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
    // 0x3f5544: 0xae280030  sw          $t0, 0x30($s1)
    ctx->pc = 0x3f5544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 8));
    // 0x3f5548: 0xae320034  sw          $s2, 0x34($s1)
    ctx->pc = 0x3f5548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 18));
    // 0x3f554c: 0xae270038  sw          $a3, 0x38($s1)
    ctx->pc = 0x3f554cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 7));
    // 0x3f5550: 0xae32003c  sw          $s2, 0x3C($s1)
    ctx->pc = 0x3f5550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 18));
    // 0x3f5554: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3f5554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3f5558: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3f5558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x3f555c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3f555cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x3f5560: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3F5560u;
    SET_GPR_U32(ctx, 31, 0x3F5568u);
    ctx->pc = 0x3F5564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5560u;
    // 0x3f5564: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3F5560u, 0x3F5568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5568u;
label_3f5568:
    // 0x3f5568: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f5568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f556c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f556cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f5570: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x3f5570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x3f5574: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f5574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5578: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x3f5578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x3f557c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3f557cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3f5580: 0x3443004c  ori         $v1, $v0, 0x4C
    ctx->pc = 0x3f5580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x3f5584: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x3f5584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3f5588: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x3f5588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x3f558c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3f558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3f5590: 0x8e2c0044  lw          $t4, 0x44($s1)
    ctx->pc = 0x3f5590u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x3f5594: 0x344b2000  ori         $t3, $v0, 0x2000
    ctx->pc = 0x3f5594u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3f5598: 0x3c027960  lui         $v0, 0x7960
    ctx->pc = 0x3f5598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31072 << 16));
    // 0x3f559c: 0x3c038001  lui         $v1, 0x8001
    ctx->pc = 0x3f559cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32769 << 16));
    // 0x3f55a0: 0x344a7000  ori         $t2, $v0, 0x7000
    ctx->pc = 0x3f55a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3f55a4: 0x34499000  ori         $t1, $v0, 0x9000
    ctx->pc = 0x3f55a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3f55a8: 0x3c027b20  lui         $v0, 0x7B20
    ctx->pc = 0x3f55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31520 << 16));
    // 0x3f55ac: 0x34487000  ori         $t0, $v0, 0x7000
    ctx->pc = 0x3f55acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x3f55b0: 0x34479000  ori         $a3, $v0, 0x9000
    ctx->pc = 0x3f55b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3f55b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f55b8: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x3f55b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x3f55bc: 0xae2b0044  sw          $t3, 0x44($s1)
    ctx->pc = 0x3f55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 11));
    // 0x3f55c0: 0xa220004f  sb          $zero, 0x4F($s1)
    ctx->pc = 0x3f55c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f55c4: 0xae2a0058  sw          $t2, 0x58($s1)
    ctx->pc = 0x3f55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 10));
    // 0x3f55c8: 0xae32005c  sw          $s2, 0x5C($s1)
    ctx->pc = 0x3f55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 18));
    // 0x3f55cc: 0xae290060  sw          $t1, 0x60($s1)
    ctx->pc = 0x3f55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 9));
    // 0x3f55d0: 0xae320064  sw          $s2, 0x64($s1)
    ctx->pc = 0x3f55d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 18));
    // 0x3f55d4: 0xae280070  sw          $t0, 0x70($s1)
    ctx->pc = 0x3f55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 8));
    // 0x3f55d8: 0xae320074  sw          $s2, 0x74($s1)
    ctx->pc = 0x3f55d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 18));
    // 0x3f55dc: 0xae270078  sw          $a3, 0x78($s1)
    ctx->pc = 0x3f55dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 7));
    // 0x3f55e0: 0xae32007c  sw          $s2, 0x7C($s1)
    ctx->pc = 0x3f55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 18));
    // 0x3f55e4: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x3f55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x3f55e8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3f55e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x3f55ec: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x3f55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x3f55f0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3F55F0u;
    SET_GPR_U32(ctx, 31, 0x3F55F8u);
    ctx->pc = 0x3F55F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F55F0u;
    // 0x3f55f4: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3F55F0u, 0x3F55F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F55F8u;
label_3f55f8:
    // 0x3f55f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f55f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f55fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f55fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f5600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f5600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f5604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f5604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f5608: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5608u;
        // 0x3f560c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5610u;
}
