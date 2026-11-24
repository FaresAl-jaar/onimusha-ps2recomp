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

// Function: sub_00248938
// Address: 0x248938 - 0x2489dc
void sub_00248938_0x248938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248938_0x248938");
#endif

    switch (ctx->pc) {
        case 0x248960u: goto label_248960;
        case 0x248984u: goto label_248984;
        case 0x248998u: goto label_248998;
        case 0x2489a0u: goto label_2489a0;
        case 0x2489b0u: goto label_2489b0;
        case 0x2489c4u: goto label_2489c4;
        default: break;
    }

    ctx->pc = 0x248938u;

    // 0x248938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24893c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248940: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x248940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248944: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x248944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x248948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24894c: 0x24a50b60  addiu       $a1, $a1, 0xB60
    ctx->pc = 0x24894cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2912));
    // 0x248950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248958: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x248958u;
    SET_GPR_U32(ctx, 31, 0x248960u);
    ctx->pc = 0x24895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248958u;
    // 0x24895c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x248958u, 0x248960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248960u;
label_248960:
    // 0x248960: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x248960u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x248964: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x248964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x248968: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248968u;
    {
        const bool branch_taken_0x248968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248968u;
        // 0x24896c: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248968) {
            ctx->pc = 0x248984u;
            goto label_248984;
        }
    }
    ctx->pc = 0x248970u;
    // 0x248970: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248970u;
    {
        const bool branch_taken_0x248970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x248974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248970u;
        // 0x248974: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248970) {
            ctx->pc = 0x248984u;
            goto label_248984;
        }
    }
    ctx->pc = 0x248978u;
    // 0x248978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24897c: 0xc049dd0  jal         func_127740
    ctx->pc = 0x24897Cu;
    SET_GPR_U32(ctx, 31, 0x248984u);
    ctx->pc = 0x248980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24897Cu;
    // 0x248980: 0x24a5d060  addiu       $a1, $a1, -0x2FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x24897Cu, 0x248984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248984u;
label_248984:
    // 0x248984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248988: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x248988u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x24898c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24898cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248990: 0xc049dd0  jal         func_127740
    ctx->pc = 0x248990u;
    SET_GPR_U32(ctx, 31, 0x248998u);
    ctx->pc = 0x248994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248990u;
    // 0x248994: 0x2610d068  addiu       $s0, $s0, -0x2F98 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x248990u, 0x248998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248998u;
label_248998:
    // 0x248998: 0xc049f18  jal         func_127C60
    ctx->pc = 0x248998u;
    SET_GPR_U32(ctx, 31, 0x2489A0u);
    ctx->pc = 0x24899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248998u;
    // 0x24899c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x248998u, 0x2489A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489A0u;
label_2489a0:
    // 0x2489a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2489a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489a4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2489a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2489a8: 0xc049e80  jal         func_127A00
    ctx->pc = 0x2489A8u;
    SET_GPR_U32(ctx, 31, 0x2489B0u);
    ctx->pc = 0x2489ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489A8u;
    // 0x2489ac: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A00u, 0x2489A8u, 0x2489B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489B0u;
label_2489b0:
    // 0x2489b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2489b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2489B4u;
    {
        const bool branch_taken_0x2489b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489B4u;
        // 0x2489b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489b4) {
            ctx->pc = 0x2489C8u;
            goto label_2489c8;
        }
    }
    ctx->pc = 0x2489BCu;
    // 0x2489bc: 0xc049dd0  jal         func_127740
    ctx->pc = 0x2489BCu;
    SET_GPR_U32(ctx, 31, 0x2489C4u);
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x2489BCu, 0x2489C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489C4u;
label_2489c4:
    // 0x2489c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2489c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2489c8:
    // 0x2489c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2489c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2489cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2489ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2489d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2489d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2489d4: 0x8091fd8  j           func_247F60
    ctx->pc = 0x2489D4u;
    ctx->pc = 0x2489D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489D4u;
    // 0x2489d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F60u;
    sub_00247F60_0x247f60(rdram, ctx, runtime); return;
    ctx->pc = 0x2489DCu;
}
