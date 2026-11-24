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

// Function: sub_0024E3B0
// Address: 0x24e3b0 - 0x24e67c
void sub_0024E3B0_0x24e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E3B0_0x24e3b0");
#endif

    switch (ctx->pc) {
        case 0x24e428u: goto label_24e428;
        case 0x24e430u: goto label_24e430;
        case 0x24e438u: goto label_24e438;
        case 0x24e440u: goto label_24e440;
        case 0x24e448u: goto label_24e448;
        case 0x24e458u: goto label_24e458;
        case 0x24e480u: goto label_24e480;
        case 0x24e498u: goto label_24e498;
        case 0x24e4d0u: goto label_24e4d0;
        case 0x24e500u: goto label_24e500;
        case 0x24e514u: goto label_24e514;
        case 0x24e518u: goto label_24e518;
        case 0x24e554u: goto label_24e554;
        case 0x24e56cu: goto label_24e56c;
        case 0x24e5a4u: goto label_24e5a4;
        case 0x24e5bcu: goto label_24e5bc;
        case 0x24e5c0u: goto label_24e5c0;
        case 0x24e5f0u: goto label_24e5f0;
        case 0x24e640u: goto label_24e640;
        default: break;
    }

    ctx->pc = 0x24e3b0u;

    // 0x24e3b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24e3b4: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24e3b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24e3bc: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e3c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24e3c4: 0x24426528  addiu       $v0, $v0, 0x6528
    ctx->pc = 0x24e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25896));
    // 0x24e3c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24e3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24e3cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x24e3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x24e3d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x24e3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x24e3d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x24e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x24e3d8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x24e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x24e3dc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x24e3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x24e3e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24e3e4: 0x8c6474d8  lw          $a0, 0x74D8($v1)
    ctx->pc = 0x24e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e3e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e3ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4D6528u));
    // 0x24e3f0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E3F0u;
    {
        const bool branch_taken_0x24e3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3F0u;
        // 0x24e3f4: 0x3c17004d  lui         $s7, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3f0) {
            ctx->pc = 0x24E40Cu;
            goto label_24e40c;
        }
    }
    ctx->pc = 0x24E3F8u;
    // 0x24e3f8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e3fc: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e400: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x24E400u;
    {
        const bool branch_taken_0x24e400 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E400u;
        // 0x24e404: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e400) {
            ctx->pc = 0x24E654u;
            goto label_24e654;
        }
    }
    ctx->pc = 0x24E408u;
    // 0x24e408: 0x3c17004d  lui         $s7, 0x4D
    ctx->pc = 0x24e408u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)77 << 16));
label_24e40c:
    // 0x24e40c: 0x8ee2751c  lw          $v0, 0x751C($s7)
    ctx->pc = 0x24e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 29980)));
    // 0x24e410: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x24E410u;
    {
        const bool branch_taken_0x24e410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E410u;
        // 0x24e414: 0x26e3751c  addiu       $v1, $s7, 0x751C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29980));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e410) {
            ctx->pc = 0x24E644u;
            goto label_24e644;
        }
    }
    ctx->pc = 0x24E418u;
    // 0x24e418: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x24e418u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x24e41c: 0x3c13004d  lui         $s3, 0x4D
    ctx->pc = 0x24e41cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
    // 0x24e420: 0xc0949fe  jal         func_2527F8
    ctx->pc = 0x24E420u;
    SET_GPR_U32(ctx, 31, 0x24E428u);
    ctx->pc = 0x24E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E420u;
    // 0x24e424: 0x26109f78  addiu       $s0, $s0, -0x6088 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2527F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2527F8u, 0x24E420u, 0x24E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E428u;
label_24e428:
    // 0x24e428: 0xc094a94  jal         func_252A50
    ctx->pc = 0x24E428u;
    SET_GPR_U32(ctx, 31, 0x24E430u);
    ctx->pc = 0x24E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E428u;
    // 0x24e42c: 0x26717524  addiu       $s1, $s3, 0x7524 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 29988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252A50u, 0x24E428u, 0x24E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E430u;
label_24e430:
    // 0x24e430: 0xc091e8c  jal         func_247A30
    ctx->pc = 0x24E430u;
    SET_GPR_U32(ctx, 31, 0x24E438u);
    ctx->pc = 0x24E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E430u;
    // 0x24e434: 0x3c14004e  lui         $s4, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)78 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A30u, 0x24E430u, 0x24E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E438u;
label_24e438:
    // 0x24e438: 0xc0939b6  jal         func_24E6D8
    ctx->pc = 0x24E438u;
    SET_GPR_U32(ctx, 31, 0x24E440u);
    ctx->pc = 0x24E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E438u;
    // 0x24e43c: 0x3c12004d  lui         $s2, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)77 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E6D8u, 0x24E438u, 0x24E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E440u;
label_24e440:
    // 0x24e440: 0xc0936f4  jal         func_24DBD0
    ctx->pc = 0x24E440u;
    SET_GPR_U32(ctx, 31, 0x24E448u);
    ctx->pc = 0x24DBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD0u, 0x24E440u, 0x24E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E448u;
label_24e448:
    // 0x24e448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24e448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e450: 0xc049590  jal         func_125640
    ctx->pc = 0x24E450u;
    SET_GPR_U32(ctx, 31, 0x24E458u);
    ctx->pc = 0x24E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E450u;
    // 0x24e454: 0x240608d0  addiu       $a2, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24E450u, 0x24E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E458u;
label_24e458:
    // 0x24e458: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x24e458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x24e45c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24e460: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x24e460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x24e464: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x24e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x24e468: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x24e468u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x24e46c: 0xae849f74  sw          $a0, -0x608C($s4)
    ctx->pc = 0x24e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294942580), GPR_U32(ctx, 4));
    // 0x24e470: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24E470u;
    {
        const bool branch_taken_0x24e470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E470u;
        // 0x24e474: 0xae507520  sw          $s0, 0x7520($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 29984), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e470) {
            ctx->pc = 0x24E4B8u;
            goto label_24e4b8;
        }
    }
    ctx->pc = 0x24E478u;
    // 0x24e478: 0xc0458c6  jal         func_116318
    ctx->pc = 0x24E478u;
    SET_GPR_U32(ctx, 31, 0x24E480u);
    ctx->pc = 0x24E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E478u;
    // 0x24e47c: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116318u, 0x24E478u, 0x24E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E480u;
label_24e480:
    // 0x24e480: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24E480u;
    {
        const bool branch_taken_0x24e480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E480u;
        // 0x24e484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e480) {
            ctx->pc = 0x24E4B8u;
            goto label_24e4b8;
        }
    }
    ctx->pc = 0x24E488u;
    // 0x24e488: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24e488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24e48c: 0x240508d0  addiu       $a1, $zero, 0x8D0
    ctx->pc = 0x24e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x24e490: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24E490u;
    SET_GPR_U32(ctx, 31, 0x24E498u);
    ctx->pc = 0x24E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E490u;
    // 0x24e494: 0x2484e660  addiu       $a0, $a0, -0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24E490u, 0x24E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E498u;
label_24e498:
    // 0x24e498: 0x0  nop
    ctx->pc = 0x24e498u;
    // NOP
    // 0x24e49c: 0x0  nop
    ctx->pc = 0x24e49cu;
    // NOP
    // 0x24e4a0: 0x0  nop
    ctx->pc = 0x24e4a0u;
    // NOP
    // 0x24e4a4: 0x0  nop
    ctx->pc = 0x24e4a4u;
    // NOP
    // 0x24e4a8: 0x0  nop
    ctx->pc = 0x24e4a8u;
    // NOP
    // 0x24e4ac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x24E4ACu;
    {
        const bool branch_taken_0x24e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e4ac) {
            ctx->pc = 0x24E498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e498;
        }
    }
    ctx->pc = 0x24E4B4u;
    // 0x24e4b4: 0x0  nop
    ctx->pc = 0x24e4b4u;
    // NOP
label_24e4b8:
    // 0x24e4b8: 0x26707524  addiu       $s0, $s3, 0x7524
    ctx->pc = 0x24e4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 29988));
    // 0x24e4bc: 0x3c160067  lui         $s6, 0x67
    ctx->pc = 0x24e4bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)103 << 16));
    // 0x24e4c0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x24e4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24e4c4: 0x26c4e528  addiu       $a0, $s6, -0x1AD8
    ctx->pc = 0x24e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960424));
    // 0x24e4c8: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24E4C8u;
    SET_GPR_U32(ctx, 31, 0x24E4D0u);
    ctx->pc = 0x24E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E4C8u;
    // 0x24e4cc: 0x240508d0  addiu       $a1, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24E4C8u, 0x24E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E4D0u;
label_24e4d0:
    // 0x24e4d0: 0x3c08004d  lui         $t0, 0x4D
    ctx->pc = 0x24e4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)77 << 16));
    // 0x24e4d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24e4d8: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x24e4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x24e4dc: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x24e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x24e4e0: 0x8e457520  lw          $a1, 0x7520($s2)
    ctx->pc = 0x24e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29984)));
    // 0x24e4e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x24e4e8: 0x8e879f74  lw          $a3, -0x608C($s4)
    ctx->pc = 0x24e4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942580)));
    // 0x24e4ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e4f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e4f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24e4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e4f8: 0xc091da8  jal         func_2476A0
    ctx->pc = 0x24E4F8u;
    SET_GPR_U32(ctx, 31, 0x24E500u);
    ctx->pc = 0x24E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E4F8u;
    // 0x24e4fc: 0xad027528  sw          $v0, 0x7528($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 29992), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2476A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2476A0u, 0x24E4F8u, 0x24E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E500u;
label_24e500:
    // 0x24e500: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24E500u;
    {
        const bool branch_taken_0x24e500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E500u;
        // 0x24e504: 0xae029f70  sw          $v0, -0x6090($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e500) {
            ctx->pc = 0x24E538u;
            goto label_24e538;
        }
    }
    ctx->pc = 0x24E508u;
    // 0x24e508: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24e508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24e50c: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24E50Cu;
    SET_GPR_U32(ctx, 31, 0x24E514u);
    ctx->pc = 0x24E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E50Cu;
    // 0x24e510: 0x2484e6a8  addiu       $a0, $a0, -0x1958 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24E50Cu, 0x24E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E514u;
label_24e514:
    // 0x24e514: 0x0  nop
    ctx->pc = 0x24e514u;
    // NOP
label_24e518:
    // 0x24e518: 0x0  nop
    ctx->pc = 0x24e518u;
    // NOP
    // 0x24e51c: 0x0  nop
    ctx->pc = 0x24e51cu;
    // NOP
    // 0x24e520: 0x0  nop
    ctx->pc = 0x24e520u;
    // NOP
    // 0x24e524: 0x0  nop
    ctx->pc = 0x24e524u;
    // NOP
    // 0x24e528: 0x0  nop
    ctx->pc = 0x24e528u;
    // NOP
    // 0x24e52c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x24E52Cu;
    {
        const bool branch_taken_0x24e52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e52c) {
            ctx->pc = 0x24E518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e518;
        }
    }
    ctx->pc = 0x24E534u;
    // 0x24e534: 0x0  nop
    ctx->pc = 0x24e534u;
    // NOP
label_24e538:
    // 0x24e538: 0x26109f70  addiu       $s0, $s0, -0x6090
    ctx->pc = 0x24e538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942576));
    // 0x24e53c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x24e53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x24e540: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24e540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24e544: 0x24a5e028  addiu       $a1, $a1, -0x1FD8
    ctx->pc = 0x24e544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959144));
    // 0x24e548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24e548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e54c: 0xc091e28  jal         func_2478A0
    ctx->pc = 0x24E54Cu;
    SET_GPR_U32(ctx, 31, 0x24E554u);
    ctx->pc = 0x24E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E54Cu;
    // 0x24e550: 0x3c11004d  lui         $s1, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)77 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2478A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2478A0u, 0x24E54Cu, 0x24E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E554u;
label_24e554:
    // 0x24e554: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x24e554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x24e558: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24e558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24e55c: 0x24a5e088  addiu       $a1, $a1, -0x1F78
    ctx->pc = 0x24e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959240));
    // 0x24e560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24e560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e564: 0xc091e2c  jal         func_2478B0
    ctx->pc = 0x24E564u;
    SET_GPR_U32(ctx, 31, 0x24E56Cu);
    ctx->pc = 0x24E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E564u;
    // 0x24e568: 0x263474ec  addiu       $s4, $s1, 0x74EC (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 29932));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2478B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2478B0u, 0x24E564u, 0x24E56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E56Cu;
label_24e56c:
    // 0x24e56c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x24e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e570: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24E570u;
    {
        const bool branch_taken_0x24e570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E570u;
        // 0x24e574: 0x3c13004d  lui         $s3, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e570) {
            ctx->pc = 0x24E5F8u;
            goto label_24e5f8;
        }
    }
    ctx->pc = 0x24E578u;
    // 0x24e578: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e57c: 0x3c15004d  lui         $s5, 0x4D
    ctx->pc = 0x24e57cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)77 << 16));
    // 0x24e580: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e580u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e584: 0x26b074e8  addiu       $s0, $s5, 0x74E8
    ctx->pc = 0x24e584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29928));
    // 0x24e588: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x24e588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e58c: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x24e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x24e590: 0xae6374f4  sw          $v1, 0x74F4($s3)
    ctx->pc = 0x24e590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 29940), GPR_U32(ctx, 3));
    // 0x24e594: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x24e598: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24e598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24e59c: 0xc0458c6  jal         func_116318
    ctx->pc = 0x24E59Cu;
    SET_GPR_U32(ctx, 31, 0x24E5A4u);
    ctx->pc = 0x24E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E59Cu;
    // 0x24e5a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116318u, 0x24E59Cu, 0x24E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5A4u;
label_24e5a4:
    // 0x24e5a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24E5A4u;
    {
        const bool branch_taken_0x24e5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5A4u;
        // 0x24e5a8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5a4) {
            ctx->pc = 0x24E5E0u;
            goto label_24e5e0;
        }
    }
    ctx->pc = 0x24E5ACu;
    // 0x24e5ac: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24e5b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24e5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24e5b4: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24E5B4u;
    SET_GPR_U32(ctx, 31, 0x24E5BCu);
    ctx->pc = 0x24E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E5B4u;
    // 0x24e5b8: 0x2484e6d0  addiu       $a0, $a0, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24E5B4u, 0x24E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5BCu;
label_24e5bc:
    // 0x24e5bc: 0x0  nop
    ctx->pc = 0x24e5bcu;
    // NOP
label_24e5c0:
    // 0x24e5c0: 0x0  nop
    ctx->pc = 0x24e5c0u;
    // NOP
    // 0x24e5c4: 0x0  nop
    ctx->pc = 0x24e5c4u;
    // NOP
    // 0x24e5c8: 0x0  nop
    ctx->pc = 0x24e5c8u;
    // NOP
    // 0x24e5cc: 0x0  nop
    ctx->pc = 0x24e5ccu;
    // NOP
    // 0x24e5d0: 0x0  nop
    ctx->pc = 0x24e5d0u;
    // NOP
    // 0x24e5d4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x24E5D4u;
    {
        const bool branch_taken_0x24e5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e5d4) {
            ctx->pc = 0x24E5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e5c0;
        }
    }
    ctx->pc = 0x24E5DCu;
    // 0x24e5dc: 0x0  nop
    ctx->pc = 0x24e5dcu;
    // NOP
label_24e5e0:
    // 0x24e5e0: 0x8e4574e8  lw          $a1, 0x74E8($s2)
    ctx->pc = 0x24e5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29928)));
    // 0x24e5e4: 0x26c4e528  addiu       $a0, $s6, -0x1AD8
    ctx->pc = 0x24e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960424));
    // 0x24e5e8: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24E5E8u;
    SET_GPR_U32(ctx, 31, 0x24E5F0u);
    ctx->pc = 0x24E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E5E8u;
    // 0x24e5ec: 0x8e2674ec  lw          $a2, 0x74EC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29932)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24E5E8u, 0x24E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E5F0u;
label_24e5f0:
    // 0x24e5f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24E5F0u;
    {
        const bool branch_taken_0x24e5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5F0u;
        // 0x24e5f4: 0x8e2274ec  lw          $v0, 0x74EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5f0) {
            ctx->pc = 0x24E600u;
            goto label_24e600;
        }
    }
    ctx->pc = 0x24E5F8u;
label_24e5f8:
    // 0x24e5f8: 0x3c15004d  lui         $s5, 0x4D
    ctx->pc = 0x24e5f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)77 << 16));
    // 0x24e5fc: 0x8e2274ec  lw          $v0, 0x74EC($s1)
    ctx->pc = 0x24e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29932)));
label_24e600:
    // 0x24e600: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x24e600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x24e604: 0x8e6574f4  lw          $a1, 0x74F4($s3)
    ctx->pc = 0x24e604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29940)));
    // 0x24e608: 0x3c09004d  lui         $t1, 0x4D
    ctx->pc = 0x24e608u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)77 << 16));
    // 0x24e60c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x24e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x24e610: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x24e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24e614: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24e614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24e618: 0x8ea374e8  lw          $v1, 0x74E8($s5)
    ctx->pc = 0x24e618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29928)));
    // 0x24e61c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x24e620: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24e620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e624: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x24e624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24e628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24e628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e62c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24e62cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e630: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x24e630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x24e634: 0xad2274f0  sw          $v0, 0x74F0($t1)
    ctx->pc = 0x24e634u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 29936), GPR_U32(ctx, 2));
    // 0x24e638: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24E638u;
    SET_GPR_U32(ctx, 31, 0x24E640u);
    ctx->pc = 0x24E63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E638u;
    // 0x24e63c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24E638u, 0x24E640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E640u;
label_24e640:
    // 0x24e640: 0x26e3751c  addiu       $v1, $s7, 0x751C
    ctx->pc = 0x24e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29980));
label_24e644:
    // 0x24e644: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24e644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24e64c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24e650: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e654:
    // 0x24e654: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24e654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24e658: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24e658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e65c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x24e65cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24e660: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x24e660u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e664: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x24e664u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24e668: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x24e668u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e66c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x24e66cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24e670: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24e670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e674: 0x3e00008  jr          $ra
    ctx->pc = 0x24E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E674u;
        // 0x24e678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E67Cu;
}
