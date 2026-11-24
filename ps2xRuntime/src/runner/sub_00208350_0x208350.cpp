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

// Function: sub_00208350
// Address: 0x208350 - 0x2083bc
void sub_00208350_0x208350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208350_0x208350");
#endif

    switch (ctx->pc) {
        case 0x20836cu: goto label_20836c;
        case 0x2083a0u: goto label_2083a0;
        default: break;
    }

    ctx->pc = 0x208350u;

    // 0x208350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20835c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208364: 0xc081d84  jal         func_207610
    ctx->pc = 0x208364u;
    SET_GPR_U32(ctx, 31, 0x20836Cu);
    ctx->pc = 0x208368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208364u;
    // 0x208368: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x208364u, 0x20836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20836Cu;
label_20836c:
    // 0x20836c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208370: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x208370u;
    {
        const bool branch_taken_0x208370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208370u;
        // 0x208374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208370) {
            ctx->pc = 0x208398u;
            goto label_208398;
        }
    }
    ctx->pc = 0x208378u;
    // 0x208378: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x208378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20837c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20837cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208384: 0x24847b38  addiu       $a0, $a0, 0x7B38
    ctx->pc = 0x208384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31544));
    // 0x208388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20838c: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20838Cu;
    ctx->pc = 0x208390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20838Cu;
    // 0x208390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x208394u;
    // 0x208394: 0x0  nop
    ctx->pc = 0x208394u;
    // NOP
label_208398:
    // 0x208398: 0xc081c12  jal         func_207048
    ctx->pc = 0x208398u;
    SET_GPR_U32(ctx, 31, 0x2083A0u);
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x208398u, 0x2083A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083A0u;
label_2083a0:
    // 0x2083a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2083a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2083a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2083a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2083a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2083acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2083b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2083b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2083b4: 0x8087004  j           func_21C010
    ctx->pc = 0x2083B4u;
    ctx->pc = 0x2083B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083B4u;
    // 0x2083b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C010u;
    sub_0021C010_0x21c010(rdram, ctx, runtime); return;
    ctx->pc = 0x2083BCu;
}
