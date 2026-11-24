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

// Function: sub_00150820
// Address: 0x150820 - 0x15090c
void sub_00150820_0x150820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150820_0x150820");
#endif

    switch (ctx->pc) {
        case 0x150880u: goto label_150880;
        case 0x150894u: goto label_150894;
        case 0x1508a4u: goto label_1508a4;
        case 0x1508bcu: goto label_1508bc;
        case 0x1508e8u: goto label_1508e8;
        default: break;
    }

    ctx->pc = 0x150820u;

    // 0x150820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150824: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15082c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150830: 0x90246ac0  lbu         $a0, 0x6AC0($at)
    ctx->pc = 0x150830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x7E6AC0u));
    // 0x150834: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x150834u;
    {
        const bool branch_taken_0x150834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x150834) {
            ctx->pc = 0x150888u;
            goto label_150888;
        }
    }
    ctx->pc = 0x15083Cu;
    // 0x15083c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15083Cu;
    {
        const bool branch_taken_0x15083c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15083c) {
            ctx->pc = 0x150850u;
            goto label_150850;
        }
    }
    ctx->pc = 0x150844u;
    // 0x150844: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x150844u;
    {
        const bool branch_taken_0x150844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150844) {
            ctx->pc = 0x150900u;
            goto label_150900;
        }
    }
    ctx->pc = 0x15084Cu;
    // 0x15084c: 0x0  nop
    ctx->pc = 0x15084cu;
    // NOP
label_150850:
    // 0x150850: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x150850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x150854: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150858: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x150858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x15085c: 0xa0226ac0  sb          $v0, 0x6AC0($at)
    ctx->pc = 0x15085cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6AC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC0u, _value); } while (0);
    // 0x150860: 0x24849600  addiu       $a0, $a0, -0x6A00
    ctx->pc = 0x150860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    // 0x150864: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150868: 0xa0206ac3  sb          $zero, 0x6AC3($at)
    ctx->pc = 0x150868u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6AC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC3u, _value); } while (0);
    // 0x15086c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15086cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150870: 0xa0206ac2  sb          $zero, 0x6AC2($at)
    ctx->pc = 0x150870u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6AC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC2u, _value); } while (0);
    // 0x150874: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150878: 0xc074104  jal         func_1D0410
    ctx->pc = 0x150878u;
    SET_GPR_U32(ctx, 31, 0x150880u);
    ctx->pc = 0x15087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150878u;
    // 0x15087c: 0xa0206ac1  sb          $zero, 0x6AC1($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27329), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0410u, 0x150878u, 0x150880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150880u;
label_150880:
    // 0x150880: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x150880u;
    {
        const bool branch_taken_0x150880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150880) {
            ctx->pc = 0x150900u;
            goto label_150900;
        }
    }
    ctx->pc = 0x150888u;
label_150888:
    // 0x150888: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15088c: 0xc0ac010  jal         func_2B0040
    ctx->pc = 0x15088Cu;
    SET_GPR_U32(ctx, 31, 0x150894u);
    ctx->pc = 0x150890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15088Cu;
    // 0x150890: 0x90246ac8  lbu         $a0, 0x6AC8($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0040u, 0x15088Cu, 0x150894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150894u;
label_150894:
    // 0x150894: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x150894u;
    {
        const bool branch_taken_0x150894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150894u;
        // 0x150898: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150894) {
            ctx->pc = 0x1508B0u;
            goto label_1508b0;
        }
    }
    ctx->pc = 0x15089Cu;
    // 0x15089c: 0xc0e7f9c  jal         func_39FE70
    ctx->pc = 0x15089Cu;
    SET_GPR_U32(ctx, 31, 0x1508A4u);
    ctx->pc = 0x1508A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15089Cu;
    // 0x1508a0: 0x90246ac8  lbu         $a0, 0x6AC8($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FE70u, 0x15089Cu, 0x1508A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508A4u;
label_1508a4:
    // 0x1508a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1508A4u;
    {
        const bool branch_taken_0x1508a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1508a4) {
            ctx->pc = 0x1508C0u;
            goto label_1508c0;
        }
    }
    ctx->pc = 0x1508ACu;
    // 0x1508ac: 0x0  nop
    ctx->pc = 0x1508acu;
    // NOP
label_1508b0:
    // 0x1508b0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1508b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1508b4: 0xc0aba24  jal         func_2AE890
    ctx->pc = 0x1508B4u;
    SET_GPR_U32(ctx, 31, 0x1508BCu);
    ctx->pc = 0x1508B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508B4u;
    // 0x1508b8: 0x90246ac8  lbu         $a0, 0x6AC8($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE890u, 0x1508B4u, 0x1508BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508BCu;
label_1508bc:
    // 0x1508bc: 0x0  nop
    ctx->pc = 0x1508bcu;
    // NOP
label_1508c0:
    // 0x1508c0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1508c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1508c4: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x1508c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x1508c8: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x1508c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x1508cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1508ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1508d0: 0x942404cc  lhu         $a0, 0x4CC($at)
    ctx->pc = 0x1508d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8C04CCu));
    // 0x1508d4: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x1508d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x1508d8: 0x902504d0  lbu         $a1, 0x4D0($at)
    ctx->pc = 0x1508d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8C04D0u));
    // 0x1508dc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1508dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1508e0: 0xc054048  jal         func_150120
    ctx->pc = 0x1508E0u;
    SET_GPR_U32(ctx, 31, 0x1508E8u);
    ctx->pc = 0x1508E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508E0u;
    // 0x1508e4: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x1508E0u, 0x1508E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508E8u;
label_1508e8:
    // 0x1508e8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1508ec: 0x90236ac0  lbu         $v1, 0x6AC0($at)
    ctx->pc = 0x1508ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x7E6AC0u));
    // 0x1508f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1508f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1508f4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1508f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1508f8: 0xa0236ac0  sb          $v1, 0x6AC0($at)
    ctx->pc = 0x1508f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6AC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC0u, _value); } while (0);
    // 0x1508fc: 0x0  nop
    ctx->pc = 0x1508fcu;
    // NOP
label_150900:
    // 0x150900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150904: 0x3e00008  jr          $ra
    ctx->pc = 0x150904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150904u;
        // 0x150908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15090Cu;
}
