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

// Function: sub_003DE840
// Address: 0x3de840 - 0x3deb7c
void sub_003DE840_0x3de840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE840_0x3de840");
#endif

    switch (ctx->pc) {
        case 0x3de8d0u: goto label_3de8d0;
        case 0x3de8e8u: goto label_3de8e8;
        case 0x3de8f8u: goto label_3de8f8;
        case 0x3de938u: goto label_3de938;
        case 0x3de94cu: goto label_3de94c;
        case 0x3de964u: goto label_3de964;
        case 0x3de98cu: goto label_3de98c;
        case 0x3de9d0u: goto label_3de9d0;
        case 0x3de9e0u: goto label_3de9e0;
        case 0x3de9fcu: goto label_3de9fc;
        case 0x3dea0cu: goto label_3dea0c;
        case 0x3dea2cu: goto label_3dea2c;
        case 0x3dea3cu: goto label_3dea3c;
        case 0x3dea70u: goto label_3dea70;
        case 0x3dea84u: goto label_3dea84;
        case 0x3dea94u: goto label_3dea94;
        case 0x3deaacu: goto label_3deaac;
        case 0x3deab8u: goto label_3deab8;
        case 0x3deb68u: goto label_3deb68;
        default: break;
    }

    ctx->pc = 0x3de840u;

    // 0x3de840: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3de840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3de844: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3de844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3de848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3de848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3de84c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3de84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3de850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3de850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3de854: 0x90870521  lbu         $a3, 0x521($a0)
    ctx->pc = 0x3de854u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3de858: 0x10e30033  beq         $a3, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3DE858u;
    {
        const bool branch_taken_0x3de858 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DE85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE858u;
        // 0x3de85c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de858) {
            ctx->pc = 0x3DE928u;
            goto label_3de928;
        }
    }
    ctx->pc = 0x3DE860u;
    // 0x3de860: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3de860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3de864: 0x10e60028  beq         $a3, $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x3DE864u;
    {
        const bool branch_taken_0x3de864 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x3de864) {
            ctx->pc = 0x3DE908u;
            goto label_3de908;
        }
    }
    ctx->pc = 0x3DE86Cu;
    // 0x3de86c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE86Cu;
    {
        const bool branch_taken_0x3de86c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de86c) {
            ctx->pc = 0x3DE880u;
            goto label_3de880;
        }
    }
    ctx->pc = 0x3DE874u;
    // 0x3de874: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x3DE874u;
    {
        const bool branch_taken_0x3de874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de874) {
            ctx->pc = 0x3DEB68u;
            goto label_3deb68;
        }
    }
    ctx->pc = 0x3DE87Cu;
    // 0x3de87c: 0x0  nop
    ctx->pc = 0x3de87cu;
    // NOP
label_3de880:
    // 0x3de880: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3DE880u;
    {
        const bool branch_taken_0x3de880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de880) {
            ctx->pc = 0x3DE8F0u;
            goto label_3de8f0;
        }
    }
    ctx->pc = 0x3DE888u;
    // 0x3de888: 0x92050599  lbu         $a1, 0x599($s0)
    ctx->pc = 0x3de888u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1433)));
    // 0x3de88c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3de88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3de890: 0x24634800  addiu       $v1, $v1, 0x4800
    ctx->pc = 0x3de890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18432));
    // 0x3de894: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3de894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3de898: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3de898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3de89c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3de89cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3de8a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3de8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3de8a4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3de8a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3de8a8: 0x1066000b  beq         $v1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3DE8A8u;
    {
        const bool branch_taken_0x3de8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3de8a8) {
            ctx->pc = 0x3DE8D8u;
            goto label_3de8d8;
        }
    }
    ctx->pc = 0x3DE8B0u;
    // 0x3de8b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE8B0u;
    {
        const bool branch_taken_0x3de8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de8b0) {
            ctx->pc = 0x3DE8C0u;
            goto label_3de8c0;
        }
    }
    ctx->pc = 0x3DE8B8u;
    // 0x3de8b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3DE8B8u;
    {
        const bool branch_taken_0x3de8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de8b8) {
            ctx->pc = 0x3DE8F8u;
            goto label_3de8f8;
        }
    }
    ctx->pc = 0x3DE8C0u;
label_3de8c0:
    // 0x3de8c0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3de8c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3de8c4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3de8c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3de8c8: 0xc0a98e8  jal         func_2A63A0
    ctx->pc = 0x3DE8C8u;
    SET_GPR_U32(ctx, 31, 0x3DE8D0u);
    ctx->pc = 0x3DE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE8C8u;
    // 0x3de8cc: 0x26060550  addiu       $a2, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A63A0u, 0x3DE8C8u, 0x3DE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE8D0u;
label_3de8d0:
    // 0x3de8d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3DE8D0u;
    {
        const bool branch_taken_0x3de8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8D0u;
        // 0x3de8d4: 0xae020590  sw          $v0, 0x590($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de8d0) {
            ctx->pc = 0x3DE8F8u;
            goto label_3de8f8;
        }
    }
    ctx->pc = 0x3DE8D8u;
label_3de8d8:
    // 0x3de8d8: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3de8d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3de8dc: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3de8dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3de8e0: 0xc0a98f8  jal         func_2A63E0
    ctx->pc = 0x3DE8E0u;
    SET_GPR_U32(ctx, 31, 0x3DE8E8u);
    ctx->pc = 0x3DE8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE8E0u;
    // 0x3de8e4: 0x26060550  addiu       $a2, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A63E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A63E0u, 0x3DE8E0u, 0x3DE8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE8E8u;
label_3de8e8:
    // 0x3de8e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE8E8u;
    {
        const bool branch_taken_0x3de8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8E8u;
        // 0x3de8ec: 0xae020590  sw          $v0, 0x590($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de8e8) {
            ctx->pc = 0x3DE8F8u;
            goto label_3de8f8;
        }
    }
    ctx->pc = 0x3DE8F0u;
label_3de8f0:
    // 0x3de8f0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DE8F0u;
    SET_GPR_U32(ctx, 31, 0x3DE8F8u);
    ctx->pc = 0x3DE8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE8F0u;
    // 0x3de8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DE8F0u, 0x3DE8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE8F8u;
label_3de8f8:
    // 0x3de8f8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3de8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3de8fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de900: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x3DE900u;
    {
        const bool branch_taken_0x3de900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE900u;
        // 0x3de904: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de900) {
            ctx->pc = 0x3DEB68u;
            goto label_3deb68;
        }
    }
    ctx->pc = 0x3DE908u;
label_3de908:
    // 0x3de908: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3de908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3de90c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3de90cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3de910: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3de910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3de914: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3de914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3de918: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3de918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3de91c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3de91cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3de920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3de920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3de924: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3de924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3de928:
    // 0x3de928: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3de928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3de92c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de930: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x3DE930u;
    SET_GPR_U32(ctx, 31, 0x3DE938u);
    ctx->pc = 0x3DE934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE930u;
    // 0x3de934: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x3DE930u, 0x3DE938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE938u;
label_3de938:
    // 0x3de938: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3de938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3de93c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3de93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3de940: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3de940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3de944: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3DE944u;
    SET_GPR_U32(ctx, 31, 0x3DE94Cu);
    ctx->pc = 0x3DE948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE944u;
    // 0x3de948: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3DE944u, 0x3DE94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE94Cu;
label_3de94c:
    // 0x3de94c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3de94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3de950: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3de950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3de954: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3de954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3de958: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3de958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3de95c: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x3DE95Cu;
    SET_GPR_U32(ctx, 31, 0x3DE964u);
    ctx->pc = 0x3DE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE95Cu;
    // 0x3de960: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x3DE95Cu, 0x3DE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE964u;
label_3de964:
    // 0x3de964: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3de964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3de968: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3de968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3de96c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3de96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3de970: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x3de970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3de974: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3de974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3de978: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x3de978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3de97c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3de97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3de980: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3de980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3de984: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3DE984u;
    SET_GPR_U32(ctx, 31, 0x3DE98Cu);
    ctx->pc = 0x3DE988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE984u;
    // 0x3de988: 0xe6000594  swc1        $f0, 0x594($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1428), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3DE984u, 0x3DE98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE98Cu;
label_3de98c:
    // 0x3de98c: 0x92060599  lbu         $a2, 0x599($s0)
    ctx->pc = 0x3de98cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1433)));
    // 0x3de990: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3de990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3de994: 0x24634804  addiu       $v1, $v1, 0x4804
    ctx->pc = 0x3de994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18436));
    // 0x3de998: 0x8602059a  lh          $v0, 0x59A($s0)
    ctx->pc = 0x3de998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1434)));
    // 0x3de99c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x3de99cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3de9a0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3de9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3de9a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3de9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3de9a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3de9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3de9ac: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3de9acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3de9b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3de9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3de9b4: 0xa602059a  sh          $v0, 0x59A($s0)
    ctx->pc = 0x3de9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1434), (uint16_t)GPR_U32(ctx, 2));
    // 0x3de9b8: 0x8602059a  lh          $v0, 0x59A($s0)
    ctx->pc = 0x3de9b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1434)));
    // 0x3de9bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3de9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3de9c0: 0xa602059a  sh          $v0, 0x59A($s0)
    ctx->pc = 0x3de9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1434), (uint16_t)GPR_U32(ctx, 2));
    // 0x3de9c4: 0x8605059a  lh          $a1, 0x59A($s0)
    ctx->pc = 0x3de9c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1434)));
    // 0x3de9c8: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3DE9C8u;
    SET_GPR_U32(ctx, 31, 0x3DE9D0u);
    ctx->pc = 0x3DE9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE9C8u;
    // 0x3de9cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3DE9C8u, 0x3DE9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE9D0u;
label_3de9d0:
    // 0x3de9d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3de9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3de9d4: 0x26050550  addiu       $a1, $s0, 0x550
    ctx->pc = 0x3de9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3de9d8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3DE9D8u;
    SET_GPR_U32(ctx, 31, 0x3DE9E0u);
    ctx->pc = 0x3DE9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE9D8u;
    // 0x3de9dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3DE9D8u, 0x3DE9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE9E0u;
label_3de9e0:
    // 0x3de9e0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3de9e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3de9e4: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x3de9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3de9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de9ec: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3de9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3de9f0: 0x8e060590  lw          $a2, 0x590($s0)
    ctx->pc = 0x3de9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x3de9f4: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3DE9F4u;
    SET_GPR_U32(ctx, 31, 0x3DE9FCu);
    ctx->pc = 0x3DE9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE9F4u;
    // 0x3de9f8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3DE9F4u, 0x3DE9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE9FCu;
label_3de9fc:
    // 0x3de9fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE9FCu;
    {
        const bool branch_taken_0x3de9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE9FCu;
        // 0x3dea00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de9fc) {
            ctx->pc = 0x3DEA10u;
            goto label_3dea10;
        }
    }
    ctx->pc = 0x3DEA04u;
    // 0x3dea04: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DEA04u;
    SET_GPR_U32(ctx, 31, 0x3DEA0Cu);
    ctx->pc = 0x3DEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA04u;
    // 0x3dea08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DEA04u, 0x3DEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA0Cu;
label_3dea0c:
    // 0x3dea0c: 0x0  nop
    ctx->pc = 0x3dea0cu;
    // NOP
label_3dea10:
    // 0x3dea10: 0x92060598  lbu         $a2, 0x598($s0)
    ctx->pc = 0x3dea10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x3dea14: 0xc60c0594  lwc1        $f12, 0x594($s0)
    ctx->pc = 0x3dea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3dea18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea1c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3dea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dea20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3dea20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea24: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3DEA24u;
    SET_GPR_U32(ctx, 31, 0x3DEA2Cu);
    ctx->pc = 0x3DEA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA24u;
    // 0x3dea28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3DEA24u, 0x3DEA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA2Cu;
label_3dea2c:
    // 0x3dea2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DEA2Cu;
    {
        const bool branch_taken_0x3dea2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA2Cu;
        // 0x3dea30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea2c) {
            ctx->pc = 0x3DEA48u;
            goto label_3dea48;
        }
    }
    ctx->pc = 0x3DEA34u;
    // 0x3dea34: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DEA34u;
    SET_GPR_U32(ctx, 31, 0x3DEA3Cu);
    ctx->pc = 0x3DEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA34u;
    // 0x3dea38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DEA34u, 0x3DEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA3Cu;
label_3dea3c:
    // 0x3dea3c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3DEA3Cu;
    {
        const bool branch_taken_0x3dea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dea3c) {
            ctx->pc = 0x3DEB68u;
            goto label_3deb68;
        }
    }
    ctx->pc = 0x3DEA44u;
    // 0x3dea44: 0x0  nop
    ctx->pc = 0x3dea44u;
    // NOP
label_3dea48:
    // 0x3dea48: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3dea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3dea4c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x3dea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x3dea50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea54: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3dea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3dea58: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x3dea58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3dea5c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3dea5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dea60: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x3dea60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3dea64: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3dea64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dea68: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3DEA68u;
    SET_GPR_U32(ctx, 31, 0x3DEA70u);
    ctx->pc = 0x3DEA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA68u;
    // 0x3dea6c: 0x27aa009c  addiu       $t2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3DEA68u, 0x3DEA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA70u;
label_3dea70:
    // 0x3dea70: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DEA70u;
    {
        const bool branch_taken_0x3dea70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dea70) {
            ctx->pc = 0x3DEAC0u;
            goto label_3deac0;
        }
    }
    ctx->pc = 0x3DEA78u;
    // 0x3dea78: 0x8605059a  lh          $a1, 0x59A($s0)
    ctx->pc = 0x3dea78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1434)));
    // 0x3dea7c: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x3DEA7Cu;
    SET_GPR_U32(ctx, 31, 0x3DEA84u);
    ctx->pc = 0x3DEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA7Cu;
    // 0x3dea80: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x3DEA7Cu, 0x3DEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA84u;
label_3dea84:
    // 0x3dea84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3dea84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dea88: 0x26050550  addiu       $a1, $s0, 0x550
    ctx->pc = 0x3dea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3dea8c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3DEA8Cu;
    SET_GPR_U32(ctx, 31, 0x3DEA94u);
    ctx->pc = 0x3DEA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA8Cu;
    // 0x3dea90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3DEA8Cu, 0x3DEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA94u;
label_3dea94:
    // 0x3dea94: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3dea94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3dea98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea9c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3dea9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3deaa0: 0x8e060590  lw          $a2, 0x590($s0)
    ctx->pc = 0x3deaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x3deaa4: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3DEAA4u;
    SET_GPR_U32(ctx, 31, 0x3DEAACu);
    ctx->pc = 0x3DEAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEAA4u;
    // 0x3deaa8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3DEAA4u, 0x3DEAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEAACu;
label_3deaac:
    // 0x3deaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3deaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deab0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DEAB0u;
    SET_GPR_U32(ctx, 31, 0x3DEAB8u);
    ctx->pc = 0x3DEAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEAB0u;
    // 0x3deab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DEAB0u, 0x3DEAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEAB8u;
label_3deab8:
    // 0x3deab8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3DEAB8u;
    {
        const bool branch_taken_0x3deab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3deab8) {
            ctx->pc = 0x3DEB68u;
            goto label_3deb68;
        }
    }
    ctx->pc = 0x3DEAC0u;
label_3deac0:
    // 0x3deac0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3deac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3deac4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DEAC4u;
    {
        const bool branch_taken_0x3deac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAC4u;
        // 0x3deac8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deac4) {
            ctx->pc = 0x3DEAD8u;
            goto label_3dead8;
        }
    }
    ctx->pc = 0x3DEACCu;
    // 0x3deacc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3DEACCu;
    {
        const bool branch_taken_0x3deacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3deacc) {
            ctx->pc = 0x3DEB58u;
            goto label_3deb58;
        }
    }
    ctx->pc = 0x3DEAD4u;
    // 0x3dead4: 0x0  nop
    ctx->pc = 0x3dead4u;
    // NOP
label_3dead8:
    // 0x3dead8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3dead8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3deadc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3deadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3deae0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3deae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3deae4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3deae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3deae8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3deae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3deaec: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3DEAECu;
    {
        const bool branch_taken_0x3deaec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3deaec) {
            ctx->pc = 0x3DEB28u;
            goto label_3deb28;
        }
    }
    ctx->pc = 0x3DEAF4u;
    // 0x3deaf4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3deaf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3deaf8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3deaf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3deafc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DEAFCu;
    {
        const bool branch_taken_0x3deafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAFCu;
        // 0x3deb00: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deafc) {
            ctx->pc = 0x3DEB50u;
            goto label_3deb50;
        }
    }
    ctx->pc = 0x3DEB04u;
    // 0x3deb04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3deb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3deb08: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3deb08u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3deb0c: 0x0  nop
    ctx->pc = 0x3deb0cu;
    // NOP
    // 0x3deb10: 0x0  nop
    ctx->pc = 0x3deb10u;
    // NOP
    // 0x3deb14: 0x2010  mfhi        $a0
    ctx->pc = 0x3deb14u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3deb18: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3deb18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3deb1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DEB1Cu;
    {
        const bool branch_taken_0x3deb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB1Cu;
        // 0x3deb20: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb1c) {
            ctx->pc = 0x3DEB50u;
            goto label_3deb50;
        }
    }
    ctx->pc = 0x3DEB24u;
    // 0x3deb24: 0x0  nop
    ctx->pc = 0x3deb24u;
    // NOP
label_3deb28:
    // 0x3deb28: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3deb28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3deb2c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3deb2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3deb30: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DEB30u;
    {
        const bool branch_taken_0x3deb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3deb30) {
            ctx->pc = 0x3DEB50u;
            goto label_3deb50;
        }
    }
    ctx->pc = 0x3DEB38u;
    // 0x3deb38: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3deb38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3deb3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3deb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3deb40: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3deb40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3deb44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DEB44u;
    {
        const bool branch_taken_0x3deb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB44u;
        // 0x3deb48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb44) {
            ctx->pc = 0x3DEB58u;
            goto label_3deb58;
        }
    }
    ctx->pc = 0x3DEB4Cu;
    // 0x3deb4c: 0x0  nop
    ctx->pc = 0x3deb4cu;
    // NOP
label_3deb50:
    // 0x3deb50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3deb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3deb54: 0x0  nop
    ctx->pc = 0x3deb54u;
    // NOP
label_3deb58:
    // 0x3deb58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DEB58u;
    {
        const bool branch_taken_0x3deb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB58u;
        // 0x3deb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb58) {
            ctx->pc = 0x3DEB68u;
            goto label_3deb68;
        }
    }
    ctx->pc = 0x3DEB60u;
    // 0x3deb60: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DEB60u;
    SET_GPR_U32(ctx, 31, 0x3DEB68u);
    ctx->pc = 0x3DEB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEB60u;
    // 0x3deb64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DEB60u, 0x3DEB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEB68u;
label_3deb68:
    // 0x3deb68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3deb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3deb6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3deb6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3deb70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3deb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3deb74: 0x3e00008  jr          $ra
    ctx->pc = 0x3DEB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB74u;
        // 0x3deb78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEB7Cu;
}
