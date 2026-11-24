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

// Function: sub_00321420
// Address: 0x321420 - 0x321750
void sub_00321420_0x321420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321420_0x321420");
#endif

    switch (ctx->pc) {
        case 0x321554u: goto label_321554;
        case 0x321574u: goto label_321574;
        case 0x321620u: goto label_321620;
        case 0x32164cu: goto label_32164c;
        case 0x321704u: goto label_321704;
        case 0x321730u: goto label_321730;
        default: break;
    }

    ctx->pc = 0x321420u;

    // 0x321420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x321428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32142c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x321430: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x321430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x321434: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x321434u;
    {
        const bool branch_taken_0x321434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x321438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321434u;
        // 0x321438: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321434) {
            ctx->pc = 0x321568u;
            goto label_321568;
        }
    }
    ctx->pc = 0x32143Cu;
    // 0x32143c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321440: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x321440u;
    {
        const bool branch_taken_0x321440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321440) {
            ctx->pc = 0x321530u;
            goto label_321530;
        }
    }
    ctx->pc = 0x321448u;
    // 0x321448: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x321448u;
    {
        const bool branch_taken_0x321448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321448) {
            ctx->pc = 0x321458u;
            goto label_321458;
        }
    }
    ctx->pc = 0x321450u;
    // 0x321450: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x321450u;
    {
        const bool branch_taken_0x321450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321450) {
            ctx->pc = 0x321738u;
            goto label_321738;
        }
    }
    ctx->pc = 0x321458u;
label_321458:
    // 0x321458: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32145c: 0x8c2acebc  lw          $t2, -0x3144($at)
    ctx->pc = 0x32145cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x321460: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x321460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x321464: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x321464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x321468: 0x3c036ff0  lui         $v1, 0x6FF0
    ctx->pc = 0x321468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28656 << 16));
    // 0x32146c: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x32146cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x321470: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x321470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x321474: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321478: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x321478u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x32147c: 0x8c24cec8  lw          $a0, -0x3138($at)
    ctx->pc = 0x32147cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x321480: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321484: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x321484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x321488: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x321488u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32148c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32148cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321490: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x321494: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321498: 0x8c26ced0  lw          $a2, -0x3130($at)
    ctx->pc = 0x321498u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED0u));
    // 0x32149c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32149cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214a0: 0x8c25ced8  lw          $a1, -0x3128($at)
    ctx->pc = 0x3214a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED8u));
    // 0x3214a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3214a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214a8: 0xac2acebc  sw          $t2, -0x3144($at)
    ctx->pc = 0x3214a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3214ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3214acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214b0: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x3214b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x3214b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3214b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214b8: 0x8c2acec8  lw          $t2, -0x3138($at)
    ctx->pc = 0x3214b8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x3214bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3214bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214c0: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x3214c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x3214c4: 0x8c24cedc  lw          $a0, -0x3124($at)
    ctx->pc = 0x3214c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
    // 0x3214c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3214c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214cc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3214ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3214d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3214d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214d4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3214d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3214d8: 0xac28cec8  sw          $t0, -0x3138($at)
    ctx->pc = 0x3214d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x3214dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3214dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214e0: 0x8c28cec8  lw          $t0, -0x3138($at)
    ctx->pc = 0x3214e0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x3214e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3214e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214e8: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3214e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3214ec: 0x1281825  or          $v1, $t1, $t0
    ctx->pc = 0x3214ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3214f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3214f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3214f4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3214f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3214f8: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3214f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3214fc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3214fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x321500: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x321500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x321504: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x321504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x321508: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x321508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x32150c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x321510: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x321510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x321514: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x321514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x321518: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x321518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x32151c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x321520: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x321524: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x321524u;
    {
        const bool branch_taken_0x321524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321524u;
        // 0x321528: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321524) {
            ctx->pc = 0x321738u;
            goto label_321738;
        }
    }
    ctx->pc = 0x32152Cu;
    // 0x32152c: 0x0  nop
    ctx->pc = 0x32152cu;
    // NOP
label_321530:
    // 0x321530: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x321530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x321534: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x321534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x321538: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x321538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x32153c: 0x96050044  lhu         $a1, 0x44($s0)
    ctx->pc = 0x32153cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x321540: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x321540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x321544: 0x92060048  lbu         $a2, 0x48($s0)
    ctx->pc = 0x321544u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x321548: 0x3382b  sltu        $a3, $zero, $v1
    ctx->pc = 0x321548u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32154c: 0xc0c2b48  jal         func_30AD20
    ctx->pc = 0x32154Cu;
    SET_GPR_U32(ctx, 31, 0x321554u);
    ctx->pc = 0x321550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32154Cu;
    // 0x321550: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AD20u, 0x32154Cu, 0x321554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321554u;
label_321554:
    // 0x321554: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x321554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x321558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32155c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x32155Cu;
    {
        const bool branch_taken_0x32155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32155Cu;
        // 0x321560: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32155c) {
            ctx->pc = 0x321738u;
            goto label_321738;
        }
    }
    ctx->pc = 0x321564u;
    // 0x321564: 0x0  nop
    ctx->pc = 0x321564u;
    // NOP
label_321568:
    // 0x321568: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x321568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x32156c: 0xc0c2b78  jal         func_30ADE0
    ctx->pc = 0x32156Cu;
    SET_GPR_U32(ctx, 31, 0x321574u);
    ctx->pc = 0x321570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32156Cu;
    // 0x321570: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ADE0u, 0x32156Cu, 0x321574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321574u;
label_321574:
    // 0x321574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321578: 0x14430037  bne         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x321578u;
    {
        const bool branch_taken_0x321578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321578u;
        // 0x32157c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321578) {
            ctx->pc = 0x321658u;
            goto label_321658;
        }
    }
    ctx->pc = 0x321580u;
    // 0x321580: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x321580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x321584: 0x8c2acebc  lw          $t2, -0x3144($at)
    ctx->pc = 0x321584u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x321588: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x321588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32158c: 0x3c02900f  lui         $v0, 0x900F
    ctx->pc = 0x32158cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36879 << 16));
    // 0x321590: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x321590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x321594: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x321594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x321598: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x321598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x32159c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32159cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215a0: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x3215a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x3215a4: 0x8c28cec8  lw          $t0, -0x3138($at)
    ctx->pc = 0x3215a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x3215a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3215a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215ac: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x3215acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x3215b0: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x3215b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x3215b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3215b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215b8: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x3215b8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3215bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3215bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215c0: 0x8c26ced0  lw          $a2, -0x3130($at)
    ctx->pc = 0x3215c0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3215c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3215c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215c8: 0x8c25ced8  lw          $a1, -0x3128($at)
    ctx->pc = 0x3215c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED8u));
    // 0x3215cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3215ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215d0: 0x8c24cedc  lw          $a0, -0x3124($at)
    ctx->pc = 0x3215d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x3215d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3215d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215d8: 0xac2acebc  sw          $t2, -0x3144($at)
    ctx->pc = 0x3215d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3215dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3215dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215e0: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x3215e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x3215e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3215e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215e8: 0x8c28cec8  lw          $t0, -0x3138($at)
    ctx->pc = 0x3215e8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x3215ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3215ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3215f0: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x3215f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3215f4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3215f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3215f8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3215f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3215fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3215fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x321600: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321604: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x321604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x321608: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x321608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x32160c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x32160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x321610: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321614: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x321614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x321618: 0xc056db8  jal         func_15B6E0
    ctx->pc = 0x321618u;
    SET_GPR_U32(ctx, 31, 0x321620u);
    ctx->pc = 0x32161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321618u;
    // 0x32161c: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B6E0u, 0x321618u, 0x321620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321620u;
label_321620:
    // 0x321620: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x321624: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x321624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x321628: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x321628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x32162c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32162cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x321630: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x321630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x321634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321638: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x321638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32163c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x321640: 0xac22cc34  sw          $v0, -0x33CC($at)
    ctx->pc = 0x321640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CC34u, _value); } while (0);
    // 0x321644: 0xc0d0ac8  jal         func_342B20
    ctx->pc = 0x321644u;
    SET_GPR_U32(ctx, 31, 0x32164Cu);
    ctx->pc = 0x321648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321644u;
    // 0x321648: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B20u, 0x321644u, 0x32164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32164Cu;
label_32164c:
    // 0x32164c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x32164Cu;
    {
        const bool branch_taken_0x32164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32164Cu;
        // 0x321650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32164c) {
            ctx->pc = 0x321740u;
            goto label_321740;
        }
    }
    ctx->pc = 0x321654u;
    // 0x321654: 0x0  nop
    ctx->pc = 0x321654u;
    // NOP
label_321658:
    // 0x321658: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x321658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32165c: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x32165Cu;
    {
        const bool branch_taken_0x32165c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x321660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32165Cu;
        // 0x321660: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32165c) {
            ctx->pc = 0x321738u;
            goto label_321738;
        }
    }
    ctx->pc = 0x321664u;
    // 0x321664: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x321664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x321668: 0x8c2acebc  lw          $t2, -0x3144($at)
    ctx->pc = 0x321668u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x32166c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x32166cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x321670: 0x3c02900f  lui         $v0, 0x900F
    ctx->pc = 0x321670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36879 << 16));
    // 0x321674: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x321674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x321678: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x321678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x32167c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x32167cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x321680: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321684: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x321684u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x321688: 0x8c28cec8  lw          $t0, -0x3138($at)
    ctx->pc = 0x321688u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x32168c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32168cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321690: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x321690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x321694: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x321694u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x321698: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32169c: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x32169cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3216a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3216a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3216a4: 0x8c26ced0  lw          $a2, -0x3130($at)
    ctx->pc = 0x3216a4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3216a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3216a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3216ac: 0x8c25ced8  lw          $a1, -0x3128($at)
    ctx->pc = 0x3216acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED8u));
    // 0x3216b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3216b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3216b4: 0x8c24cedc  lw          $a0, -0x3124($at)
    ctx->pc = 0x3216b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x3216b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3216b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3216bc: 0xac2acebc  sw          $t2, -0x3144($at)
    ctx->pc = 0x3216bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3216c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3216c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3216c4: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x3216c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x3216c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3216c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3216cc: 0x8c28cec8  lw          $t0, -0x3138($at)
    ctx->pc = 0x3216ccu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x3216d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3216d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3216d4: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x3216d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3216d8: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3216d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3216dc: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3216dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3216e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3216e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3216e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3216e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3216e8: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x3216e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3216ec: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x3216ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3216f0: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x3216f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3216f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3216f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3216f8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3216f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3216fc: 0xc056db8  jal         func_15B6E0
    ctx->pc = 0x3216FCu;
    SET_GPR_U32(ctx, 31, 0x321704u);
    ctx->pc = 0x321700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3216FCu;
    // 0x321700: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B6E0u, 0x3216FCu, 0x321704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321704u;
label_321704:
    // 0x321704: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x321708: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x321708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x32170c: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x32170cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x321710: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x321710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x321714: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x321714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x321718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32171c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x321720: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x321724: 0xac22cc34  sw          $v0, -0x33CC($at)
    ctx->pc = 0x321724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CC34u, _value); } while (0);
    // 0x321728: 0xc0d0ac8  jal         func_342B20
    ctx->pc = 0x321728u;
    SET_GPR_U32(ctx, 31, 0x321730u);
    ctx->pc = 0x32172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321728u;
    // 0x32172c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B20u, 0x321728u, 0x321730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321730u;
label_321730:
    // 0x321730: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x321730u;
    {
        const bool branch_taken_0x321730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321730u;
        // 0x321734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321730) {
            ctx->pc = 0x321740u;
            goto label_321740;
        }
    }
    ctx->pc = 0x321738u;
label_321738:
    // 0x321738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32173c: 0x0  nop
    ctx->pc = 0x32173cu;
    // NOP
label_321740:
    // 0x321740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321748: 0x3e00008  jr          $ra
    ctx->pc = 0x321748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321748u;
        // 0x32174c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321750u;
}
