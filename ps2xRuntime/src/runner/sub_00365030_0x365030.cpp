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

// Function: sub_00365030
// Address: 0x365030 - 0x3651c0
void sub_00365030_0x365030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365030_0x365030");
#endif

    switch (ctx->pc) {
        case 0x36507cu: goto label_36507c;
        case 0x365084u: goto label_365084;
        case 0x3650c8u: goto label_3650c8;
        case 0x3650d8u: goto label_3650d8;
        case 0x3650e8u: goto label_3650e8;
        case 0x3650f8u: goto label_3650f8;
        case 0x36510cu: goto label_36510c;
        case 0x365120u: goto label_365120;
        case 0x365140u: goto label_365140;
        case 0x365148u: goto label_365148;
        case 0x365158u: goto label_365158;
        case 0x365168u: goto label_365168;
        case 0x365178u: goto label_365178;
        case 0x365180u: goto label_365180;
        case 0x36518cu: goto label_36518c;
        case 0x3651a0u: goto label_3651a0;
        case 0x3651acu: goto label_3651ac;
        default: break;
    }

    ctx->pc = 0x365030u;

    // 0x365030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x365034: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x365034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36503c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x365040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365044: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x365044u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x365048: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x365048u;
    {
        const bool branch_taken_0x365048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365048u;
        // 0x36504c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365048) {
            ctx->pc = 0x365160u;
            goto label_365160;
        }
    }
    ctx->pc = 0x365050u;
    // 0x365050: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x365050u;
    {
        const bool branch_taken_0x365050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365050) {
            ctx->pc = 0x365118u;
            goto label_365118;
        }
    }
    ctx->pc = 0x365058u;
    // 0x365058: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365058u;
    {
        const bool branch_taken_0x365058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365058) {
            ctx->pc = 0x365068u;
            goto label_365068;
        }
    }
    ctx->pc = 0x365060u;
    // 0x365060: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x365060u;
    {
        const bool branch_taken_0x365060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365060) {
            ctx->pc = 0x3651B0u;
            goto label_3651b0;
        }
    }
    ctx->pc = 0x365068u;
label_365068:
    // 0x365068: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x365068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36506c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36506cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x365070: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x365070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x365074: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x365074u;
    SET_GPR_U32(ctx, 31, 0x36507Cu);
    ctx->pc = 0x365078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365074u;
    // 0x365078: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x365074u, 0x36507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36507Cu;
label_36507c:
    // 0x36507c: 0xc09c3c8  jal         func_270F20
    ctx->pc = 0x36507Cu;
    SET_GPR_U32(ctx, 31, 0x365084u);
    ctx->pc = 0x270F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270F20u, 0x36507Cu, 0x365084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365084u;
label_365084:
    // 0x365084: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x365084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x365088: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x365088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x36508c: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x36508cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x365090: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x365090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x365094: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x365094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x365098: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x365098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x36509c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x36509cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3650a0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3650a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3650a4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3650a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3650a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3650a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3650ac: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3650acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3650b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3650b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3650b4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3650b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3650b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3650b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3650bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3650bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3650c0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3650C0u;
    SET_GPR_U32(ctx, 31, 0x3650C8u);
    ctx->pc = 0x3650C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3650C0u;
    // 0x3650c4: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3650C0u, 0x3650C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650C8u;
label_3650c8:
    // 0x3650c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3650c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3650cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3650ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3650d0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3650D0u;
    SET_GPR_U32(ctx, 31, 0x3650D8u);
    ctx->pc = 0x3650D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3650D0u;
    // 0x3650d4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3650D0u, 0x3650D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650D8u;
label_3650d8:
    // 0x3650d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3650d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3650dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3650dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3650e0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3650E0u;
    SET_GPR_U32(ctx, 31, 0x3650E8u);
    ctx->pc = 0x3650E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3650E0u;
    // 0x3650e4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3650E0u, 0x3650E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650E8u;
label_3650e8:
    // 0x3650e8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3650e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3650ec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3650ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3650f0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3650F0u;
    SET_GPR_U32(ctx, 31, 0x3650F8u);
    ctx->pc = 0x3650F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3650F0u;
    // 0x3650f4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3650F0u, 0x3650F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650F8u;
label_3650f8:
    // 0x3650f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3650f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3650fc: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3650fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x365100: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x365100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC98u));
    // 0x365104: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x365104u;
    SET_GPR_U32(ctx, 31, 0x36510Cu);
    ctx->pc = 0x365108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365104u;
    // 0x365108: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x365104u, 0x36510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36510Cu;
label_36510c:
    // 0x36510c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x36510Cu;
    {
        const bool branch_taken_0x36510c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36510c) {
            ctx->pc = 0x3651B0u;
            goto label_3651b0;
        }
    }
    ctx->pc = 0x365114u;
    // 0x365114: 0x0  nop
    ctx->pc = 0x365114u;
    // NOP
label_365118:
    // 0x365118: 0xc05551c  jal         func_155470
    ctx->pc = 0x365118u;
    SET_GPR_U32(ctx, 31, 0x365120u);
    ctx->pc = 0x36511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365118u;
    // 0x36511c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x365118u, 0x365120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365120u;
label_365120:
    // 0x365120: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x365120u;
    {
        const bool branch_taken_0x365120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365120) {
            ctx->pc = 0x3651B0u;
            goto label_3651b0;
        }
    }
    ctx->pc = 0x365128u;
    // 0x365128: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x365128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x36512c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x36512cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x365130: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x365130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x365134: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x365138: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x365138u;
    SET_GPR_U32(ctx, 31, 0x365140u);
    ctx->pc = 0x36513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365138u;
    // 0x36513c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x365138u, 0x365140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365140u;
label_365140:
    // 0x365140: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x365140u;
    SET_GPR_U32(ctx, 31, 0x365148u);
    ctx->pc = 0x365144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365140u;
    // 0x365144: 0x24040ebb  addiu       $a0, $zero, 0xEBB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3771));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x365140u, 0x365148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365148u;
label_365148:
    // 0x365148: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x365148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x36514c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36514cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365150: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x365150u;
    SET_GPR_U32(ctx, 31, 0x365158u);
    ctx->pc = 0x365154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365150u;
    // 0x365154: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x365150u, 0x365158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365158u;
label_365158:
    // 0x365158: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x365158u;
    {
        const bool branch_taken_0x365158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365158) {
            ctx->pc = 0x3651B0u;
            goto label_3651b0;
        }
    }
    ctx->pc = 0x365160u;
label_365160:
    // 0x365160: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x365160u;
    SET_GPR_U32(ctx, 31, 0x365168u);
    ctx->pc = 0x365164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365160u;
    // 0x365164: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x365160u, 0x365168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365168u;
label_365168:
    // 0x365168: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x365168u;
    {
        const bool branch_taken_0x365168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365168u;
        // 0x36516c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365168) {
            ctx->pc = 0x3651B0u;
            goto label_3651b0;
        }
    }
    ctx->pc = 0x365170u;
    // 0x365170: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x365170u;
    SET_GPR_U32(ctx, 31, 0x365178u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x365170u, 0x365178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365178u;
label_365178:
    // 0x365178: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x365178u;
    SET_GPR_U32(ctx, 31, 0x365180u);
    ctx->pc = 0x36517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365178u;
    // 0x36517c: 0x24040ebb  addiu       $a0, $zero, 0xEBB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3771));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x365178u, 0x365180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365180u;
label_365180:
    // 0x365180: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x365180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x365184: 0xc0550b8  jal         func_1542E0
    ctx->pc = 0x365184u;
    SET_GPR_U32(ctx, 31, 0x36518Cu);
    ctx->pc = 0x365188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365184u;
    // 0x365188: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542E0u, 0x365184u, 0x36518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36518Cu;
label_36518c:
    // 0x36518c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x36518cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x365190: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x365190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x365194: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x365194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x365198: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x365198u;
    SET_GPR_U32(ctx, 31, 0x3651A0u);
    ctx->pc = 0x36519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365198u;
    // 0x36519c: 0x24060c0e  addiu       $a2, $zero, 0xC0E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3086));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x365198u, 0x3651A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3651A0u;
label_3651a0:
    // 0x3651a0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3651a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3651a4: 0xc0d9058  jal         func_364160
    ctx->pc = 0x3651A4u;
    SET_GPR_U32(ctx, 31, 0x3651ACu);
    ctx->pc = 0x3651A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3651A4u;
    // 0x3651a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364160u, 0x3651A4u, 0x3651ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3651ACu;
label_3651ac:
    // 0x3651ac: 0x0  nop
    ctx->pc = 0x3651acu;
    // NOP
label_3651b0:
    // 0x3651b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3651b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3651b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3651b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3651b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3651B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3651BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3651B8u;
        // 0x3651bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3651B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3651C0u;
}
