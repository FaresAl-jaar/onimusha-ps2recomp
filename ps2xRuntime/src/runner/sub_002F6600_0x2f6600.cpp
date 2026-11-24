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

// Function: sub_002F6600
// Address: 0x2f6600 - 0x2f673c
void sub_002F6600_0x2f6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6600_0x2f6600");
#endif

    switch (ctx->pc) {
        case 0x2f663cu: goto label_2f663c;
        case 0x2f6658u: goto label_2f6658;
        case 0x2f66a0u: goto label_2f66a0;
        case 0x2f66b8u: goto label_2f66b8;
        case 0x2f66c4u: goto label_2f66c4;
        case 0x2f66d0u: goto label_2f66d0;
        case 0x2f66fcu: goto label_2f66fc;
        default: break;
    }

    ctx->pc = 0x2f6600u;

    // 0x2f6600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f6600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f6604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f6608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f660c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f6610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6614: 0x8083000c  lb          $v1, 0xC($a0)
    ctx->pc = 0x2f6614u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6618: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F6618u;
    {
        const bool branch_taken_0x2f6618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6618u;
        // 0x2f661c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6618) {
            ctx->pc = 0x2F6650u;
            goto label_2f6650;
        }
    }
    ctx->pc = 0x2F6620u;
    // 0x2f6620: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6620u;
    {
        const bool branch_taken_0x2f6620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6620) {
            ctx->pc = 0x2F6630u;
            goto label_2f6630;
        }
    }
    ctx->pc = 0x2F6628u;
    // 0x2f6628: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2F6628u;
    {
        const bool branch_taken_0x2f6628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6628) {
            ctx->pc = 0x2F6720u;
            goto label_2f6720;
        }
    }
    ctx->pc = 0x2F6630u;
label_2f6630:
    // 0x2f6630: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2f6630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f6634: 0xc09bcf0  jal         func_26F3C0
    ctx->pc = 0x2F6634u;
    SET_GPR_U32(ctx, 31, 0x2F663Cu);
    ctx->pc = 0x2F6638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6634u;
    // 0x2f6638: 0xa222000c  sb          $v0, 0xC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F3C0u, 0x2F6634u, 0x2F663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F663Cu;
label_2f663c:
    // 0x2f663c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f663cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f6640: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2f6640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2f6644: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2f6644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2f6648: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f664c: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x2f664cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_2f6650:
    // 0x2f6650: 0xc09bcf4  jal         func_26F3D0
    ctx->pc = 0x2F6650u;
    SET_GPR_U32(ctx, 31, 0x2F6658u);
    ctx->pc = 0x26F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F3D0u, 0x2F6650u, 0x2F6658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6658u;
label_2f6658:
    // 0x2f6658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f665c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f6660: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F6660u;
    {
        const bool branch_taken_0x2f6660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6660u;
        // 0x2f6664: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6660) {
            ctx->pc = 0x2F6700u;
            goto label_2f6700;
        }
    }
    ctx->pc = 0x2F6668u;
    // 0x2f6668: 0x101203  sra         $v0, $s0, 8
    ctx->pc = 0x2f6668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
    // 0x2f666c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2f666cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2f6670: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2f6670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2f6674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f6678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f667c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2f667cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2f6680: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f6684: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6684u;
    {
        const bool branch_taken_0x2f6684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6684u;
        // 0x2f6688: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6684) {
            ctx->pc = 0x2F6698u;
            goto label_2f6698;
        }
    }
    ctx->pc = 0x2F668Cu;
    // 0x2f668c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F668Cu;
    {
        const bool branch_taken_0x2f668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f668c) {
            ctx->pc = 0x2F66D8u;
            goto label_2f66d8;
        }
    }
    ctx->pc = 0x2F6694u;
    // 0x2f6694: 0x0  nop
    ctx->pc = 0x2f6694u;
    // NOP
label_2f6698:
    // 0x2f6698: 0xc0d9044  jal         func_364110
    ctx->pc = 0x2F6698u;
    SET_GPR_U32(ctx, 31, 0x2F66A0u);
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x2F6698u, 0x2F66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66A0u;
label_2f66a0:
    // 0x2f66a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f66a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f66a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f66a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F66A8u;
    {
        const bool branch_taken_0x2f66a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f66a8) {
            ctx->pc = 0x2F66B8u;
            goto label_2f66b8;
        }
    }
    ctx->pc = 0x2F66B0u;
    // 0x2f66b0: 0xc0b9dc8  jal         func_2E7720
    ctx->pc = 0x2F66B0u;
    SET_GPR_U32(ctx, 31, 0x2F66B8u);
    ctx->pc = 0x2E7720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7720u, 0x2F66B0u, 0x2F66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66B8u;
label_2f66b8:
    // 0x2f66b8: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x2f66b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x2f66bc: 0xc056390  jal         func_158E40
    ctx->pc = 0x2F66BCu;
    SET_GPR_U32(ctx, 31, 0x2F66C4u);
    ctx->pc = 0x2F66C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66BCu;
    // 0x2f66c0: 0x248495a0  addiu       $a0, $a0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158E40u, 0x2F66BCu, 0x2F66C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66C4u;
label_2f66c4:
    // 0x2f66c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f66c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66c8: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F66C8u;
    SET_GPR_U32(ctx, 31, 0x2F66D0u);
    ctx->pc = 0x2F66CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66C8u;
    // 0x2f66cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F66C8u, 0x2F66D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66D0u;
label_2f66d0:
    // 0x2f66d0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2F66D0u;
    {
        const bool branch_taken_0x2f66d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66D0u;
        // 0x2f66d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66d0) {
            ctx->pc = 0x2F6728u;
            goto label_2f6728;
        }
    }
    ctx->pc = 0x2F66D8u;
label_2f66d8:
    // 0x2f66d8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f66d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f66dc: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x2f66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x2f66e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f66e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f66e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f66e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66e8: 0xaf838b64  sw          $v1, -0x749C($gp)
    ctx->pc = 0x2f66e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 3));
    // 0x2f66ec: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2f66ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2f66f0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f66f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f66f4: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F66F4u;
    SET_GPR_U32(ctx, 31, 0x2F66FCu);
    ctx->pc = 0x2F66F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66F4u;
    // 0x2f66f8: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F66F4u, 0x2F66FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66FCu;
label_2f66fc:
    // 0x2f66fc: 0x0  nop
    ctx->pc = 0x2f66fcu;
    // NOP
label_2f6700:
    // 0x2f6700: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2f6700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x2f6704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6704u;
    {
        const bool branch_taken_0x2f6704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6704u;
        // 0x2f6708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6704) {
            ctx->pc = 0x2F6718u;
            goto label_2f6718;
        }
    }
    ctx->pc = 0x2F670Cu;
    // 0x2f670c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F670Cu;
    {
        const bool branch_taken_0x2f670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f670c) {
            ctx->pc = 0x2F6728u;
            goto label_2f6728;
        }
    }
    ctx->pc = 0x2F6714u;
    // 0x2f6714: 0x0  nop
    ctx->pc = 0x2f6714u;
    // NOP
label_2f6718:
    // 0x2f6718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6718u;
    {
        const bool branch_taken_0x2f6718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6718u;
        // 0x2f671c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6718) {
            ctx->pc = 0x2F6728u;
            goto label_2f6728;
        }
    }
    ctx->pc = 0x2F6720u;
label_2f6720:
    // 0x2f6720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6724: 0x0  nop
    ctx->pc = 0x2f6724u;
    // NOP
label_2f6728:
    // 0x2f6728: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f672c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f672cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6734: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6734u;
        // 0x2f6738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F673Cu;
}
