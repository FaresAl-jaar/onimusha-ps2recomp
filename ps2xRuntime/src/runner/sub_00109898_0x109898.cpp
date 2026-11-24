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

// Function: sub_00109898
// Address: 0x109898 - 0x109a38
void sub_00109898_0x109898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109898_0x109898");
#endif

    switch (ctx->pc) {
        case 0x1098d0u: goto label_1098d0;
        case 0x1098d8u: goto label_1098d8;
        case 0x1098e0u: goto label_1098e0;
        case 0x1098ecu: goto label_1098ec;
        case 0x109908u: goto label_109908;
        case 0x10992cu: goto label_10992c;
        case 0x10993cu: goto label_10993c;
        case 0x109948u: goto label_109948;
        case 0x109958u: goto label_109958;
        case 0x109968u: goto label_109968;
        case 0x109974u: goto label_109974;
        case 0x109980u: goto label_109980;
        case 0x109988u: goto label_109988;
        case 0x109994u: goto label_109994;
        case 0x1099a4u: goto label_1099a4;
        case 0x1099c4u: goto label_1099c4;
        default: break;
    }

    ctx->pc = 0x109898u;

    // 0x109898: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x109898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10989c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1098a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1098a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1098a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1098a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1098a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1098ac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1098acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1098b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1098b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1098b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1098b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1098bc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1098bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1098c0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1098c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098c4: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1098c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1098c8: 0xc042a6a  jal         func_10A9A8
    ctx->pc = 0x1098C8u;
    SET_GPR_U32(ctx, 31, 0x1098D0u);
    ctx->pc = 0x1098CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098C8u;
    // 0x1098cc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9A8u, 0x1098C8u, 0x1098D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098D0u;
label_1098d0:
    // 0x1098d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1098D0u;
    {
        const bool branch_taken_0x1098d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098D0u;
        // 0x1098d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098d0) {
            ctx->pc = 0x1098E4u;
            goto label_1098e4;
        }
    }
    ctx->pc = 0x1098D8u;
label_1098d8:
    // 0x1098d8: 0xc042a10  jal         func_10A840
    ctx->pc = 0x1098D8u;
    SET_GPR_U32(ctx, 31, 0x1098E0u);
    ctx->pc = 0x1098DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098D8u;
    // 0x1098dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A840u, 0x1098D8u, 0x1098E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098E0u;
label_1098e0:
    // 0x1098e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1098e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1098e4:
    // 0x1098e4: 0xc04216c  jal         func_1085B0
    ctx->pc = 0x1098E4u;
    SET_GPR_U32(ctx, 31, 0x1098ECu);
    ctx->pc = 0x1098E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098E4u;
    // 0x1098e8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085B0u, 0x1098E4u, 0x1098ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098ECu;
label_1098ec:
    // 0x1098ec: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1098ECu;
    {
        const bool branch_taken_0x1098ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1098F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098ECu;
        // 0x1098f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098ec) {
            ctx->pc = 0x109900u;
            goto label_109900;
        }
    }
    ctx->pc = 0x1098F4u;
    // 0x1098f4: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x1098f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1098f8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1098F8u;
    {
        const bool branch_taken_0x1098f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1098f8) {
            ctx->pc = 0x1098D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1098d8;
        }
    }
    ctx->pc = 0x109900u;
label_109900:
    // 0x109900: 0xc04216c  jal         func_1085B0
    ctx->pc = 0x109900u;
    SET_GPR_U32(ctx, 31, 0x109908u);
    ctx->pc = 0x109904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109900u;
    // 0x109904: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085B0u, 0x109900u, 0x109908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109908u;
label_109908:
    // 0x109908: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10990c: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x10990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x109910: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x109910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x109914: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109914u;
    {
        const bool branch_taken_0x109914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109914u;
        // 0x109918: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109914) {
            ctx->pc = 0x109934u;
            goto label_109934;
        }
    }
    ctx->pc = 0x10991Cu;
    // 0x10991c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109920: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    // 0x109924: 0xc04354c  jal         func_10D530
    ctx->pc = 0x109924u;
    SET_GPR_U32(ctx, 31, 0x10992Cu);
    ctx->pc = 0x109928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109924u;
    // 0x109928: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D530u, 0x109924u, 0x10992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10992Cu;
label_10992c:
    // 0x10992c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x10992Cu;
    {
        const bool branch_taken_0x10992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10992Cu;
        // 0x109930: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10992c) {
            ctx->pc = 0x109A18u;
            goto label_109a18;
        }
    }
    ctx->pc = 0x109934u;
label_109934:
    // 0x109934: 0xc042a68  jal         func_10A9A0
    ctx->pc = 0x109934u;
    SET_GPR_U32(ctx, 31, 0x10993Cu);
    ctx->pc = 0x109938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109934u;
    // 0x109938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9A0u, 0x109934u, 0x10993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10993Cu;
label_10993c:
    // 0x10993c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109940: 0xc042132  jal         func_1084C8
    ctx->pc = 0x109940u;
    SET_GPR_U32(ctx, 31, 0x109948u);
    ctx->pc = 0x109944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109940u;
    // 0x109944: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x109940u, 0x109948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109948u;
label_109948:
    // 0x109948: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x109948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x10994c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109950: 0xc042132  jal         func_1084C8
    ctx->pc = 0x109950u;
    SET_GPR_U32(ctx, 31, 0x109958u);
    ctx->pc = 0x109954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109950u;
    // 0x109954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x109950u, 0x109958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109958u;
label_109958:
    // 0x109958: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x109958u;
    {
        const bool branch_taken_0x109958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109958u;
        // 0x10995c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109958) {
            ctx->pc = 0x10999Cu;
            goto label_10999c;
        }
    }
    ctx->pc = 0x109960u;
    // 0x109960: 0xc042132  jal         func_1084C8
    ctx->pc = 0x109960u;
    SET_GPR_U32(ctx, 31, 0x109968u);
    ctx->pc = 0x109964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109960u;
    // 0x109964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x109960u, 0x109968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109968u;
label_109968:
    // 0x109968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10996c: 0xc042a10  jal         func_10A840
    ctx->pc = 0x10996Cu;
    SET_GPR_U32(ctx, 31, 0x109974u);
    ctx->pc = 0x109970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10996Cu;
    // 0x109970: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A840u, 0x10996Cu, 0x109974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109974u;
label_109974:
    // 0x109974: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x109974u;
    {
        const bool branch_taken_0x109974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109974u;
        // 0x109978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109974) {
            ctx->pc = 0x10998Cu;
            goto label_10998c;
        }
    }
    ctx->pc = 0x10997Cu;
    // 0x10997c: 0x0  nop
    ctx->pc = 0x10997cu;
    // NOP
label_109980:
    // 0x109980: 0xc042a10  jal         func_10A840
    ctx->pc = 0x109980u;
    SET_GPR_U32(ctx, 31, 0x109988u);
    ctx->pc = 0x109984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109980u;
    // 0x109984: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A840u, 0x109980u, 0x109988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109988u;
label_109988:
    // 0x109988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10998c:
    // 0x10998c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10998Cu;
    SET_GPR_U32(ctx, 31, 0x109994u);
    ctx->pc = 0x109990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10998Cu;
    // 0x109990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10998Cu, 0x109994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109994u;
label_109994:
    // 0x109994: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x109994u;
    {
        const bool branch_taken_0x109994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109994u;
        // 0x109998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109994) {
            ctx->pc = 0x109980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109980;
        }
    }
    ctx->pc = 0x10999Cu;
label_10999c:
    // 0x10999c: 0xc04201a  jal         func_108068
    ctx->pc = 0x10999Cu;
    SET_GPR_U32(ctx, 31, 0x1099A4u);
    ctx->pc = 0x1099A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10999Cu;
    // 0x1099a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108068u, 0x10999Cu, 0x1099A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099A4u;
label_1099a4:
    // 0x1099a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1099a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099a8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1099a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x1099ac: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1099acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1099b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1099B0u;
    {
        const bool branch_taken_0x1099b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1099B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099B0u;
        // 0x1099b4: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099b0) {
            ctx->pc = 0x1099CCu;
            goto label_1099cc;
        }
    }
    ctx->pc = 0x1099B8u;
    // 0x1099b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1099b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099bc: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x1099BCu;
    SET_GPR_U32(ctx, 31, 0x1099C4u);
    ctx->pc = 0x1099C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099BCu;
    // 0x1099c0: 0x24a51fa8  addiu       $a1, $a1, 0x1FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x1099BCu, 0x1099C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099C4u;
label_1099c4:
    // 0x1099c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1099C4u;
    {
        const bool branch_taken_0x1099c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1099C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099C4u;
        // 0x1099c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099c4) {
            ctx->pc = 0x109A18u;
            goto label_109a18;
        }
    }
    ctx->pc = 0x1099CCu;
label_1099cc:
    // 0x1099cc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x1099ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x1099d0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1099d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1099d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1099d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1099d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1099d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1099dc: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x1099dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1099e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1099e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099e4: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1099e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1099e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1099e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1099ec: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1099ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1099f0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1099f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1099f4: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x1099f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x1099f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1099f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1099fc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1099fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x109a00: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x109a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x109a04: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x109a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x109a08: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x109a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x109a0c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x109a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x109a10: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x109a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x109a14: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x109a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_109a18:
    // 0x109a18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x109a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109a1c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x109a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109a20: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109a24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109a28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109a30: 0x3e00008  jr          $ra
    ctx->pc = 0x109A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A30u;
        // 0x109a34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109A38u;
}
