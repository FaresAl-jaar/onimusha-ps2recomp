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

// Function: sub_0023CA18
// Address: 0x23ca18 - 0x23caf0
void sub_0023CA18_0x23ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CA18_0x23ca18");
#endif

    switch (ctx->pc) {
        case 0x23ca78u: goto label_23ca78;
        case 0x23ca80u: goto label_23ca80;
        case 0x23ca8cu: goto label_23ca8c;
        case 0x23caa0u: goto label_23caa0;
        case 0x23caccu: goto label_23cacc;
        case 0x23cad8u: goto label_23cad8;
        default: break;
    }

    ctx->pc = 0x23ca18u;

    // 0x23ca18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ca1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ca20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ca20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ca28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23ca28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23ca30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23ca30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca34: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CA34u;
    {
        const bool branch_taken_0x23ca34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA34u;
        // 0x23ca38: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca34) {
            ctx->pc = 0x23CA4Cu;
            goto label_23ca4c;
        }
    }
    ctx->pc = 0x23CA3Cu;
    // 0x23ca3c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CA3Cu;
    {
        const bool branch_taken_0x23ca3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ca3c) {
            ctx->pc = 0x23CA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CA3Cu;
            // 0x23ca40: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CA50u;
            goto label_23ca50;
        }
    }
    ctx->pc = 0x23CA44u;
    // 0x23ca44: 0x641000a  bgez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x23CA44u;
    {
        const bool branch_taken_0x23ca44 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x23ca44) {
            ctx->pc = 0x23CA70u;
            goto label_23ca70;
        }
    }
    ctx->pc = 0x23CA4Cu;
label_23ca4c:
    // 0x23ca4c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23ca4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23ca50:
    // 0x23ca50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ca50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ca54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ca54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ca58: 0x2484b7f0  addiu       $a0, $a0, -0x4810
    ctx->pc = 0x23ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    // 0x23ca5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23ca5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ca60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23ca60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ca64: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23CA64u;
    ctx->pc = 0x23CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA64u;
    // 0x23ca68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23CA6Cu;
    // 0x23ca6c: 0x0  nop
    ctx->pc = 0x23ca6cu;
    // NOP
label_23ca70:
    // 0x23ca70: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x23CA70u;
    SET_GPR_U32(ctx, 31, 0x23CA78u);
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x23CA70u, 0x23CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA78u;
label_23ca78:
    // 0x23ca78: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x23CA78u;
    SET_GPR_U32(ctx, 31, 0x23CA80u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x23CA78u, 0x23CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA80u;
label_23ca80:
    // 0x23ca80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ca80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca84: 0xc093fa6  jal         func_24FE98
    ctx->pc = 0x23CA84u;
    SET_GPR_U32(ctx, 31, 0x23CA8Cu);
    ctx->pc = 0x23CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA84u;
    // 0x23ca88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE98u, 0x23CA84u, 0x23CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA8Cu;
label_23ca8c:
    // 0x23ca8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ca8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23CA90u;
    {
        const bool branch_taken_0x23ca90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA90u;
        // 0x23ca94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca90) {
            ctx->pc = 0x23CAC0u;
            goto label_23cac0;
        }
    }
    ctx->pc = 0x23CA98u;
    // 0x23ca98: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x23CA98u;
    SET_GPR_U32(ctx, 31, 0x23CAA0u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x23CA98u, 0x23CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAA0u;
label_23caa0:
    // 0x23caa0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23caa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23caa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23caa8: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x23caa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x23caac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23caacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cab0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cab4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23cab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cab8: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23CAB8u;
    ctx->pc = 0x23CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAB8u;
    // 0x23cabc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23CAC0u;
label_23cac0:
    // 0x23cac0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23cac4: 0xc08e618  jal         func_239860
    ctx->pc = 0x23CAC4u;
    SET_GPR_U32(ctx, 31, 0x23CACCu);
    ctx->pc = 0x23CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAC4u;
    // 0x23cac8: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239860u, 0x23CAC4u, 0x23CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CACCu;
label_23cacc:
    // 0x23cacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23caccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cad0: 0xc08efaa  jal         func_23BEA8
    ctx->pc = 0x23CAD0u;
    SET_GPR_U32(ctx, 31, 0x23CAD8u);
    ctx->pc = 0x23CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAD0u;
    // 0x23cad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BEA8u, 0x23CAD0u, 0x23CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAD8u;
label_23cad8:
    // 0x23cad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cadc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cae0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cae4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23cae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cae8: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x23CAE8u;
    ctx->pc = 0x23CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAE8u;
    // 0x23caec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x23CAF0u;
}
