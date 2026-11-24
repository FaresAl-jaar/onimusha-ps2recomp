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

// Function: sub_003D4940
// Address: 0x3d4940 - 0x3d4cd8
void sub_003D4940_0x3d4940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4940_0x3d4940");
#endif

    switch (ctx->pc) {
        case 0x3d4998u: goto label_3d4998;
        case 0x3d49a8u: goto label_3d49a8;
        case 0x3d49e0u: goto label_3d49e0;
        case 0x3d49f0u: goto label_3d49f0;
        case 0x3d4a44u: goto label_3d4a44;
        case 0x3d4a58u: goto label_3d4a58;
        case 0x3d4a70u: goto label_3d4a70;
        case 0x3d4accu: goto label_3d4acc;
        case 0x3d4b18u: goto label_3d4b18;
        case 0x3d4b28u: goto label_3d4b28;
        case 0x3d4b40u: goto label_3d4b40;
        case 0x3d4b50u: goto label_3d4b50;
        case 0x3d4b60u: goto label_3d4b60;
        case 0x3d4bdcu: goto label_3d4bdc;
        case 0x3d4becu: goto label_3d4bec;
        case 0x3d4c20u: goto label_3d4c20;
        case 0x3d4cc8u: goto label_3d4cc8;
        default: break;
    }

    ctx->pc = 0x3d4940u;

    // 0x3d4940: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3d4940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3d4944: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d4948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d4948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d494c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d4950: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3d4950u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3d4954: 0x10c30032  beq         $a2, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3D4954u;
    {
        const bool branch_taken_0x3d4954 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4954u;
        // 0x3d4958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4954) {
            ctx->pc = 0x3D4A20u;
            goto label_3d4a20;
        }
    }
    ctx->pc = 0x3D495Cu;
    // 0x3d495c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4960: 0x10c30027  beq         $a2, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3D4960u;
    {
        const bool branch_taken_0x3d4960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d4960) {
            ctx->pc = 0x3D4A00u;
            goto label_3d4a00;
        }
    }
    ctx->pc = 0x3D4968u;
    // 0x3d4968: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4968u;
    {
        const bool branch_taken_0x3d4968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4968) {
            ctx->pc = 0x3D4978u;
            goto label_3d4978;
        }
    }
    ctx->pc = 0x3D4970u;
    // 0x3d4970: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x3D4970u;
    {
        const bool branch_taken_0x3d4970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4970) {
            ctx->pc = 0x3D4CC8u;
            goto label_3d4cc8;
        }
    }
    ctx->pc = 0x3D4978u;
label_3d4978:
    // 0x3d4978: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3D4978u;
    {
        const bool branch_taken_0x3d4978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4978) {
            ctx->pc = 0x3D49E8u;
            goto label_3d49e8;
        }
    }
    ctx->pc = 0x3D4980u;
    // 0x3d4980: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d4980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d4984: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3d4984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d4988: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3d4988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3d498c: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x3d498cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d4990: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3D4990u;
    SET_GPR_U32(ctx, 31, 0x3D4998u);
    ctx->pc = 0x3D4994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4990u;
    // 0x3d4994: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3D4990u, 0x3D4998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4998u;
label_3d4998:
    // 0x3d4998: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3d4998u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3d499c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3d499cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3d49a0: 0xc0aabd8  jal         func_2AAF60
    ctx->pc = 0x3D49A0u;
    SET_GPR_U32(ctx, 31, 0x3D49A8u);
    ctx->pc = 0x3D49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49A0u;
    // 0x3d49a4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAF60u, 0x3D49A0u, 0x3D49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49A8u;
label_3d49a8:
    // 0x3d49a8: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x3d49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x3d49ac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d49acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d49b0: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3d49b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3d49b4: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x3d49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x3d49b8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d49b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d49bc: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3d49bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3d49c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d49c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d49c4: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3d49c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d49c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d49c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d49cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d49ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d49d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d49d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d49d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d49d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d49d8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D49D8u;
    SET_GPR_U32(ctx, 31, 0x3D49E0u);
    ctx->pc = 0x3D49DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49D8u;
    // 0x3d49dc: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D49D8u, 0x3D49E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49E0u;
label_3d49e0:
    // 0x3d49e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D49E0u;
    {
        const bool branch_taken_0x3d49e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d49e0) {
            ctx->pc = 0x3D49F0u;
            goto label_3d49f0;
        }
    }
    ctx->pc = 0x3D49E8u;
label_3d49e8:
    // 0x3d49e8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D49E8u;
    SET_GPR_U32(ctx, 31, 0x3D49F0u);
    ctx->pc = 0x3D49ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49E8u;
    // 0x3d49ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D49E8u, 0x3D49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49F0u;
label_3d49f0:
    // 0x3d49f0: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3d49f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3d49f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d49f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d49f8: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x3D49F8u;
    {
        const bool branch_taken_0x3d49f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49F8u;
        // 0x3d49fc: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d49f8) {
            ctx->pc = 0x3D4CC8u;
            goto label_3d4cc8;
        }
    }
    ctx->pc = 0x3D4A00u;
label_3d4a00:
    // 0x3d4a00: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3d4a00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3d4a04: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3d4a04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d4a08: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3d4a08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d4a0c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3d4a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d4a10: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3d4a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d4a14: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3d4a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3d4a18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d4a1c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3d4a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d4a20:
    // 0x3d4a20: 0x8606056a  lh          $a2, 0x56A($s0)
    ctx->pc = 0x3d4a20u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
    // 0x3d4a24: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4A24u;
    {
        const bool branch_taken_0x3d4a24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A24u;
        // 0x3d4a28: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4a24) {
            ctx->pc = 0x3D4A38u;
            goto label_3d4a38;
        }
    }
    ctx->pc = 0x3D4A2Cu;
    // 0x3d4a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d4a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d4a30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4A30u;
    {
        const bool branch_taken_0x3d4a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A30u;
        // 0x3d4a34: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4a30) {
            ctx->pc = 0x3D4A48u;
            goto label_3d4a48;
        }
    }
    ctx->pc = 0x3D4A38u;
label_3d4a38:
    // 0x3d4a38: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3d4a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d4a3c: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x3D4A3Cu;
    SET_GPR_U32(ctx, 31, 0x3D4A44u);
    ctx->pc = 0x3D4A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4A3Cu;
    // 0x3d4a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x3D4A3Cu, 0x3D4A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A44u;
label_3d4a44:
    // 0x3d4a44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d4a48:
    // 0x3d4a48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3d4a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d4a4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3d4a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d4a50: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3D4A50u;
    SET_GPR_U32(ctx, 31, 0x3D4A58u);
    ctx->pc = 0x3D4A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4A50u;
    // 0x3d4a54: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3D4A50u, 0x3D4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A58u;
label_3d4a58:
    // 0x3d4a58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3d4a5c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3d4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3d4a60: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3d4a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d4a64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3d4a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d4a68: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x3D4A68u;
    SET_GPR_U32(ctx, 31, 0x3D4A70u);
    ctx->pc = 0x3D4A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4A68u;
    // 0x3d4a6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x3D4A68u, 0x3D4A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A70u;
label_3d4a70:
    // 0x3d4a70: 0xe6000564  swc1        $f0, 0x564($s0)
    ctx->pc = 0x3d4a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x3d4a74: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3d4a78: 0x92040569  lbu         $a0, 0x569($s0)
    ctx->pc = 0x3d4a78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1385)));
    // 0x3d4a7c: 0x24633290  addiu       $v1, $v1, 0x3290
    ctx->pc = 0x3d4a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12944));
    // 0x3d4a80: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x3d4a80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d4a84: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3d4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3d4a88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d4a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d4a8c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3d4a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d4a90: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D4A90u;
    {
        const bool branch_taken_0x3d4a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d4a90) {
            ctx->pc = 0x3D4AD0u;
            goto label_3d4ad0;
        }
    }
    ctx->pc = 0x3D4A98u;
    // 0x3d4a98: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3d4a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3d4a9c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d4a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d4aa0: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x3d4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x3d4aa4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d4aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d4aa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d4aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4aac: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3d4aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3d4ab0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3d4ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d4ab4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d4ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4ab8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d4ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4abc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d4abcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4ac0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d4ac0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4ac4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D4AC4u;
    SET_GPR_U32(ctx, 31, 0x3D4ACCu);
    ctx->pc = 0x3D4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4AC4u;
    // 0x3d4ac8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D4AC4u, 0x3D4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4ACCu;
label_3d4acc:
    // 0x3d4acc: 0x0  nop
    ctx->pc = 0x3d4accu;
    // NOP
label_3d4ad0:
    // 0x3d4ad0: 0x92030569  lbu         $v1, 0x569($s0)
    ctx->pc = 0x3d4ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1385)));
    // 0x3d4ad4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d4ad8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3d4ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d4adc: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x3d4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
    // 0x3d4ae0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3d4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3d4ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d4ae8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3d4ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d4aec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3d4aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3d4af0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D4AF0u;
    {
        const bool branch_taken_0x3d4af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4af0) {
            ctx->pc = 0x3D4B08u;
            goto label_3d4b08;
        }
    }
    ctx->pc = 0x3D4AF8u;
    // 0x3d4af8: 0xc6010570  lwc1        $f1, 0x570($s0)
    ctx->pc = 0x3d4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d4afc: 0xc600056c  lwc1        $f0, 0x56C($s0)
    ctx->pc = 0x3d4afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4b00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d4b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d4b04: 0xe600056c  swc1        $f0, 0x56C($s0)
    ctx->pc = 0x3d4b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1388), bits); }
label_3d4b08:
    // 0x3d4b08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d4b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d4b0c: 0xc60c056c  lwc1        $f12, 0x56C($s0)
    ctx->pc = 0x3d4b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d4b10: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3D4B10u;
    SET_GPR_U32(ctx, 31, 0x3D4B18u);
    ctx->pc = 0x3D4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4B10u;
    // 0x3d4b14: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3D4B10u, 0x3D4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4B18u;
label_3d4b18:
    // 0x3d4b18: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3d4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d4b1c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3d4b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d4b20: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3D4B20u;
    SET_GPR_U32(ctx, 31, 0x3D4B28u);
    ctx->pc = 0x3D4B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4B20u;
    // 0x3d4b24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3D4B20u, 0x3D4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4B28u;
label_3d4b28:
    // 0x3d4b28: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d4b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d4b2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3d4b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d4b30: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3d4b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3d4b34: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x3d4b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d4b38: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3D4B38u;
    SET_GPR_U32(ctx, 31, 0x3D4B40u);
    ctx->pc = 0x3D4B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4B38u;
    // 0x3d4b3c: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3D4B38u, 0x3D4B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4B40u;
label_3d4b40:
    // 0x3d4b40: 0x8e060560  lw          $a2, 0x560($s0)
    ctx->pc = 0x3d4b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x3d4b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4b48: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3D4B48u;
    SET_GPR_U32(ctx, 31, 0x3D4B50u);
    ctx->pc = 0x3D4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4B48u;
    // 0x3d4b4c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3D4B48u, 0x3D4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4B50u;
label_3d4b50:
    // 0x3d4b50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4B50u;
    {
        const bool branch_taken_0x3d4b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B50u;
        // 0x3d4b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4b50) {
            ctx->pc = 0x3D4B60u;
            goto label_3d4b60;
        }
    }
    ctx->pc = 0x3D4B58u;
    // 0x3d4b58: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D4B58u;
    SET_GPR_U32(ctx, 31, 0x3D4B60u);
    ctx->pc = 0x3D4B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4B58u;
    // 0x3d4b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D4B58u, 0x3D4B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4B60u;
label_3d4b60:
    // 0x3d4b60: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3d4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3d4b64: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x3d4b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4b68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d4b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d4b6c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3d4b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d4b70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3d4b74: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3d4b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d4b78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d4b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4b7c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3d4b80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3d4b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3d4b84: 0x0  nop
    ctx->pc = 0x3d4b84u;
    // NOP
    // 0x3d4b88: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3d4b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3d4b8c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x3d4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x3d4b90: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3d4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x3d4b94: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3d4b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3d4b98: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x3d4b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d4b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d4ba0: 0x0  nop
    ctx->pc = 0x3d4ba0u;
    // NOP
    // 0x3d4ba4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3d4ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3d4ba8: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x3d4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x3d4bac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3d4bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3d4bb0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3d4bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3d4bb4: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x3d4bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4bb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d4bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d4bbc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3d4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x3d4bc0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3d4bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3d4bc4: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x3d4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d4bc8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3d4bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3d4bcc: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x3d4bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x3d4bd0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3d4bd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3d4bd4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3D4BD4u;
    SET_GPR_U32(ctx, 31, 0x3D4BDCu);
    ctx->pc = 0x3D4BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4BD4u;
    // 0x3d4bd8: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3D4BD4u, 0x3D4BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4BDCu;
label_3d4bdc:
    // 0x3d4bdc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d4be0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3d4be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d4be4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3D4BE4u;
    SET_GPR_U32(ctx, 31, 0x3D4BECu);
    ctx->pc = 0x3D4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4BE4u;
    // 0x3d4be8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3D4BE4u, 0x3D4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4BECu;
label_3d4bec:
    // 0x3d4bec: 0x92070568  lbu         $a3, 0x568($s0)
    ctx->pc = 0x3d4becu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x3d4bf0: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x3d4bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x3d4bf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d4bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4bfc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3d4bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d4c00: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3d4c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d4c04: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3d4c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3d4c08: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3d4c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d4c0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3d4c0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3d4c10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d4c10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4c14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d4c14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4c18: 0xc0c0928  jal         func_3024A0
    ctx->pc = 0x3D4C18u;
    SET_GPR_U32(ctx, 31, 0x3D4C20u);
    ctx->pc = 0x3D4C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4C18u;
    // 0x3d4c1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024A0u, 0x3D4C18u, 0x3D4C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4C20u;
label_3d4c20:
    // 0x3d4c20: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3d4c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3d4c24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4C24u;
    {
        const bool branch_taken_0x3d4c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C24u;
        // 0x3d4c28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4c24) {
            ctx->pc = 0x3D4C38u;
            goto label_3d4c38;
        }
    }
    ctx->pc = 0x3D4C2Cu;
    // 0x3d4c2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D4C2Cu;
    {
        const bool branch_taken_0x3d4c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4c2c) {
            ctx->pc = 0x3D4CB8u;
            goto label_3d4cb8;
        }
    }
    ctx->pc = 0x3D4C34u;
    // 0x3d4c34: 0x0  nop
    ctx->pc = 0x3d4c34u;
    // NOP
label_3d4c38:
    // 0x3d4c38: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3d4c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d4c3c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d4c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d4c40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d4c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d4c44: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3d4c44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d4c48: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3d4c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3d4c4c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D4C4Cu;
    {
        const bool branch_taken_0x3d4c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d4c4c) {
            ctx->pc = 0x3D4C88u;
            goto label_3d4c88;
        }
    }
    ctx->pc = 0x3D4C54u;
    // 0x3d4c54: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3d4c54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d4c58: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d4c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d4c5c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D4C5Cu;
    {
        const bool branch_taken_0x3d4c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C5Cu;
        // 0x3d4c60: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4c5c) {
            ctx->pc = 0x3D4CB0u;
            goto label_3d4cb0;
        }
    }
    ctx->pc = 0x3D4C64u;
    // 0x3d4c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4c68: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d4c68u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d4c6c: 0x0  nop
    ctx->pc = 0x3d4c6cu;
    // NOP
    // 0x3d4c70: 0x0  nop
    ctx->pc = 0x3d4c70u;
    // NOP
    // 0x3d4c74: 0x2010  mfhi        $a0
    ctx->pc = 0x3d4c74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d4c78: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3d4c78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d4c7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D4C7Cu;
    {
        const bool branch_taken_0x3d4c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C7Cu;
        // 0x3d4c80: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4c7c) {
            ctx->pc = 0x3D4CB0u;
            goto label_3d4cb0;
        }
    }
    ctx->pc = 0x3D4C84u;
    // 0x3d4c84: 0x0  nop
    ctx->pc = 0x3d4c84u;
    // NOP
label_3d4c88:
    // 0x3d4c88: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3d4c88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3d4c8c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d4c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d4c90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D4C90u;
    {
        const bool branch_taken_0x3d4c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4c90) {
            ctx->pc = 0x3D4CB0u;
            goto label_3d4cb0;
        }
    }
    ctx->pc = 0x3D4C98u;
    // 0x3d4c98: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3d4c98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d4c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4ca0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3d4ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d4ca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4CA4u;
    {
        const bool branch_taken_0x3d4ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CA4u;
        // 0x3d4ca8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4ca4) {
            ctx->pc = 0x3D4CB8u;
            goto label_3d4cb8;
        }
    }
    ctx->pc = 0x3D4CACu;
    // 0x3d4cac: 0x0  nop
    ctx->pc = 0x3d4cacu;
    // NOP
label_3d4cb0:
    // 0x3d4cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4cb4: 0x0  nop
    ctx->pc = 0x3d4cb4u;
    // NOP
label_3d4cb8:
    // 0x3d4cb8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4CB8u;
    {
        const bool branch_taken_0x3d4cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CB8u;
        // 0x3d4cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4cb8) {
            ctx->pc = 0x3D4CC8u;
            goto label_3d4cc8;
        }
    }
    ctx->pc = 0x3D4CC0u;
    // 0x3d4cc0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D4CC0u;
    SET_GPR_U32(ctx, 31, 0x3D4CC8u);
    ctx->pc = 0x3D4CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4CC0u;
    // 0x3d4cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D4CC0u, 0x3D4CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4CC8u;
label_3d4cc8:
    // 0x3d4cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d4cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d4ccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d4cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CD0u;
        // 0x3d4cd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4CD8u;
}
