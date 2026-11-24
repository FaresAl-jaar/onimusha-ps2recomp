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

// Function: sub_00207CC8
// Address: 0x207cc8 - 0x207d68
void sub_00207CC8_0x207cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207CC8_0x207cc8");
#endif

    switch (ctx->pc) {
        case 0x207ce4u: goto label_207ce4;
        case 0x207cfcu: goto label_207cfc;
        case 0x207d1cu: goto label_207d1c;
        case 0x207d28u: goto label_207d28;
        case 0x207d34u: goto label_207d34;
        default: break;
    }

    ctx->pc = 0x207cc8u;

    // 0x207cc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207ccc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x207cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207cd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207cd8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x207cdc: 0xc081d84  jal         func_207610
    ctx->pc = 0x207CDCu;
    SET_GPR_U32(ctx, 31, 0x207CE4u);
    ctx->pc = 0x207CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207CDCu;
    // 0x207ce0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207CDCu, 0x207CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CE4u;
label_207ce4:
    // 0x207ce4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207ce8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207cec: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207CECu;
    {
        const bool branch_taken_0x207cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CECu;
        // 0x207cf0: 0x248479a8  addiu       $a0, $a0, 0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cec) {
            ctx->pc = 0x207D08u;
            goto label_207d08;
        }
    }
    ctx->pc = 0x207CF4u;
    // 0x207cf4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207CF4u;
    SET_GPR_U32(ctx, 31, 0x207CFCu);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207CF4u, 0x207CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CFCu;
label_207cfc:
    // 0x207cfc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x207CFCu;
    {
        const bool branch_taken_0x207cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CFCu;
        // 0x207d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cfc) {
            ctx->pc = 0x207D50u;
            goto label_207d50;
        }
    }
    ctx->pc = 0x207D04u;
    // 0x207d04: 0x0  nop
    ctx->pc = 0x207d04u;
    // NOP
label_207d08:
    // 0x207d08: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x207d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x207d0c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x207D0Cu;
    {
        const bool branch_taken_0x207d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D0Cu;
        // 0x207d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d0c) {
            ctx->pc = 0x207D50u;
            goto label_207d50;
        }
    }
    ctx->pc = 0x207D14u;
    // 0x207d14: 0xc081aac  jal         func_206AB0
    ctx->pc = 0x207D14u;
    SET_GPR_U32(ctx, 31, 0x207D1Cu);
    ctx->pc = 0x207D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D14u;
    // 0x207d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206AB0u, 0x207D14u, 0x207D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D1Cu;
label_207d1c:
    // 0x207d1c: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x207d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
    // 0x207d20: 0xc082c5e  jal         func_20B178
    ctx->pc = 0x207D20u;
    SET_GPR_U32(ctx, 31, 0x207D28u);
    ctx->pc = 0x207D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D20u;
    // 0x207d24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B178u, 0x207D20u, 0x207D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D28u;
label_207d28:
    // 0x207d28: 0x264402a4  addiu       $a0, $s2, 0x2A4
    ctx->pc = 0x207d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 676));
    // 0x207d2c: 0xc082c5e  jal         func_20B178
    ctx->pc = 0x207D2Cu;
    SET_GPR_U32(ctx, 31, 0x207D34u);
    ctx->pc = 0x207D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D2Cu;
    // 0x207d30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B178u, 0x207D2Cu, 0x207D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D34u;
label_207d34:
    // 0x207d34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x207d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d38: 0x12300004  beq         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207D38u;
    {
        const bool branch_taken_0x207d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x207D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D38u;
        // 0x207d3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d38) {
            ctx->pc = 0x207D4Cu;
            goto label_207d4c;
        }
    }
    ctx->pc = 0x207D40u;
    // 0x207d40: 0x70800a  movz        $s0, $v1, $s0
    ctx->pc = 0x207d40u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x207d44: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x207D44u;
    {
        const bool branch_taken_0x207d44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x207D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D44u;
        // 0x207d48: 0x202100a  movz        $v0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d44) {
            ctx->pc = 0x207D50u;
            goto label_207d50;
        }
    }
    ctx->pc = 0x207D4Cu;
label_207d4c:
    // 0x207d4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x207d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_207d50:
    // 0x207d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207d54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207d58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207d5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207d60: 0x3e00008  jr          $ra
    ctx->pc = 0x207D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D60u;
        // 0x207d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D68u;
}
