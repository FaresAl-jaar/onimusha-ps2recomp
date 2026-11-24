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

// Function: sub_00251940
// Address: 0x251940 - 0x2519f4
void sub_00251940_0x251940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251940_0x251940");
#endif

    switch (ctx->pc) {
        case 0x251940u: goto label_251940;
        case 0x251944u: goto label_251944;
        case 0x251948u: goto label_251948;
        case 0x25194cu: goto label_25194c;
        case 0x251950u: goto label_251950;
        case 0x251954u: goto label_251954;
        case 0x251958u: goto label_251958;
        case 0x25195cu: goto label_25195c;
        case 0x251960u: goto label_251960;
        case 0x251964u: goto label_251964;
        case 0x251968u: goto label_251968;
        case 0x25196cu: goto label_25196c;
        case 0x251970u: goto label_251970;
        case 0x251974u: goto label_251974;
        case 0x251978u: goto label_251978;
        case 0x25197cu: goto label_25197c;
        case 0x251980u: goto label_251980;
        case 0x251984u: goto label_251984;
        case 0x251988u: goto label_251988;
        case 0x25198cu: goto label_25198c;
        case 0x251990u: goto label_251990;
        case 0x251994u: goto label_251994;
        case 0x251998u: goto label_251998;
        case 0x25199cu: goto label_25199c;
        case 0x2519a0u: goto label_2519a0;
        case 0x2519a4u: goto label_2519a4;
        case 0x2519a8u: goto label_2519a8;
        case 0x2519acu: goto label_2519ac;
        case 0x2519b0u: goto label_2519b0;
        case 0x2519b4u: goto label_2519b4;
        case 0x2519b8u: goto label_2519b8;
        case 0x2519bcu: goto label_2519bc;
        case 0x2519c0u: goto label_2519c0;
        case 0x2519c4u: goto label_2519c4;
        case 0x2519c8u: goto label_2519c8;
        case 0x2519ccu: goto label_2519cc;
        case 0x2519d0u: goto label_2519d0;
        case 0x2519d4u: goto label_2519d4;
        case 0x2519d8u: goto label_2519d8;
        case 0x2519dcu: goto label_2519dc;
        case 0x2519e0u: goto label_2519e0;
        case 0x2519e4u: goto label_2519e4;
        case 0x2519e8u: goto label_2519e8;
        case 0x2519ecu: goto label_2519ec;
        case 0x2519f0u: goto label_2519f0;
        default: break;
    }

    ctx->pc = 0x251940u;

label_251940:
    // 0x251940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_251944:
    // 0x251944: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_251948:
    if (ctx->pc == 0x251948u) {
        ctx->pc = 0x251948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251944u;
        // 0x251948: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25194Cu;
        goto label_25194c;
    }
    ctx->pc = 0x251944u;
    {
        const bool branch_taken_0x251944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x251948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251944u;
        // 0x251948: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251944) {
            ctx->pc = 0x251960u;
            goto label_251960;
        }
    }
    ctx->pc = 0x25194Cu;
label_25194c:
    // 0x25194c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x25194cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251950:
    // 0x251950: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251954:
    // 0x251954: 0x2484ed30  addiu       $a0, $a0, -0x12D0
    ctx->pc = 0x251954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962480));
label_251958:
    // 0x251958: 0x10000008  b           . + 4 + (0x8 << 2)
label_25195c:
    if (ctx->pc == 0x25195Cu) {
        ctx->pc = 0x25195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251958u;
        // 0x25195c: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251960u;
        goto label_251960;
    }
    ctx->pc = 0x251958u;
    {
        const bool branch_taken_0x251958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251958u;
        // 0x25195c: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251958) {
            ctx->pc = 0x25197Cu;
            goto label_25197c;
        }
    }
    ctx->pc = 0x251960u;
label_251960:
    // 0x251960: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x251960u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_251964:
    // 0x251964: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_251968:
    if (ctx->pc == 0x251968u) {
        ctx->pc = 0x251968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251964u;
        // 0x251968: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25196Cu;
        goto label_25196c;
    }
    ctx->pc = 0x251964u;
    {
        const bool branch_taken_0x251964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251964) {
            ctx->pc = 0x251968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251964u;
            // 0x251968: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x251990u;
            goto label_251990;
        }
    }
    ctx->pc = 0x25196Cu;
label_25196c:
    // 0x25196c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x25196cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251970:
    // 0x251970: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251974:
    // 0x251974: 0x2484ed40  addiu       $a0, $a0, -0x12C0
    ctx->pc = 0x251974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962496));
label_251978:
    // 0x251978: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x251978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
label_25197c:
    // 0x25197c: 0xc0944dc  jal         func_251370
label_251980:
    if (ctx->pc == 0x251980u) {
        ctx->pc = 0x251984u;
        goto label_251984;
    }
    ctx->pc = 0x25197Cu;
    SET_GPR_U32(ctx, 31, 0x251984u);
    ctx->pc = 0x251370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251370u, 0x25197Cu, 0x251984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251984u;
label_251984:
    // 0x251984: 0x10000018  b           . + 4 + (0x18 << 2)
label_251988:
    if (ctx->pc == 0x251988u) {
        ctx->pc = 0x251988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251984u;
        // 0x251988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25198Cu;
        goto label_25198c;
    }
    ctx->pc = 0x251984u;
    {
        const bool branch_taken_0x251984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251984u;
        // 0x251988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251984) {
            ctx->pc = 0x2519E8u;
            goto label_2519e8;
        }
    }
    ctx->pc = 0x25198Cu;
label_25198c:
    // 0x25198c: 0x0  nop
    ctx->pc = 0x25198cu;
    // NOP
label_251990:
    // 0x251990: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_251994:
    if (ctx->pc == 0x251994u) {
        ctx->pc = 0x251994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251990u;
        // 0x251994: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251998u;
        goto label_251998;
    }
    ctx->pc = 0x251990u;
    {
        const bool branch_taken_0x251990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251990u;
        // 0x251994: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251990) {
            ctx->pc = 0x2519B8u;
            goto label_2519b8;
        }
    }
    ctx->pc = 0x251998u;
label_251998:
    // 0x251998: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x251998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_25199c:
    // 0x25199c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2519a0:
    if (ctx->pc == 0x2519A0u) {
        ctx->pc = 0x2519A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25199Cu;
        // 0x2519a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519A4u;
        goto label_2519a4;
    }
    ctx->pc = 0x25199Cu;
    {
        const bool branch_taken_0x25199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25199c) {
            ctx->pc = 0x2519A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25199Cu;
            // 0x2519a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2519E8u;
            goto label_2519e8;
        }
    }
    ctx->pc = 0x2519A4u;
label_2519a4:
    // 0x2519a4: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x2519a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2519a8:
    // 0x2519a8: 0x40f809  jalr        $v0
label_2519ac:
    if (ctx->pc == 0x2519ACu) {
        ctx->pc = 0x2519ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519A8u;
        // 0x2519ac: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519B0u;
        goto label_2519b0;
    }
    ctx->pc = 0x2519A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2519B0u);
        ctx->pc = 0x2519ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519A8u;
        // 0x2519ac: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2519A8u, 0x2519B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2519B0u;
label_2519b0:
    // 0x2519b0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2519b4:
    if (ctx->pc == 0x2519B4u) {
        ctx->pc = 0x2519B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519B0u;
        // 0x2519b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519B8u;
        goto label_2519b8;
    }
    ctx->pc = 0x2519B0u;
    {
        const bool branch_taken_0x2519b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519B0u;
        // 0x2519b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519b0) {
            ctx->pc = 0x2519E8u;
            goto label_2519e8;
        }
    }
    ctx->pc = 0x2519B8u;
label_2519b8:
    // 0x2519b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2519b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2519bc:
    // 0x2519bc: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2519bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2519c0:
    // 0x2519c0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2519c4:
    if (ctx->pc == 0x2519C4u) {
        ctx->pc = 0x2519C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519C0u;
        // 0x2519c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519C8u;
        goto label_2519c8;
    }
    ctx->pc = 0x2519C0u;
    {
        const bool branch_taken_0x2519c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519C0u;
        // 0x2519c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519c0) {
            ctx->pc = 0x2519E4u;
            goto label_2519e4;
        }
    }
    ctx->pc = 0x2519C8u;
label_2519c8:
    // 0x2519c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2519c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2519cc:
    // 0x2519cc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2519ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2519d0:
    // 0x2519d0: 0x0  nop
    ctx->pc = 0x2519d0u;
    // NOP
label_2519d4:
    // 0x2519d4: 0x0  nop
    ctx->pc = 0x2519d4u;
    // NOP
label_2519d8:
    // 0x2519d8: 0x0  nop
    ctx->pc = 0x2519d8u;
    // NOP
label_2519dc:
    // 0x2519dc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_2519e0:
    if (ctx->pc == 0x2519E0u) {
        ctx->pc = 0x2519E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519DCu;
        // 0x2519e0: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519E4u;
        goto label_2519e4;
    }
    ctx->pc = 0x2519DCu;
    {
        const bool branch_taken_0x2519dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2519E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519DCu;
        // 0x2519e0: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519dc) {
            ctx->pc = 0x2519C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2519c8;
        }
    }
    ctx->pc = 0x2519E4u;
label_2519e4:
    // 0x2519e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2519e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2519e8:
    // 0x2519e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2519e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2519ec:
    // 0x2519ec: 0x3e00008  jr          $ra
label_2519f0:
    if (ctx->pc == 0x2519F0u) {
        ctx->pc = 0x2519F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519ECu;
        // 0x2519f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2519F4u;
        goto label_fallthrough_0x2519ec;
    }
    ctx->pc = 0x2519ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2519F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2519ECu;
        // 0x2519f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2519ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2519ec:
    ctx->pc = 0x2519F4u;
}
