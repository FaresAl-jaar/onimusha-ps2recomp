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

// Function: sub_0038F910
// Address: 0x38f910 - 0x38fac0
void sub_0038F910_0x38f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F910_0x38f910");
#endif

    switch (ctx->pc) {
        case 0x38f994u: goto label_38f994;
        case 0x38f9d0u: goto label_38f9d0;
        case 0x38fa00u: goto label_38fa00;
        case 0x38fa20u: goto label_38fa20;
        case 0x38fa44u: goto label_38fa44;
        default: break;
    }

    ctx->pc = 0x38f910u;

    // 0x38f910: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x38f910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x38f914: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x38f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x38f918: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x38f918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x38f91c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x38f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x38f920: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x38f920u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f924: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x38f924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x38f928: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x38f928u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f92c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38f92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x38f930: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x38f930u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f934: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38f934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x38f938: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x38f938u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f93c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38f940: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x38f940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f944: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38f944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38f948: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x38f948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f94c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38f94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38f950: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x38f950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38f958: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F958u;
    {
        const bool branch_taken_0x38f958 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F958u;
        // 0x38f95c: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f958) {
            ctx->pc = 0x38F968u;
            goto label_38f968;
        }
    }
    ctx->pc = 0x38F960u;
    // 0x38f960: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x38F960u;
    {
        const bool branch_taken_0x38f960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F960u;
        // 0x38f964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f960) {
            ctx->pc = 0x38FA90u;
            goto label_38fa90;
        }
    }
    ctx->pc = 0x38F968u;
label_38f968:
    // 0x38f968: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F968u;
    {
        const bool branch_taken_0x38f968 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F968u;
        // 0x38f96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f968) {
            ctx->pc = 0x38F978u;
            goto label_38f978;
        }
    }
    ctx->pc = 0x38F970u;
    // 0x38f970: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x38F970u;
    {
        const bool branch_taken_0x38f970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f970) {
            ctx->pc = 0x38FA90u;
            goto label_38fa90;
        }
    }
    ctx->pc = 0x38F978u;
label_38f978:
    // 0x38f978: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x38f978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x38f97c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38f97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38f980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38f984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f988: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x38f988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x38f98c: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x38F98Cu;
    SET_GPR_U32(ctx, 31, 0x38F994u);
    ctx->pc = 0x38F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F98Cu;
    // 0x38f990: 0x2508f8a0  addiu       $t0, $t0, -0x760 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x38F98Cu, 0x38F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F994u;
label_38f994:
    // 0x38f994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38f994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f998: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x38F998u;
    {
        const bool branch_taken_0x38f998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f998) {
            ctx->pc = 0x38FA88u;
            goto label_38fa88;
        }
    }
    ctx->pc = 0x38F9A0u;
    // 0x38f9a0: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x38f9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x38f9a4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x38f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x38f9a8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x38f9a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38f9ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x38F9ACu;
    {
        const bool branch_taken_0x38f9ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9ACu;
        // 0x38f9b0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f9ac) {
            ctx->pc = 0x38F9B8u;
            goto label_38f9b8;
        }
    }
    ctx->pc = 0x38F9B4u;
    // 0x38f9b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38f9b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f9b8:
    // 0x38f9b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38F9B8u;
    {
        const bool branch_taken_0x38f9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9B8u;
        // 0x38f9bc: 0x326700ff  andi        $a3, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f9b8) {
            ctx->pc = 0x38F9D0u;
            goto label_38f9d0;
        }
    }
    ctx->pc = 0x38F9C0u;
    // 0x38f9c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x38f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x38f9c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38f9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f9c8: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x38F9C8u;
    SET_GPR_U32(ctx, 31, 0x38F9D0u);
    ctx->pc = 0x38F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F9C8u;
    // 0x38f9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x38F9C8u, 0x38F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F9D0u;
label_38f9d0:
    // 0x38f9d0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x38f9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38f9d4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x38f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x38f9d8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x38f9d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38f9dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x38F9DCu;
    {
        const bool branch_taken_0x38f9dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9DCu;
        // 0x38f9e0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f9dc) {
            ctx->pc = 0x38F9E8u;
            goto label_38f9e8;
        }
    }
    ctx->pc = 0x38F9E4u;
    // 0x38f9e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38f9e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f9e8:
    // 0x38f9e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38F9E8u;
    {
        const bool branch_taken_0x38f9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9E8u;
        // 0x38f9ec: 0x322700ff  andi        $a3, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f9e8) {
            ctx->pc = 0x38FA00u;
            goto label_38fa00;
        }
    }
    ctx->pc = 0x38F9F0u;
    // 0x38f9f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x38f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x38f9f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38f9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f9f8: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x38F9F8u;
    SET_GPR_U32(ctx, 31, 0x38FA00u);
    ctx->pc = 0x38F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F9F8u;
    // 0x38f9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x38F9F8u, 0x38FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FA00u;
label_38fa00:
    // 0x38fa00: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x38fa00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa04: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x38fa04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa08: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x38fa08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38fa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa10: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x38fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38fa14: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x38fa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x38fa18: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x38FA18u;
    SET_GPR_U32(ctx, 31, 0x38FA20u);
    ctx->pc = 0x38FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FA18u;
    // 0x38fa1c: 0x27aa00a0  addiu       $t2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x38FA18u, 0x38FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FA20u;
label_38fa20:
    // 0x38fa20: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x38fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x38fa24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fa28: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x38fa28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x38fa2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38fa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa30: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x38fa30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x38fa34: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x38fa34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x38fa38: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x38fa38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x38fa3c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x38FA3Cu;
    SET_GPR_U32(ctx, 31, 0x38FA44u);
    ctx->pc = 0x38FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FA3Cu;
    // 0x38fa40: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x38FA3Cu, 0x38FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FA44u;
label_38fa44:
    // 0x38fa44: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x38fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x38fa48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x38fa4c: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x38fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x38fa50: 0xae020558  sw          $v0, 0x558($s0)
    ctx->pc = 0x38fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 2));
    // 0x38fa54: 0xa21e0564  sb          $fp, 0x564($s0)
    ctx->pc = 0x38fa54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1380), (uint8_t)GPR_U32(ctx, 30));
    // 0x38fa58: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x38fa58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x38fa5c: 0xa2020565  sb          $v0, 0x565($s0)
    ctx->pc = 0x38fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1381), (uint8_t)GPR_U32(ctx, 2));
    // 0x38fa60: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x38fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x38fa64: 0xae020568  sw          $v0, 0x568($s0)
    ctx->pc = 0x38fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 2));
    // 0x38fa68: 0xa2130570  sb          $s3, 0x570($s0)
    ctx->pc = 0x38fa68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1392), (uint8_t)GPR_U32(ctx, 19));
    // 0x38fa6c: 0xae00055c  sw          $zero, 0x55C($s0)
    ctx->pc = 0x38fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 0));
    // 0x38fa70: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x38fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x38fa74: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x38fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38fa78: 0xae02056c  sw          $v0, 0x56C($s0)
    ctx->pc = 0x38fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 2));
    // 0x38fa7c: 0xa2110571  sb          $s1, 0x571($s0)
    ctx->pc = 0x38fa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1393), (uint8_t)GPR_U32(ctx, 17));
    // 0x38fa80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38FA80u;
    {
        const bool branch_taken_0x38fa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA80u;
        // 0x38fa84: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa80) {
            ctx->pc = 0x38FA90u;
            goto label_38fa90;
        }
    }
    ctx->pc = 0x38FA88u;
label_38fa88:
    // 0x38fa88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38fa88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa8c: 0x0  nop
    ctx->pc = 0x38fa8cu;
    // NOP
label_38fa90:
    // 0x38fa90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38fa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38fa94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x38fa94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38fa98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x38fa98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38fa9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x38fa9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38faa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38faa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38faa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38faa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38faa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38faa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38faac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38faacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38fab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38fab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38fab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38fab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38fab8: 0x3e00008  jr          $ra
    ctx->pc = 0x38FAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAB8u;
        // 0x38fabc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FAC0u;
}
