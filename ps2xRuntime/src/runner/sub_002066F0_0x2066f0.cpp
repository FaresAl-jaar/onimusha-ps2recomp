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

// Function: sub_002066F0
// Address: 0x2066f0 - 0x206778
void sub_002066F0_0x2066f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002066F0_0x2066f0");
#endif

    switch (ctx->pc) {
        case 0x206714u: goto label_206714;
        case 0x206748u: goto label_206748;
        case 0x206754u: goto label_206754;
        default: break;
    }

    ctx->pc = 0x2066f0u;

    // 0x2066f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2066f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2066f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2066f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2066f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2066f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2066fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206700: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x206700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206704: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x206704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x206708: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x206708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20670c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20670Cu;
    SET_GPR_U32(ctx, 31, 0x206714u);
    ctx->pc = 0x206710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20670Cu;
    // 0x206710: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20670Cu, 0x206714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206714u;
label_206714:
    // 0x206714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206718: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x206718u;
    {
        const bool branch_taken_0x206718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206718u;
        // 0x20671c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206718) {
            ctx->pc = 0x206740u;
            goto label_206740;
        }
    }
    ctx->pc = 0x206720u;
    // 0x206720: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x206720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x206724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20672c: 0x24847460  addiu       $a0, $a0, 0x7460
    ctx->pc = 0x20672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29792));
    // 0x206730: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206734: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x206734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206738: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x206738u;
    ctx->pc = 0x20673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206738u;
    // 0x20673c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x206740u;
label_206740:
    // 0x206740: 0xc08200a  jal         func_208028
    ctx->pc = 0x206740u;
    SET_GPR_U32(ctx, 31, 0x206748u);
    ctx->pc = 0x208028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208028u, 0x206740u, 0x206748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206748u;
label_206748:
    // 0x206748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20674c: 0xc0818ee  jal         func_2063B8
    ctx->pc = 0x20674Cu;
    SET_GPR_U32(ctx, 31, 0x206754u);
    ctx->pc = 0x206750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20674Cu;
    // 0x206750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2063B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2063B8u, 0x20674Cu, 0x206754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206754u;
label_206754:
    // 0x206754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20675c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20675cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206760: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x206760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206764: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20676c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20676cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206770: 0x8081a44  j           func_206910
    ctx->pc = 0x206770u;
    ctx->pc = 0x206774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206770u;
    // 0x206774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    sub_00206910_0x206910(rdram, ctx, runtime); return;
    ctx->pc = 0x206778u;
}
