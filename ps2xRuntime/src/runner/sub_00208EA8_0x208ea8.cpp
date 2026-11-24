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

// Function: sub_00208EA8
// Address: 0x208ea8 - 0x208fac
void sub_00208EA8_0x208ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208EA8_0x208ea8");
#endif

    switch (ctx->pc) {
        case 0x208eccu: goto label_208ecc;
        case 0x208f60u: goto label_208f60;
        case 0x208f7cu: goto label_208f7c;
        default: break;
    }

    ctx->pc = 0x208ea8u;

    // 0x208ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208eb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x208eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208eb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ebc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x208ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x208ec0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x208ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x208ec4: 0xc081d84  jal         func_207610
    ctx->pc = 0x208EC4u;
    SET_GPR_U32(ctx, 31, 0x208ECCu);
    ctx->pc = 0x208EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EC4u;
    // 0x208ec8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x208EC4u, 0x208ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208ECCu;
label_208ecc:
    // 0x208ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208ed0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x208ED0u;
    {
        const bool branch_taken_0x208ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ED0u;
        // 0x208ed4: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ed0) {
            ctx->pc = 0x208EF8u;
            goto label_208ef8;
        }
    }
    ctx->pc = 0x208ED8u;
    // 0x208ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208ee0: 0x24847d58  addiu       $a0, $a0, 0x7D58
    ctx->pc = 0x208ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32088));
    // 0x208ee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208ee8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x208ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208eec: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x208EECu;
    ctx->pc = 0x208EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EECu;
    // 0x208ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x208EF4u;
    // 0x208ef4: 0x0  nop
    ctx->pc = 0x208ef4u;
    // NOP
label_208ef8:
    // 0x208ef8: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x208ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x208efc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x208EFCu;
    {
        const bool branch_taken_0x208efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208efc) {
            ctx->pc = 0x208F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208EFCu;
            // 0x208f00: 0xae32004c  sw          $s2, 0x4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208F58u;
            goto label_208f58;
        }
    }
    ctx->pc = 0x208F04u;
    // 0x208f04: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x208f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x208f08: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208F08u;
    {
        const bool branch_taken_0x208f08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x208F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F08u;
        // 0x208f0c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f08) {
            ctx->pc = 0x208F30u;
            goto label_208f30;
        }
    }
    ctx->pc = 0x208F10u;
    // 0x208f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208f14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208f18: 0x24847d90  addiu       $a0, $a0, 0x7D90
    ctx->pc = 0x208f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32144));
    // 0x208f1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208f20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x208f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208f24: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x208F24u;
    ctx->pc = 0x208F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F24u;
    // 0x208f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x208F2Cu;
    // 0x208f2c: 0x0  nop
    ctx->pc = 0x208f2cu;
    // NOP
label_208f30:
    // 0x208f30: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x208F30u;
    {
        const bool branch_taken_0x208f30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x208f30) {
            ctx->pc = 0x208F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208F30u;
            // 0x208f34: 0xae32004c  sw          $s2, 0x4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208F58u;
            goto label_208f58;
        }
    }
    ctx->pc = 0x208F38u;
    // 0x208f38: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x208f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x208f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208f44: 0x24847dd8  addiu       $a0, $a0, 0x7DD8
    ctx->pc = 0x208f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32216));
    // 0x208f48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208f4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x208f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208f50: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x208F50u;
    ctx->pc = 0x208F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F50u;
    // 0x208f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x208F58u;
label_208f58:
    // 0x208f58: 0xc081dae  jal         func_2076B8
    ctx->pc = 0x208F58u;
    SET_GPR_U32(ctx, 31, 0x208F60u);
    ctx->pc = 0x208F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F58u;
    // 0x208f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076B8u, 0x208F58u, 0x208F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F60u;
label_208f60:
    // 0x208f60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x208f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208f64: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x208F64u;
    {
        const bool branch_taken_0x208f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x208f64) {
            ctx->pc = 0x208F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208F64u;
            // 0x208f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208F90u;
            goto label_208f90;
        }
    }
    ctx->pc = 0x208F6Cu;
    // 0x208f6c: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x208F6Cu;
    {
        const bool branch_taken_0x208f6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x208f6c) {
            ctx->pc = 0x208F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208F6Cu;
            // 0x208f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208F90u;
            goto label_208f90;
        }
    }
    ctx->pc = 0x208F74u;
    // 0x208f74: 0xc0813fa  jal         func_204FE8
    ctx->pc = 0x208F74u;
    SET_GPR_U32(ctx, 31, 0x208F7Cu);
    ctx->pc = 0x208F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F74u;
    // 0x208f78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204FE8u, 0x208F74u, 0x208F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F7Cu;
label_208f7c:
    // 0x208f7c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x208f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x208f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x208f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f84: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x208f84u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x208f88: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x208f88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x208f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_208f90:
    // 0x208f90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208f9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208fa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x208fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208fa4: 0x80823ec  j           func_208FB0
    ctx->pc = 0x208FA4u;
    ctx->pc = 0x208FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208FA4u;
    // 0x208fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208FB0u;
    sub_00208FB0_0x208fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x208FACu;
}
