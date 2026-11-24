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

// Function: sub_00365800
// Address: 0x365800 - 0x365a2c
void sub_00365800_0x365800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365800_0x365800");
#endif

    switch (ctx->pc) {
        case 0x365834u: goto label_365834;
        case 0x3658fcu: goto label_3658fc;
        case 0x365924u: goto label_365924;
        case 0x365930u: goto label_365930;
        case 0x365944u: goto label_365944;
        case 0x365950u: goto label_365950;
        case 0x36595cu: goto label_36595c;
        case 0x365978u: goto label_365978;
        case 0x365990u: goto label_365990;
        case 0x3659b4u: goto label_3659b4;
        case 0x3659e4u: goto label_3659e4;
        case 0x3659fcu: goto label_3659fc;
        case 0x365a10u: goto label_365a10;
        default: break;
    }

    ctx->pc = 0x365800u;

    // 0x365800: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x365800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x365804: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x365804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x365808: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x365808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36580c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x365810: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x365810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x365818: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x365818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36581c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365820: 0x9083007b  lbu         $v1, 0x7B($a0)
    ctx->pc = 0x365820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 123)));
    // 0x365824: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x365824u;
    {
        const bool branch_taken_0x365824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x365828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365824u;
        // 0x365828: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365824) {
            ctx->pc = 0x365A10u;
            goto label_365a10;
        }
    }
    ctx->pc = 0x36582Cu;
    // 0x36582c: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x36582Cu;
    SET_GPR_U32(ctx, 31, 0x365834u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x36582Cu, 0x365834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365834u;
label_365834:
    // 0x365834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x365834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365838: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x365838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x36583c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x36583cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x365840: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x365840u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x365844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x365848: 0x86650078  lh          $a1, 0x78($s3)
    ctx->pc = 0x365848u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x36584c: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x36584cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x365850: 0x27a8005c  addiu       $t0, $sp, 0x5C
    ctx->pc = 0x365850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x365854: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x365854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x365858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x365858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36585c: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x36585cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x365860: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x365860u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x365864: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x365864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x365868: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x365868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x36586c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x36586cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x365870: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x365870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x365874: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x365874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x365878: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x365878u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x36587c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x36587cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x365880: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x365880u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x365884: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x365884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x365888: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x365888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x36588c: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x36588cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x365890: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x365890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x365894: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x365894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x365898: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x365898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x36589c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x36589cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3658a0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3658a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3658a4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x3658a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x3658a8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3658a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3658ac: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x3658acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x3658b0: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x3658b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x3658b4: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x3658b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3658b8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3658b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3658bc: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x3658bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x3658c0: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x3658c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3658c4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3658c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x3658c8: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x3658c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x3658cc: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x3658ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3658d0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x3658d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3658d4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3658d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3658d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3658d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3658dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3658dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3658e0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x3658e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x3658e4: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x3658e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x3658e8: 0x90450006  lbu         $a1, 0x6($v0)
    ctx->pc = 0x3658e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x3658ec: 0x90460007  lbu         $a2, 0x7($v0)
    ctx->pc = 0x3658ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x3658f0: 0x9048000b  lbu         $t0, 0xB($v0)
    ctx->pc = 0x3658f0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x3658f4: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x3658F4u;
    SET_GPR_U32(ctx, 31, 0x3658FCu);
    ctx->pc = 0x3658F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3658F4u;
    // 0x3658f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x3658F4u, 0x3658FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3658FCu;
label_3658fc:
    // 0x3658fc: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x3658fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x365900: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x365900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x365904: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x365904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x365908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36590c: 0x9063000a  lbu         $v1, 0xA($v1)
    ctx->pc = 0x36590cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x365910: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x365910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x365914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x365914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x365918: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x365918u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36591c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x36591Cu;
    SET_GPR_U32(ctx, 31, 0x365924u);
    ctx->pc = 0x365920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36591Cu;
    // 0x365920: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x36591Cu, 0x365924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365924u;
label_365924:
    // 0x365924: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x365924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x365928: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x365928u;
    SET_GPR_U32(ctx, 31, 0x365930u);
    ctx->pc = 0x36592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365928u;
    // 0x36592c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x365928u, 0x365930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365930u;
label_365930:
    // 0x365930: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x365930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x365934: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x365934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x365938: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x365938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36593c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x36593Cu;
    SET_GPR_U32(ctx, 31, 0x365944u);
    ctx->pc = 0x365940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36593Cu;
    // 0x365940: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x36593Cu, 0x365944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365944u;
label_365944:
    // 0x365944: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x365944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x365948: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x365948u;
    SET_GPR_U32(ctx, 31, 0x365950u);
    ctx->pc = 0x36594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365948u;
    // 0x36594c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x365948u, 0x365950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365950u;
label_365950:
    // 0x365950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365954: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x365954u;
    SET_GPR_U32(ctx, 31, 0x36595Cu);
    ctx->pc = 0x365958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365954u;
    // 0x365958: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x365954u, 0x36595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36595Cu;
label_36595c:
    // 0x36595c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36595cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365960: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365964: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x365964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x365968: 0x26640120  addiu       $a0, $s3, 0x120
    ctx->pc = 0x365968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x36596c: 0x9048000c  lbu         $t0, 0xC($v0)
    ctx->pc = 0x36596cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x365970: 0xc074458  jal         func_1D1160
    ctx->pc = 0x365970u;
    SET_GPR_U32(ctx, 31, 0x365978u);
    ctx->pc = 0x365974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365970u;
    // 0x365974: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x365970u, 0x365978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365978u;
label_365978:
    // 0x365978: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x365978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x36597c: 0x9062000e  lbu         $v0, 0xE($v1)
    ctx->pc = 0x36597cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x365980: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x365980u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x365984: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x365984u;
    {
        const bool branch_taken_0x365984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x365988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365984u;
        // 0x365988: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365984) {
            ctx->pc = 0x3659D0u;
            goto label_3659d0;
        }
    }
    ctx->pc = 0x36598Cu;
    // 0x36598c: 0x0  nop
    ctx->pc = 0x36598cu;
    // NOP
label_365990:
    // 0x365990: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x365990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x365994: 0xc46c0030  lwc1        $f12, 0x30($v1)
    ctx->pc = 0x365994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x365998: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x365998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x36599c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x36599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3659a0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3659a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3659a4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3659a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3659a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3659a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3659ac: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x3659ACu;
    SET_GPR_U32(ctx, 31, 0x3659B4u);
    ctx->pc = 0x3659B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659ACu;
    // 0x3659b0: 0x26690090  addiu       $t1, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x3659ACu, 0x3659B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659B4u;
label_3659b4:
    // 0x3659b4: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x3659b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x3659b8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3659b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3659bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3659bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3659c0: 0x9062000e  lbu         $v0, 0xE($v1)
    ctx->pc = 0x3659c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x3659c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3659c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3659c8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3659C8u;
    {
        const bool branch_taken_0x3659c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3659c8) {
            ctx->pc = 0x365990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365990;
        }
    }
    ctx->pc = 0x3659D0u;
label_3659d0:
    // 0x3659d0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x3659d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x3659d4: 0x26660040  addiu       $a2, $s3, 0x40
    ctx->pc = 0x3659d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x3659d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3659d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3659dc: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x3659DCu;
    SET_GPR_U32(ctx, 31, 0x3659E4u);
    ctx->pc = 0x3659E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659DCu;
    // 0x3659e0: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x3659DCu, 0x3659E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659E4u;
label_3659e4:
    // 0x3659e4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3659e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3659e8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3659E8u;
    {
        const bool branch_taken_0x3659e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3659ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659E8u;
        // 0x3659ec: 0x38283  sra         $s0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3659e8) {
            ctx->pc = 0x365A10u;
            goto label_365a10;
        }
    }
    ctx->pc = 0x3659F0u;
    // 0x3659f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3659f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3659f4: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x3659F4u;
    SET_GPR_U32(ctx, 31, 0x3659FCu);
    ctx->pc = 0x3659F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659F4u;
    // 0x3659f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x3659F4u, 0x3659FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659FCu;
label_3659fc:
    // 0x3659fc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3659fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x365a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a08: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x365A08u;
    SET_GPR_U32(ctx, 31, 0x365A10u);
    ctx->pc = 0x365A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A08u;
    // 0x365a0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x365A08u, 0x365A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A10u;
label_365a10:
    // 0x365a10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x365a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365a14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x365a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365a18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x365a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365a24: 0x3e00008  jr          $ra
    ctx->pc = 0x365A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A24u;
        // 0x365a28: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365A2Cu;
}
