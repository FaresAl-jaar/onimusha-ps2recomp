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

// Function: sub_00228F38
// Address: 0x228f38 - 0x229094
void sub_00228F38_0x228f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228F38_0x228f38");
#endif

    switch (ctx->pc) {
        case 0x228f6cu: goto label_228f6c;
        case 0x228f74u: goto label_228f74;
        case 0x228f80u: goto label_228f80;
        case 0x228f8cu: goto label_228f8c;
        case 0x228f94u: goto label_228f94;
        case 0x228fa4u: goto label_228fa4;
        case 0x228fb4u: goto label_228fb4;
        case 0x228fc0u: goto label_228fc0;
        case 0x229010u: goto label_229010;
        case 0x22901cu: goto label_22901c;
        default: break;
    }

    ctx->pc = 0x228f38u;

    // 0x228f38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x228f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x228f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x228f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x228f48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x228f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x228f4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x228f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x228f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x228f54: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x228f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x228f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x228f5c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x228f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x228f60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x228f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x228f64: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x228F64u;
    SET_GPR_U32(ctx, 31, 0x228F6Cu);
    ctx->pc = 0x228F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F64u;
    // 0x228f68: 0x26140018  addiu       $s4, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x228F64u, 0x228F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F6Cu;
label_228f6c:
    // 0x228f6c: 0xc08a426  jal         func_229098
    ctx->pc = 0x228F6Cu;
    SET_GPR_U32(ctx, 31, 0x228F74u);
    ctx->pc = 0x228F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F6Cu;
    // 0x228f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229098u, 0x228F6Cu, 0x228F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F74u;
label_228f74:
    // 0x228f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f78: 0xc08d4f2  jal         func_2353C8
    ctx->pc = 0x228F78u;
    SET_GPR_U32(ctx, 31, 0x228F80u);
    ctx->pc = 0x228F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F78u;
    // 0x228f7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2353C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2353C8u, 0x228F78u, 0x228F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F80u;
label_228f80:
    // 0x228f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f84: 0xc08d4f8  jal         func_2353E0
    ctx->pc = 0x228F84u;
    SET_GPR_U32(ctx, 31, 0x228F8Cu);
    ctx->pc = 0x228F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F84u;
    // 0x228f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2353E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2353E0u, 0x228F84u, 0x228F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F8Cu;
label_228f8c:
    // 0x228f8c: 0xc08a0e0  jal         func_228380
    ctx->pc = 0x228F8Cu;
    SET_GPR_U32(ctx, 31, 0x228F94u);
    ctx->pc = 0x228380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228380u, 0x228F8Cu, 0x228F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F94u;
label_228f94:
    // 0x228f94: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x228f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x228f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f9c: 0xc08a0c2  jal         func_228308
    ctx->pc = 0x228F9Cu;
    SET_GPR_U32(ctx, 31, 0x228FA4u);
    ctx->pc = 0x228FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F9Cu;
    // 0x228fa0: 0x248492e8  addiu       $a0, $a0, -0x6D18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228308u, 0x228F9Cu, 0x228FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FA4u;
label_228fa4:
    // 0x228fa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x228fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x228fa8: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x228fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x228fac: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x228FACu;
    SET_GPR_U32(ctx, 31, 0x228FB4u);
    ctx->pc = 0x228FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FACu;
    // 0x228fb0: 0x8c550004  lw          $s5, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x228FACu, 0x228FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FB4u;
label_228fb4:
    // 0x228fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x228fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fb8: 0xc08a108  jal         func_228420
    ctx->pc = 0x228FB8u;
    SET_GPR_U32(ctx, 31, 0x228FC0u);
    ctx->pc = 0x228FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FB8u;
    // 0x228fbc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228420u, 0x228FB8u, 0x228FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FC0u;
label_228fc0:
    // 0x228fc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x228fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fc8: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x228FC8u;
    {
        const bool branch_taken_0x228fc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x228FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FC8u;
        // 0x228fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fc8) {
            ctx->pc = 0x229008u;
            goto label_229008;
        }
    }
    ctx->pc = 0x228FD0u;
    // 0x228fd0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228fd4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x228fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x228fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228fdc: 0x24849928  addiu       $a0, $a0, -0x66D8
    ctx->pc = 0x228fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940968));
    // 0x228fe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x228fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x228fe4: 0x24a59950  addiu       $a1, $a1, -0x66B0
    ctx->pc = 0x228fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941008));
    // 0x228fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x228fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x228fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x228ff0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x228ff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228ff4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x228ff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x228ff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x228ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228ffc: 0x808bac2  j           func_22EB08
    ctx->pc = 0x228FFCu;
    ctx->pc = 0x229000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FFCu;
    // 0x229000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB08u;
    sub_0022EB08_0x22eb08(rdram, ctx, runtime); return;
    ctx->pc = 0x229004u;
    // 0x229004: 0x0  nop
    ctx->pc = 0x229004u;
    // NOP
label_229008:
    // 0x229008: 0xc08a398  jal         func_228E60
    ctx->pc = 0x229008u;
    SET_GPR_U32(ctx, 31, 0x229010u);
    ctx->pc = 0x22900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229008u;
    // 0x22900c: 0x8e860000  lw          $a2, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E60u, 0x229008u, 0x229010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229010u;
label_229010:
    // 0x229010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229014: 0xc08a3a8  jal         func_228EA0
    ctx->pc = 0x229014u;
    SET_GPR_U32(ctx, 31, 0x22901Cu);
    ctx->pc = 0x229018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229014u;
    // 0x229018: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228EA0u, 0x229014u, 0x22901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22901Cu;
label_22901c:
    // 0x22901c: 0xaeb000c0  sw          $s0, 0xC0($s5)
    ctx->pc = 0x22901cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 16));
    // 0x229020: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x229020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x229024: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x229024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x229028: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x229028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x22902c: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x22902cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x229030: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x229030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x229034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x229038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22903c: 0x244290c0  addiu       $v0, $v0, -0x6F40
    ctx->pc = 0x22903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938816));
    // 0x229040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x229040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229044: 0x24639190  addiu       $v1, $v1, -0x6E70
    ctx->pc = 0x229044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939024));
    // 0x229048: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x229048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22904c: 0x24849158  addiu       $a0, $a0, -0x6EA8
    ctx->pc = 0x22904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938968));
    // 0x229050: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x229050u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229054: 0x24a59288  addiu       $a1, $a1, -0x6D78
    ctx->pc = 0x229054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939272));
    // 0x229058: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x229058u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22905c: 0x24c692d0  addiu       $a2, $a2, -0x6D30
    ctx->pc = 0x22905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939344));
    // 0x229060: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x229060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229064: 0x3c07004d  lui         $a3, 0x4D
    ctx->pc = 0x229064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)77 << 16));
    // 0x229068: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x229068u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x22906c: 0x3c09004d  lui         $t1, 0x4D
    ctx->pc = 0x22906cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)77 << 16));
    // 0x229070: 0x3c0a004c  lui         $t2, 0x4C
    ctx->pc = 0x229070u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)76 << 16));
    // 0x229074: 0x3c0b004c  lui         $t3, 0x4C
    ctx->pc = 0x229074u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)76 << 16));
    // 0x229078: 0xace28f98  sw          $v0, -0x7068($a3)
    ctx->pc = 0x229078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4C8F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C8F98u, _value); } while (0);
    // 0x22907c: 0xad03b0c8  sw          $v1, -0x4F38($t0)
    ctx->pc = 0x22907cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BB0C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB0C8u, _value); } while (0);
    // 0x229080: 0xad248f9c  sw          $a0, -0x7064($t1)
    ctx->pc = 0x229080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4C8F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C8F9Cu, _value); } while (0);
    // 0x229084: 0xad45b0c0  sw          $a1, -0x4F40($t2)
    ctx->pc = 0x229084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4BB0C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB0C0u, _value); } while (0);
    // 0x229088: 0xad66b0c4  sw          $a2, -0x4F3C($t3)
    ctx->pc = 0x229088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4BB0C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB0C4u, _value); } while (0);
    // 0x22908c: 0x808d1fc  j           func_2347F0
    ctx->pc = 0x22908Cu;
    ctx->pc = 0x229090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22908Cu;
    // 0x229090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347F0u;
    sub_002347F0_0x2347f0(rdram, ctx, runtime); return;
    ctx->pc = 0x229094u;
}
