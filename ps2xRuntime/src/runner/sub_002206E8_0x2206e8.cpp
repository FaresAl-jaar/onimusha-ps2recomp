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

// Function: sub_002206E8
// Address: 0x2206e8 - 0x22075c
void sub_002206E8_0x2206e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002206E8_0x2206e8");
#endif

    switch (ctx->pc) {
        case 0x22070cu: goto label_22070c;
        default: break;
    }

    ctx->pc = 0x2206e8u;

    // 0x2206e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2206e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2206ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2206ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2206f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2206f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2206f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2206f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2206f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2206fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x220700: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x220700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x220704: 0xc084968  jal         func_2125A0
    ctx->pc = 0x220704u;
    SET_GPR_U32(ctx, 31, 0x22070Cu);
    ctx->pc = 0x220708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220704u;
    // 0x220708: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x220704u, 0x22070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22070Cu;
label_22070c:
    // 0x22070c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x22070cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x220710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220714: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x220714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220718: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220718u;
    {
        const bool branch_taken_0x220718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220718u;
        // 0x22071c: 0x34a50121  ori         $a1, $a1, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)289);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220718) {
            ctx->pc = 0x220740u;
            goto label_220740;
        }
    }
    ctx->pc = 0x220720u;
    // 0x220720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22072c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22072cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220730: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220734: 0x80848e0  j           func_212380
    ctx->pc = 0x220734u;
    ctx->pc = 0x220738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220734u;
    // 0x220738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x22073Cu;
    // 0x22073c: 0x0  nop
    ctx->pc = 0x22073cu;
    // NOP
label_220740:
    // 0x220740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x220740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22074c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22074cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220750: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220754: 0x80881d8  j           func_220760
    ctx->pc = 0x220754u;
    ctx->pc = 0x220758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220754u;
    // 0x220758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220760u;
    sub_00220760_0x220760(rdram, ctx, runtime); return;
    ctx->pc = 0x22075Cu;
}
