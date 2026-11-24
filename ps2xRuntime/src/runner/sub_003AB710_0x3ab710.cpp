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

// Function: sub_003AB710
// Address: 0x3ab710 - 0x3ab860
void sub_003AB710_0x3ab710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB710_0x3ab710");
#endif

    switch (ctx->pc) {
        case 0x3ab72cu: goto label_3ab72c;
        case 0x3ab740u: goto label_3ab740;
        case 0x3ab750u: goto label_3ab750;
        case 0x3ab798u: goto label_3ab798;
        case 0x3ab82cu: goto label_3ab82c;
        case 0x3ab848u: goto label_3ab848;
        default: break;
    }

    ctx->pc = 0x3ab710u;

    // 0x3ab710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ab714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ab714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ab718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ab718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ab71c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab720: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x3ab720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x3ab724: 0xc09aed0  jal         func_26BB40
    ctx->pc = 0x3AB724u;
    SET_GPR_U32(ctx, 31, 0x3AB72Cu);
    ctx->pc = 0x3AB728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB724u;
    // 0x3ab728: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB40u, 0x3AB724u, 0x3AB72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB72Cu;
label_3ab72c:
    // 0x3ab72c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3ab72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3ab730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ab730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab734: 0x248499e0  addiu       $a0, $a0, -0x6620
    ctx->pc = 0x3ab734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941152));
    // 0x3ab738: 0xc049522  jal         func_125488
    ctx->pc = 0x3AB738u;
    SET_GPR_U32(ctx, 31, 0x3AB740u);
    ctx->pc = 0x3AB73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB738u;
    // 0x3ab73c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3AB738u, 0x3AB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB740u;
label_3ab740:
    // 0x3ab740: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3ab740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3ab744: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x3ab744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x3ab748: 0xc0f8c70  jal         func_3E31C0
    ctx->pc = 0x3AB748u;
    SET_GPR_U32(ctx, 31, 0x3AB750u);
    ctx->pc = 0x3AB74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB748u;
    // 0x3ab74c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E31C0u, 0x3AB748u, 0x3AB750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB750u;
label_3ab750:
    // 0x3ab750: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab754: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x3ab754u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x3ab758: 0x902399f0  lbu         $v1, -0x6610($at)
    ctx->pc = 0x3ab758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9299F0u));
    // 0x3ab75c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ab75cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab760: 0x96020116  lhu         $v0, 0x116($s0)
    ctx->pc = 0x3ab760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x3ab764: 0x25089a70  addiu       $t0, $t0, -0x6590
    ctx->pc = 0x3ab764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941296));
    // 0x3ab768: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab76c: 0xa42299f6  sh          $v0, -0x660A($at)
    ctx->pc = 0x3ab76cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9299F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x9299F6u, _value); } while (0);
    // 0x3ab770: 0x92020110  lbu         $v0, 0x110($s0)
    ctx->pc = 0x3ab770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x3ab774: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab778: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3ab778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ab77c: 0xa02299f0  sb          $v0, -0x6610($at)
    ctx->pc = 0x3ab77cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9299F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9299F0u, _value); } while (0);
    // 0x3ab780: 0x92020111  lbu         $v0, 0x111($s0)
    ctx->pc = 0x3ab780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 273)));
    // 0x3ab784: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab788: 0xa02299f1  sb          $v0, -0x660F($at)
    ctx->pc = 0x3ab788u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9299F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9299F1u, _value); } while (0);
    // 0x3ab78c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab790: 0x902999f1  lbu         $t1, -0x660F($at)
    ctx->pc = 0x3ab790u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x9299F1u));
    // 0x3ab794: 0x0  nop
    ctx->pc = 0x3ab794u;
    // NOP
label_3ab798:
    // 0x3ab798: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x3ab798u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ab79c: 0x254a0005  addiu       $t2, $t2, 0x5
    ctx->pc = 0x3ab79cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5));
    // 0x3ab7a0: 0x91060050  lbu         $a2, 0x50($t0)
    ctx->pc = 0x3ab7a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x3ab7a4: 0x910500a0  lbu         $a1, 0xA0($t0)
    ctx->pc = 0x3ab7a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 160)));
    // 0x3ab7a8: 0x2942000a  slti        $v0, $t2, 0xA
    ctx->pc = 0x3ab7a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ab7ac: 0x910400f0  lbu         $a0, 0xF0($t0)
    ctx->pc = 0x3ab7acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 240)));
    // 0x3ab7b0: 0x91030140  lbu         $v1, 0x140($t0)
    ctx->pc = 0x3ab7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 320)));
    // 0x3ab7b4: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x3ab7b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x3ab7b8: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x3ab7b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3ab7bc: 0x1263025  or          $a2, $t1, $a2
    ctx->pc = 0x3ab7bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x3ab7c0: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x3ab7c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3ab7c4: 0x1252825  or          $a1, $t1, $a1
    ctx->pc = 0x3ab7c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x3ab7c8: 0x25080190  addiu       $t0, $t0, 0x190
    ctx->pc = 0x3ab7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 400));
    // 0x3ab7cc: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x3ab7ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3ab7d0: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x3ab7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x3ab7d4: 0x308900ff  andi        $t1, $a0, 0xFF
    ctx->pc = 0x3ab7d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3ab7d8: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x3ab7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x3ab7dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3AB7DCu;
    {
        const bool branch_taken_0x3ab7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7DCu;
        // 0x3ab7e0: 0x306900ff  andi        $t1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7dc) {
            ctx->pc = 0x3AB798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab798;
        }
    }
    ctx->pc = 0x3AB7E4u;
    // 0x3ab7e4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab7e8: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3ab7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3ab7ec: 0xa02999f1  sb          $t1, -0x660F($at)
    ctx->pc = 0x3ab7ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x9299F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9299F1u, _value); } while (0);
    // 0x3ab7f0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3ab7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ab7f4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab7f8: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x3ab7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3ab7fc: 0xa02299f4  sb          $v0, -0x660C($at)
    ctx->pc = 0x3ab7fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9299F4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9299F4u, _value); } while (0);
    // 0x3ab800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab804: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab808: 0x24020330  addiu       $v0, $zero, 0x330
    ctx->pc = 0x3ab808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x3ab80c: 0xac2699f8  sw          $a2, -0x6608($at)
    ctx->pc = 0x3ab80cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x9299F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9299F8u, _value); } while (0);
    // 0x3ab810: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x3ab810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x3ab814: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab818: 0xac2299fc  sw          $v0, -0x6604($at)
    ctx->pc = 0x3ab818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9299FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9299FCu, _value); } while (0);
    // 0x3ab81c: 0x24025eb0  addiu       $v0, $zero, 0x5EB0
    ctx->pc = 0x3ab81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    // 0x3ab820: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab824: 0xc0eb0c4  jal         func_3AC310
    ctx->pc = 0x3AB824u;
    SET_GPR_U32(ctx, 31, 0x3AB82Cu);
    ctx->pc = 0x3AB828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB824u;
    // 0x3ab828: 0xac229a00  sw          $v0, -0x6600($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC310u, 0x3AB824u, 0x3AB82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB82Cu;
label_3ab82c:
    // 0x3ab82c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab830: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3ab830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3ab834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab838: 0xac229a68  sw          $v0, -0x6598($at)
    ctx->pc = 0x3ab838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x929A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x929A68u, _value); } while (0);
    // 0x3ab83c: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x3ab83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x3ab840: 0xc0eb0f4  jal         func_3AC3D0
    ctx->pc = 0x3AB840u;
    SET_GPR_U32(ctx, 31, 0x3AB848u);
    ctx->pc = 0x3AB844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB840u;
    // 0x3ab844: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC3D0u, 0x3AB840u, 0x3AB848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB848u;
label_3ab848:
    // 0x3ab848: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab84c: 0xac229a6c  sw          $v0, -0x6594($at)
    ctx->pc = 0x3ab84cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x929A6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x929A6Cu, _value); } while (0);
    // 0x3ab850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ab854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab858: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB858u;
        // 0x3ab85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB860u;
}
