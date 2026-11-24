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

// Function: sub_00200970
// Address: 0x200970 - 0x200a08
void sub_00200970_0x200970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200970_0x200970");
#endif

    switch (ctx->pc) {
        case 0x200994u: goto label_200994;
        case 0x2009a8u: goto label_2009a8;
        case 0x2009d4u: goto label_2009d4;
        case 0x2009e8u: goto label_2009e8;
        default: break;
    }

    ctx->pc = 0x200970u;

    // 0x200970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200974: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x200974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x200978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20097c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200980: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200988: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x200988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20098c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x20098Cu;
    SET_GPR_U32(ctx, 31, 0x200994u);
    ctx->pc = 0x200990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20098Cu;
    // 0x200990: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x20098Cu, 0x200994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200994u;
label_200994:
    // 0x200994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200998: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x200998u;
    {
        const bool branch_taken_0x200998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x200998) {
            ctx->pc = 0x20099Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200998u;
            // 0x20099c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2009F4u;
            goto label_2009f4;
        }
    }
    ctx->pc = 0x2009A0u;
    // 0x2009a0: 0xc0804a0  jal         func_201280
    ctx->pc = 0x2009A0u;
    SET_GPR_U32(ctx, 31, 0x2009A8u);
    ctx->pc = 0x201280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201280u, 0x2009A0u, 0x2009A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009A8u;
label_2009a8:
    // 0x2009a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2009A8u;
    {
        const bool branch_taken_0x2009a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009A8u;
        // 0x2009ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009a8) {
            ctx->pc = 0x2009B8u;
            goto label_2009b8;
        }
    }
    ctx->pc = 0x2009B0u;
    // 0x2009b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2009B0u;
    {
        const bool branch_taken_0x2009b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009B0u;
        // 0x2009b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009b0) {
            ctx->pc = 0x2009F0u;
            goto label_2009f0;
        }
    }
    ctx->pc = 0x2009B8u;
label_2009b8:
    // 0x2009b8: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2009bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2009bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009c0: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x2009c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2009c4: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2009C4u;
    {
        const bool branch_taken_0x2009c4 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2009C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009C4u;
        // 0x2009c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009c4) {
            ctx->pc = 0x2009F0u;
            goto label_2009f0;
        }
    }
    ctx->pc = 0x2009CCu;
    // 0x2009cc: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x2009CCu;
    SET_GPR_U32(ctx, 31, 0x2009D4u);
    ctx->pc = 0x2009D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009CCu;
    // 0x2009d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x2009CCu, 0x2009D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009D4u;
label_2009d4:
    // 0x2009d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2009d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009d8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2009D8u;
    {
        const bool branch_taken_0x2009d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009D8u;
        // 0x2009dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009d8) {
            ctx->pc = 0x2009F0u;
            goto label_2009f0;
        }
    }
    ctx->pc = 0x2009E0u;
    // 0x2009e0: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x2009E0u;
    SET_GPR_U32(ctx, 31, 0x2009E8u);
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x2009E0u, 0x2009E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009E8u;
label_2009e8:
    // 0x2009e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2009e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2009ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2009ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2009f0:
    // 0x2009f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2009f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2009f4:
    // 0x2009f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2009f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2009f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2009f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2009fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2009fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200a00: 0x3e00008  jr          $ra
    ctx->pc = 0x200A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A00u;
        // 0x200a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200A08u;
}
