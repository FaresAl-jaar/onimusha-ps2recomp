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

// Function: sub_00174F70
// Address: 0x174f70 - 0x17515c
void sub_00174F70_0x174f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174F70_0x174f70");
#endif

    switch (ctx->pc) {
        case 0x174f9cu: goto label_174f9c;
        case 0x174fb0u: goto label_174fb0;
        case 0x1750b4u: goto label_1750b4;
        case 0x1750f0u: goto label_1750f0;
        case 0x17514cu: goto label_17514c;
        default: break;
    }

    ctx->pc = 0x174f70u;

    // 0x174f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174f74: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x174f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x174f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174f84: 0x24060a00  addiu       $a2, $zero, 0xA00
    ctx->pc = 0x174f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x174f88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f8c: 0xa3828624  sb          $v0, -0x79DC($gp)
    ctx->pc = 0x174f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936100), (uint8_t)GPR_U32(ctx, 2));
    // 0x174f90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x174f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x174f94: 0xc049590  jal         func_125640
    ctx->pc = 0x174F94u;
    SET_GPR_U32(ctx, 31, 0x174F9Cu);
    ctx->pc = 0x174F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F94u;
    // 0x174f98: 0x2484b1a0  addiu       $a0, $a0, -0x4E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x174F94u, 0x174F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F9Cu;
label_174f9c:
    // 0x174f9c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x174f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x174fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fa4: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x174fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
    // 0x174fa8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x174fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x174fac: 0x0  nop
    ctx->pc = 0x174facu;
    // NOP
label_174fb0:
    // 0x174fb0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x174fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x174fb4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x174fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x174fb8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x174fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x174fbc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x174fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x174fc0: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x174fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x174fc4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x174fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x174fc8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x174fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x174fcc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x174fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x174fd0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x174fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x174fd4: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x174fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x174fd8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x174fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x174fdc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x174fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x174fe0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x174fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x174fe4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x174fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x174fe8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x174fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x174fec: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x174fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x174ff0: 0xa4830050  sh          $v1, 0x50($a0)
    ctx->pc = 0x174ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x174ff4: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x174ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x174ff8: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x174ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x174ffc: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x174ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x175000: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x175000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x175004: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x175004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x175008: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x175008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x17500c: 0xa4830078  sh          $v1, 0x78($a0)
    ctx->pc = 0x17500cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x175010: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x175010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x175014: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x175014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x175018: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x175018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x17501c: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x17501cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x175020: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x175020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x175024: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x175024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x175028: 0xa48300a0  sh          $v1, 0xA0($a0)
    ctx->pc = 0x175028u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x17502c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x17502cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x175030: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x175030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x175034: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x175034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x175038: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x175038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x17503c: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x17503cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x175040: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x175040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x175044: 0xa48300c8  sh          $v1, 0xC8($a0)
    ctx->pc = 0x175044u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x175048: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x175048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x17504c: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x17504cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x175050: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x175050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x175054: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x175054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x175058: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x175058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x17505c: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x17505cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x175060: 0xa48300f0  sh          $v1, 0xF0($a0)
    ctx->pc = 0x175060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x175064: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x175064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x175068: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x175068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
    // 0x17506c: 0xac800108  sw          $zero, 0x108($a0)
    ctx->pc = 0x17506cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
    // 0x175070: 0xac80010c  sw          $zero, 0x10C($a0)
    ctx->pc = 0x175070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
    // 0x175074: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x175074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x175078: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x175078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
    // 0x17507c: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x17507cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x175080: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x175080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
    // 0x175084: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x175084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
    // 0x175088: 0xac800130  sw          $zero, 0x130($a0)
    ctx->pc = 0x175088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 0));
    // 0x17508c: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x17508cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x175090: 0xac800138  sw          $zero, 0x138($a0)
    ctx->pc = 0x175090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
    // 0x175094: 0xac80013c  sw          $zero, 0x13C($a0)
    ctx->pc = 0x175094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 0));
    // 0x175098: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x175098u;
    {
        const bool branch_taken_0x175098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175098u;
        // 0x17509c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175098) {
            ctx->pc = 0x174FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174fb0;
        }
    }
    ctx->pc = 0x1750A0u;
    // 0x1750a0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1750a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1750a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1750a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750a8: 0x2484bba0  addiu       $a0, $a0, -0x4460
    ctx->pc = 0x1750a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949792));
    // 0x1750ac: 0xc049590  jal         func_125640
    ctx->pc = 0x1750ACu;
    SET_GPR_U32(ctx, 31, 0x1750B4u);
    ctx->pc = 0x1750B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1750ACu;
    // 0x1750b0: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1750ACu, 0x1750B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750B4u;
label_1750b4:
    // 0x1750b4: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x1750b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x1750b8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1750b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1750bc: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x1750bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
    // 0x1750c0: 0x2442af10  addiu       $v0, $v0, -0x50F0
    ctx->pc = 0x1750c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946576));
    // 0x1750c4: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x1750c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x1750c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1750c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750cc: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x1750ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x1750d0: 0xa2000211  sb          $zero, 0x211($s0)
    ctx->pc = 0x1750d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 529), (uint8_t)GPR_U32(ctx, 0));
    // 0x1750d4: 0x3c030082  lui         $v1, 0x82
    ctx->pc = 0x1750d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)130 << 16));
    // 0x1750d8: 0xa2000210  sb          $zero, 0x210($s0)
    ctx->pc = 0x1750d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 0));
    // 0x1750dc: 0x2463cba0  addiu       $v1, $v1, -0x3460
    ctx->pc = 0x1750dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953888));
    // 0x1750e0: 0xae020228  sw          $v0, 0x228($s0)
    ctx->pc = 0x1750e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
    // 0x1750e4: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1750e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1750e8: 0x24c66ff0  addiu       $a2, $a2, 0x6FF0
    ctx->pc = 0x1750e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28656));
    // 0x1750ec: 0x0  nop
    ctx->pc = 0x1750ecu;
    // NOP
label_1750f0:
    // 0x1750f0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1750f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1750f4: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1750f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1750f8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1750f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1750fc: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1750fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x175100: 0x2c82001a  sltiu       $v0, $a0, 0x1A
    ctx->pc = 0x175100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x175104: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x175104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x175108: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x175108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x17510c: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x17510cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x175110: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x175110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x175114: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x175114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
    // 0x175118: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x175118u;
    {
        const bool branch_taken_0x175118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175118u;
        // 0x17511c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175118) {
            ctx->pc = 0x1750F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1750f0;
        }
    }
    ctx->pc = 0x175120u;
    // 0x175120: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x175120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
    // 0x175124: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x175124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x175128: 0x2442cba0  addiu       $v0, $v0, -0x3460
    ctx->pc = 0x175128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953888));
    // 0x17512c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x17512cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x175130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175134: 0x2484cc30  addiu       $a0, $a0, -0x33D0
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954032));
    // 0x175138: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x175138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x17513c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17513cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175140: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x175140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x175144: 0xc05d3c8  jal         func_174F20
    ctx->pc = 0x175144u;
    SET_GPR_U32(ctx, 31, 0x17514Cu);
    ctx->pc = 0x175148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175144u;
    // 0x175148: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F20u, 0x175144u, 0x17514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17514Cu;
label_17514c:
    // 0x17514c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17514cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175154: 0x3e00008  jr          $ra
    ctx->pc = 0x175154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175154u;
        // 0x175158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17515Cu;
}
