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

// Function: sub_0035E940
// Address: 0x35e940 - 0x35ea00
void sub_0035E940_0x35e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E940_0x35e940");
#endif

    switch (ctx->pc) {
        case 0x35e960u: goto label_35e960;
        case 0x35e9d8u: goto label_35e9d8;
        case 0x35e9e8u: goto label_35e9e8;
        case 0x35e9f0u: goto label_35e9f0;
        default: break;
    }

    ctx->pc = 0x35e940u;

    // 0x35e940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35e948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35e94c: 0x90822af0  lbu         $v0, 0x2AF0($a0)
    ctx->pc = 0x35e94cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10992)));
    // 0x35e950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35E950u;
    {
        const bool branch_taken_0x35e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E950u;
        // 0x35e954: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e950) {
            ctx->pc = 0x35E960u;
            goto label_35e960;
        }
    }
    ctx->pc = 0x35E958u;
    // 0x35e958: 0xc0d7874  jal         func_35E1D0
    ctx->pc = 0x35E958u;
    SET_GPR_U32(ctx, 31, 0x35E960u);
    ctx->pc = 0x35E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E1D0u, 0x35E958u, 0x35E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E960u;
label_35e960:
    // 0x35e960: 0x8e0429c0  lw          $a0, 0x29C0($s0)
    ctx->pc = 0x35e960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x35e964: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x35e964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35e968: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35E968u;
    {
        const bool branch_taken_0x35e968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e968) {
            ctx->pc = 0x35E9A0u;
            goto label_35e9a0;
        }
    }
    ctx->pc = 0x35E970u;
    // 0x35e970: 0x92030640  lbu         $v1, 0x640($s0)
    ctx->pc = 0x35e970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x35e974: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35e974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e978: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E978u;
    {
        const bool branch_taken_0x35e978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35e978) {
            ctx->pc = 0x35E9A0u;
            goto label_35e9a0;
        }
    }
    ctx->pc = 0x35E980u;
    // 0x35e980: 0x9083003a  lbu         $v1, 0x3A($a0)
    ctx->pc = 0x35e980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x35e984: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35e988: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E988u;
    {
        const bool branch_taken_0x35e988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35e988) {
            ctx->pc = 0x35E9A0u;
            goto label_35e9a0;
        }
    }
    ctx->pc = 0x35E990u;
    // 0x35e990: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x35e990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x35e994: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35e994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35e998: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35E998u;
    {
        const bool branch_taken_0x35e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E998u;
        // 0x35e99c: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e998) {
            ctx->pc = 0x35E9B0u;
            goto label_35e9b0;
        }
    }
    ctx->pc = 0x35E9A0u;
label_35e9a0:
    // 0x35e9a0: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x35e9a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x35e9a4: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x35e9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x35e9a8: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x35e9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x35e9ac: 0x0  nop
    ctx->pc = 0x35e9acu;
    // NOP
label_35e9b0:
    // 0x35e9b0: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x35e9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x35e9b4: 0x240200e1  addiu       $v0, $zero, 0xE1
    ctx->pc = 0x35e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x35e9b8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E9B8u;
    {
        const bool branch_taken_0x35e9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9B8u;
        // 0x35e9bc: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9b8) {
            ctx->pc = 0x35E9E0u;
            goto label_35e9e0;
        }
    }
    ctx->pc = 0x35E9C0u;
    // 0x35e9c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35E9C0u;
    {
        const bool branch_taken_0x35e9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35e9c0) {
            ctx->pc = 0x35E9D0u;
            goto label_35e9d0;
        }
    }
    ctx->pc = 0x35E9C8u;
    // 0x35e9c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35E9C8u;
    {
        const bool branch_taken_0x35e9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e9c8) {
            ctx->pc = 0x35E9E8u;
            goto label_35e9e8;
        }
    }
    ctx->pc = 0x35E9D0u;
label_35e9d0:
    // 0x35e9d0: 0xc0d78b0  jal         func_35E2C0
    ctx->pc = 0x35E9D0u;
    SET_GPR_U32(ctx, 31, 0x35E9D8u);
    ctx->pc = 0x35E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E9D0u;
    // 0x35e9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E2C0u, 0x35E9D0u, 0x35E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9D8u;
label_35e9d8:
    // 0x35e9d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35E9D8u;
    {
        const bool branch_taken_0x35e9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e9d8) {
            ctx->pc = 0x35E9E8u;
            goto label_35e9e8;
        }
    }
    ctx->pc = 0x35E9E0u;
label_35e9e0:
    // 0x35e9e0: 0xc0d7920  jal         func_35E480
    ctx->pc = 0x35E9E0u;
    SET_GPR_U32(ctx, 31, 0x35E9E8u);
    ctx->pc = 0x35E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E9E0u;
    // 0x35e9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E480u, 0x35E9E0u, 0x35E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9E8u;
label_35e9e8:
    // 0x35e9e8: 0xc098770  jal         func_261DC0
    ctx->pc = 0x35E9E8u;
    SET_GPR_U32(ctx, 31, 0x35E9F0u);
    ctx->pc = 0x35E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E9E8u;
    // 0x35e9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DC0u, 0x35E9E8u, 0x35E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9F0u;
label_35e9f0:
    // 0x35e9f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e9f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x35E9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9F8u;
        // 0x35e9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EA00u;
}
